--Tạo Database
create database Sinhvien
go-- Gap Go dung va thuc thi cau tren roi tiep tuc chay xuong duoi Lam tiep

use Sinhvien
--Tạo Bảng
create table Thongtin
(
  Maso int,
  Hoten nvarchar(30),--su dung nhap tieng viet vi co n=>UNICODE(Mang dong)
  Diachia char(30),--Ki tu khong nhap duoc tieng viet(Mang Tinh)
  Ngaysinh date ,--kieu Nhan vao Ngay Thang nam
  GioiTinh bit,--Kieu Nhan vao 0,1(True,false)
  ChuThich text--Kieu unicode Nhap van ban!
  --dong cuoi Khong can (,)
)
go
--Insert Du lieu vao Cac cot Ne
--Insert Theo Thu Tu ,cac du lieu duoc khai bao o tren!(Neu Muon Khong sai cho Thang nao thi rut no ra)
insert dbo.Thongtin
(
Maso,
Hoten,
Ngaysinh,
GioiTinh,
ChuThich,
Diachia

)
values
(
  1289,--Maso ne
  N'Vương Min nè',--vì tren khai báo unicode nên có <N''> để có nhận được Tiếng việt Nhé!
  '19981024',--Theo Kiểu yyyyMMdd
   1,--gioi tinh 1:true
   N'đây là chú Thích văn bản',
   N'địa chỉ NÈ'--vì ở đây là kiểu char Nên cho tiếng việt là sai!
)
--Insert Theo Thu THu Tren Ma CHỉ cần values
insert dbo.Thongtin
values
(
 162,--Maso ne
  N'Vương Min',--vì tren khai báo unicode nên có <N''> để có nhận được Tiếng việt Nhé!
  'diachi',
  '19981024',--Theo Kiểu yyyyMMdd
   0,--gioi tinh 1:true
   N' chú Thích văn bản'
  )
  --Delete dữ liệu mình mong muốn(Delete-wHERE)
  delete dbo.Thongtin  where Hoten=N'Vương Min Nè' 
  --Delete Toàn bộ dữ liệu Trong Bảng
  delete dbo.Thongtin
  --UPDATE Toan Bo bang
  update dbo.Thongtin set GioiTinh=0
  --Update Theo Nhiều Thuộc tính
  update dbo.Thongtin set Hoten='Min',ChuThich=N' Chú Thích!' 