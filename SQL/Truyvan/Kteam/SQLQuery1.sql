DROP DATABASE QUANLIBANHANG
USE HowKteam
-- Xuất ra thông tin giáo viên mà có hơn 2 người thân
SELECT *
FROM dbo.GIAOVIEN AS GV
WHERE 1<
(SELECT COUNT(*)
FROM dbo.NGUOITHAN AS NT
WHERE GV.MAGV=NT.MAGV
)
SELECT *
FROM dbo.GIAOVIEN,dbo.NGUOITHAN
WHERE GIAOVIEN.MAGV=dbo.NGUOITHAN.MAGV
/*Xuất ra danh sách các giáo viên lớn tuổi hơn ít nhất 5 giáo viên trong trường

Lấy ra danh sách (MaGV, Tuoi) as GVT
Sắp xếp giảm dần -> order by desc
Lấy ra danh sách GVT2 với số lượng phần tử = 5
Kiểm tra mã GV tồn tại trong GVT2 là đúng*/
--Kiểm tra xem giáo viên 001 có phải là giáo viên quản lý chuyên môn hay không
SELECT * 
FROM dbo.GIAOVIEN AS GV1
WHERE  GV1.MAGV='001'
AND GV1.MAGV IN 
(
SELECT GV2.GVQLCM
FROM dbo.GIAOVIEN AS GV2
WHERE GV1.MAGV=GV2.GVQLCM
)

-- Lấy ra danh sách các mã giáo viên QLCM
SELECT GV1.HOTEN,GV1.MAGV
FROM dbo.GIAOVIEN AS GV1,dbo.GIAOVIEN AS GV2
WHERE GV1.MAGV=GV2.GVQLCM

SELECT *
FROM dbo.GIAOVIEN
-- XUAT CAC GIAO VIEN THAM GIA NHIUE HON 1 DE TAI
SELECT *
FROM  dbo.GIAOVIEN
WHERE 1<(
SELECT COUNT(*)
FROM  dbo.THAMGIADT
WHERE dbo.THAMGIADT.MAGV=dbo.GIAOVIEN.MAGV
)
--Xuất ra thông tin của khoa mà có nhiều hơn 2 giáo viên

SELECT *
FROM dbo.KHOA
WHERE 1<
(
  SELECT * 
  FROM dbo.GIAOVIEN,dbo.BOMON
  WHERE dbo.GIAOVIEN.MABM=dbo.BOMON.MABM

)
SELECT dbo.BOMON.MABM,dbo.GIAOVIEN.MAGV,dbo.GIAOVIEN.MABM
FROM dbo.BOMON,dbo.GIAOVIEN
WHERE BOMON.MABM=dbo.GIAOVIEN.MABM
