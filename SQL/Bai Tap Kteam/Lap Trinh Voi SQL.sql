USE SINHVIEN
GO

--• Viết chương trình đếm và in ra số lượng
--các số nguyên chia hết cho 3 nằm trong
--đoạn từ 1 đến 100
DECLARE @count INT =0, @i INT =1
BEGIN
WHILE(@i<=100)
BEGIN
 IF @i%3=0
 BEGIN
     SET @count=@count+1;
     PRINT' '+@i;
  END 
 SET @i=@i+1; 
 END         
END
PRINT N'so luong :' + CAST(@count AS VARCHAR)
--SinhVien(MaSV: int, HoTen: nvarchar(30))
--Viết lệnh xác định một mã sinh viên mới theo
--qui định: mã sinh viên tăng dần, nếu có chỗ
--trống thì mã mới xác định sẽ chèn vào chỗ
--trống đó
--Vd: 1,2,3,7  mã sinh viên mới: 4
DECLARE @x INT =1
WHILE EXISTS(SELECT * FROM dbo.GIAOVIEN GV WHERE GV.MAGV=@x)
BEGIN
SET @x=@x +1;
END
PRINT N'Vi tri can tim :'+ CAST(@x AS VARCHA
--Bai tap voi Quan li thu vien

GO
DECLARE @count INT =1
DECLARE @dg VARCHAR(10)='DG00001'
WHILE EXISTS(SELECT * FROM DOCGIA DG WHERE DG.MADG=@dg )
BEGIN
       SET @count=@count+1;
       SET @dg='DG'+REPLICATE('0',5-LEN(CAST(@count AS VARCHAR)))+CAST(@count AS VARCHAR);
       
END
PRINT N'ket qua :'+@dg
--NHAN_VIEN(MaNV, HoTen, NgaySinh, CapBac,Phai)
--Cho biết những nhân viên đến tuổi về hưu (tuổi về
--hưu của nam là 60, của nữ là 55)
SELECT * FROM GIAOVIEN GV
WHERE DATEDIFF(YEAR,GV.NGSINH,GETDATE()) >= CASE GV.PHAI WHEN 'NAM' THEN 60
                                                          WHEN N'NỮ' THEN 55
                                                          END
--Cho 3 số a, b, c.
--Tìm số nhỏ nhất. In giá trị của a, b, c.
--Xuất thông báo "Số nhỏ nhất là :" 

DECLARE @a INT=2, @b INT =5,@c INT =1 ,@min INT
SET @min =@a;
IF @b<@min
    SET @min=@b
IF @c<@min
    SET @min=@c
PRINT'A = '+CAST(@a AS CHAR)+'B = '+CAST(@b AS CHAR)+'C = '+CAST(@c AS CHAR);
PRINT N'Số nhỏ nhất là:'+CAST(@min AS CHAR);        
                                               
--Cho CSDL:
--SinhVien (MaSV, Hoten, DiemTB)
--Tìm sinh viên có điểm trung bình lớn nhất và xuất thông báo theo yêu cầu sau:
-- Nếu điểm TB >= 8.0
-- [MaSV] - Điểm trung bình [DiemTB] – Xếp loại : Giỏi
-- Nếu điểm TB >= 6.5
-- [MaSV] - Điểm trung bình [DiemTB] – Xếp loại : Khá
-- Nếu điểm TB >= 5.0
-- [MaSV] - Điểm trung bình [DiemTB] – Xếp loại : Trung bình
-- Ngược lại
-- [MaSV] - Điểm trung bình [DiemTB] – Xếp loại : Yếu   
   DECLARE @maxtb FLOAT= (SELECT MAX(GV.DTB) FROM dbo.GIAOVIEN GV)  
   SELECT GV.HOTEN,GV.DTB,N'XẾP LOẠI :'= CASE WHEN   GV.DTB>=8.0 THEN N'GIỎI'
                                              WHEN GV.DTB >=6.5 THEN N'KHÁ'
                                              WHEN GV.DTB>=5 THEN N'TRUNG BÌNH'
                                              ELSE
                                                  N'YẾU'
                                                  END 
   FROM  dbo.GIAOVIEN GV 
  -- WHERE GV.DTB=@maxtb
 --Cho CSDL: SinhVien(MaSV, HoTen, NgaySinh)
--Tìm sinh viên có MaSV = „0912033‟ với định dạng như sau:
------------------------------------
--Mã SV : 0912033
--Họ tên : Nguyễn Kim Ái
--Ngày sinh : 20/9/1990DECLARE @masv NCHAR(10),@hoten NVARCHAR(50),@day DATESELECT @masv=GV.MAGV,@hoten=GV.HOTEN,@day=GV.NGSINHFROM dbo.GIAOVIEN GVWHERE GV.MAGV = '002' PRINT N'MÃ SV : '+@masv;PRINT N'HỌ TÊN:'+@hoten;PRINT N'sinh ngày:'+CAST(@day AS CHAR);--date qua nvarchar()--Cho CSDL: SinhVien(MaSV, HoTen, NgaySinh)
--            DiemThi(MaSV, MaMH, Diem)
--Tính điểm trung bình của từng sinh viên. Nếu sinh
--viên có điểm trung bình > 5.0 thì in là „đậu‟ ngược
--lại „rớt‟. In dưới dạng bảng.SELECT SV.HOTEN,DT.MSSV,AVG(DT.DIEM) AS N'DIỂM TRUNG BÌNH','KẾT QUẢ'= CASE                                       WHEN AVG(DT.DIEM)>=5.0 THEN N'ĐẬU' ELSE N'RỚT'ENDFROM dbo.DIEMTHI DT JOIN dbo.SINHVIEN SVON SV.MSSV = DT.MSSVGROUP BY SV.HOTEN,DT.MSSVGO--Cho CSDL: MonHoc(MaMH, TenMH,SoChi)
--Kiểm tra MaMH đã tồn tại chưa?
-- Nếu tồn tại rồi xuất thông báo “[MaMH] đã tồn tại”
-- Ngược lại, phát sinh MaMH mới và in thông báo “Mã
--MH mới là [MaMHmoi]”
--Ví dụ:
--Tìm được MaMH lớn nhất là : MH008
--Phát sinh MaMH mới = MH009DECLARE @idx INT =1,@mssv NCHAR(10)='SV0001';WHILE EXISTS(SELECT * FROM dbo.SINHVIEN SV WHERE SV.MSSV=@mssv)BEGIN        SET @idx =@idx+1;       SET  @mssv='SV'+REPLICATE('0',4-LEN(CAST(@idx AS VARCHAR)))+CAST(@idx AS VARCHAR);ENDPRINT N'MAMH Lớn nhất :' +'SV'+REPLICATE('0',4-LEN(CAST(@idx AS VARCHAR)))+CAST(@idx -1 AS VARCHAR)PRINT'MA MOI :'+@mssv;