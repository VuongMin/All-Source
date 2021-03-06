USE QLSINHVIEN
GO
--1. Viết hàm tính điểm trung bình của sinh viên.
CREATE FUNCTION UF_TINHDTB(@masv NCHAR(10))--phai co ngoac nhe du co para hay ko
RETURNS FLOAT
AS
BEGIN
RETURN (SELECT AVG(DT.DIEM) FROM dbo.DIEMTHI DT WHERE DT.MSSV=@masv)
END
GO
--DUNG SELECT HOAC PRIN DE XUAT RA MAN HINH
PRINT'Diem trung binh : '+ CAST(dbo.UF_TINHDTB('SV0001') AS VARCHAR)
--2. Viết hàm tìm mã sinh viên có điểm trung bình cao nhất.GOCREATE FUNCTION UF_DTBMAX()RETURNS NCHAR(10)ASBEGIN    RETURN (SELECT DT.MSSV            FROM dbo.DIEMTHI DT            GROUP BY DT.MSSV            HAVING AVG(DT.DIEM) >=ALL(SELECT AVG(DT1.DIEM)                                      FROM dbo.DIEMTHI DT1                                      GROUP BY DT1.MSSV)            )END  GOPRINT'SINH VIEN DIEM TRUNG BINH MAX :'+CAST(dbo.UF_DTBMAX()AS VARCHAR)--3. Viết hàm xuất danh sách các sinh viên có điểm < 5.GOALTER FUNCTION UF_XUATDIEMDAU()RETURNS TABLEAS RETURN SELECT DISTINCT SV.*         FROM DIEMTHI DT JOIN SINHVIEN SV         ON DT.MSSV=SV.MSSV         WHERE dbo.UF_TINHDTB(SV.MSSV)<5.0         GO--VI DO LA BANG NEN TAO COI NHU BANGSELECT * FROM UF_XUATDIEMDAU()GO--4. Viết thủ tục xếp loại cho sinh viên (gọi hàm câu 1).CREATE FUNCTION UF_XEPLOAI()RETURNS TABLE AS RETURN SELECT SV.HOTEN,SV.MSSV,'XEP LOAI'=CASE WHEN dbo.UF_TINHDTB(SV.MSSV)>5.0 THEN N'DAU'                                                                                  ELSE 'ROT'                                                                                  END        FROM SINHVIEN SV GO SELECT * FROM UF_XEPLOAI()      SELECT * FROM dbo.DIEMTHI  