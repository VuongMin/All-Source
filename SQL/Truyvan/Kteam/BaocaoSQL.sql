USE QUANLITHUVIEN
GO

-- tao thu tuc them sua xoa len bang sach

GO

CREATE PROC USP_INSERTSACH
@masach CHAR(10)=NULL, @ten nvarchar(50)='Name',@nam DATE =getdate ,@trang INT=0 ,@macc char(10)--praramter
AS
BEGIN
--Start
IF @masach IS NULL
     PRINT N'Mã sách Không Được THiết Lập!'
ELSE IF @masach  IN (SELECT S.MASACH FROM dbo.SACH S)
     PRINT N'Mã sách đã Tồn tại!'
ELSE IF @macc NOT  IN (SELECT CC.MACC  FROM dbo.NHACUNGCAP CC)
     BEGIN
        INSERT INTO NHACUNGCAP(MACC) VALUES(@macc)
        INSERT INTO dbo.SACH
                ( MASACH, TENTG, NAMXB, SOTRANG, MACC )
        VALUES  ( @masach, -- MASACH - char(10)
                  @ten, -- TENTG - nvarchar(30)
                  @nam, -- NAMXB - date
                  @trang, -- SOTRANG - int
                  @macc  -- MACC - char(10)
                  )
       
     END
ELSE
  BEGIN
  INSERT INTO dbo.SACH
          ( MASACH, TENTG, NAMXB, SOTRANG, MACC )
  VALUES  ( @masach, -- MASACH - char(10)
            @ten, -- TENTG - nvarchar(30)
             @nam, -- NAMXB - date
            @trang, -- SOTRANG - int
            @macc  -- MACC - char(10)
            )
  END
--TheEnd
END 
GO

EXEC dbo.USP_INSERTSACH 
    @masach = 'MS8' , -- char(10)
    @ten = N'NEW', -- nvarchar(50)
    @nam = '2018-12-01 05:57:36', -- date
    @trang = 0, -- int
    @macc = 'CC1' -- char(10)

GO
-- DELETE

CREATE PROCEDURE USP_DELETESACH
@masach CHAR(10)--praramter
AS
BEGIN
IF @masach IS NULL PRINT N'Không xử lí được Khi không có Parater!'
IF  NOT EXISTS (SELECT S.MASACH FROM dbo.SACH S WHERE S.MASACH=@masach)
 PRINT N'Mã Sách Không đúng!'
ELSE
    BEGIN
     DELETE FROM dbo.NHACUNGCAP  WHERE MACC =  (SELECT S.MACC FROM dbo.SACH S WHERE S.MASACH=@masach)
     DELETE FROM dbo.SACH WHERE MASACH=@masach
     
    END 

END
GO

EXECUTE  USP_DELETESACH 'MS7'
SELECT * FROM dbo.SACH
SELECT * FROM dbo.NHACUNGCAP
GO
--UPDATE

CREATE PROCEDURE USP_UPDATESACH
@masach CHAR(10),@ten NVARCHAR(30)='Name',@trang INT=0 
AS
BEGIN
IF @masach IS NULL PRINT N'Không xử lí được Khi không có Parater!'
IF  NOT EXISTS (SELECT S.MASACH FROM dbo.SACH S WHERE S.MASACH=@masach)
 PRINT N'Mã Sách Không đúng!'
ELSE 
  BEGIN
     PRINT N'Chúng Tôi Sẽ Update cho Bạn Tên và Số Trang:(Không Phải Ma Sách:Lí do<Mệt>)'
     UPDATE dbo.SACH SET TENTG=@ten,SOTRANG=@trang WHERE MASACH=@masach     
  END  


END
GO
EXECUTE dbo.USP_UPDATESACH @masach = 'MS1', -- char(10)
    @ten = N'Kỳ duyên', -- nvarchar(30)
    @trang = 9 -- int

go



--tao ham tra ve bang co tham so truyen vao la  so phieu muon 
--de xem nhung doc gia tra tre han bao gom:madg,ten,songaytrehan
SELECT * FROM dbo.MUONTRA
GO
CREATE FUNCTION UF_NGAYTREHAN(@sophieu int)
RETURNS TABLE
AS 
RETURN SELECT DG.MADG,DG.TENDOCGIA,DATEDIFF(DAY,MT.NGAYMUON,MT.NGAYTRA)-MT.HENTRA AS N'NGÀY TRỄ HẠN' 
         FROM dbo.DOCGIA DG,dbo.MUONTRA MT
       WHERE DG.MADG=MT.MADG AND MT.SOPHIEUMUON =@sophieu
       AND DATEDIFF(DAY,MT.NGAYMUON,MT.NGAYTRA)-MT.HENTRA >0
      
      
       
GO

SELECT * FROM dbo.MUONTRA
SELECT * FROM dbo.DOCGIA

SELECT * FROM dbo.UF_NGAYTREHAN(2)


--tao triger delete len bang doc gia
--Tao view
GO
CREATE VIEW View_CUNGCAP AS
SELECT * FROM dbo.NHACUNGCAP CC
GO

