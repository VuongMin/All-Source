USE QLSINHVIEN
GO
--viet proc xin chao
CREATE PROC usp_xinchao
@name VARCHAR(10)
AS 
PRINT N'Xin chào :' + @name;
GO
EXEC dbo.usp_xinchao @name = 'Min' -- varchar(10)
--============================================Tao Kieu Du lieu Moi============
CREATE TYPE typeNewTable AS TABLE
(
  mabang nchar(10),
  tenbang nvarchar(50)
)
--Them du lieu ve kieu bang
DECLARE @bang typeNewTable
INSERT INTO @bang
        ( mabang, tenbang )
VALUES  ( '11', -- mabang - nchar(10)
          N'white'  -- tenbang - nvarchar(50)
          )
SELECT * FROM @bang
--Viết thủ tục thêm một đăng ký của sinh viên vào một
--học phầnGO ALTER PROC usp_ThemSinhVien@mssv NCHAR(10)= NULLASBEGINIF @mssv IS NULL    PRINT N'Ban chua nhap Ma so!';ELSE IF EXISTS (SELECT * FROM SINHVIEN SV WHERE SV.MSSV =@mssv)      PRINT'Ma so ton tai'; ELSE INSERT INTO dbo.SINHVIEN
        ( MSSV, HOTEN, NGAYSINH )
VALUES  ( @mssv, -- MSSV - nchar(10)
          N'text', -- HOTEN - nvarchar(50)
          GETDATE()  -- NGAYSINH - date
          )  END
GO
 EXEC dbo.usp_ThemSinhVien @mssv = N'SV0004' -- nchar(10)
 
---====================OUT PUT=====================================
--TINH DIEM TRUNG BINH CUA SV 'SV0001'
CREATE PROC USP_DIEMTB
@ma NCHAR(10),
@ketqua FLOAT OUT 
AS 
BEGIN
--DECLARE @ma NCHAR(10)='SV0001'
SELECT @ketqua = AVG(DT.DIEM) 
FROM dbo.DIEMTHI DT
WHERE DT.MSSV=@ma

END
GO
DECLARE @nhan FLOAT
DECLARE @ma NCHAR(10) 
EXECUTE USP_DIEMTB 'SV0001', @nhan OUTPUT
PRINT @nhan
