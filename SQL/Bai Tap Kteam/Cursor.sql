USE HowKteam
GO
DECLARE contro CURSOR
FOR SELECT GV.MAGV,GV.HOTEN FROM dbo.GIAOVIEN GV
--TAO BIEN DE NHAN TU TREN
DECLARE @magv NCHAR(3),@ten NVARCHAR(50)
--Mo con tro
OPEN contro 
--Dua con tro vao o dau tien vineu dua thi no dang tro den vung nho ko xac dinh
FETCH NEXT FROM  contro INTO @magv,@ten
WHILE (@@FETCH_STATUS = 0)--van trong bang thi = 0 <thanh cong>
BEGIN
 PRINT'-------------------------------------';
 PRINT N'Mã :'+ @magv;
 PRINT N'Tên:'+@ten;
 FETCH NEXT FROM  contro INTO @magv,@ten--CHO TRỎ Ô NHỚ TIẾP THEO
END
--DONG CURSOR
CLOSE contro
--HUY CON TRO
DEALLOCATE contro