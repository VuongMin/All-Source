create database Hocsinh
go
use Hocsinh
go
create table Bomon
(
  MaBM char(10) primary key,
  TenBM nvarchar(30)
)
go
create table Giaovien
(
MaGv  char(10) primary key,
TenGV Nvarchar(30),
MaBM char(10) foreign key (MaBM) references Bomon(MaBm)
)
go
create table Lop
(
MaLop char(10) primary key,
TenLop Nvarchar(30) default N'Tin Hoc'

)
go
create table Hocsinh
(
 MaHs char(10) primary key,
 TenHS nvarchar(30),
 sobaodanh int,
 MaLop char(10) foreign key (MaLop) references Lop(MaLop)
)
go