USE HowKteam
GO
--Ví dụ 2: Tìm các giáo viên không tham gia đề tài nà
SELECT * FROM dbo.THAMGIADT

SELECT GV.MAGV
FROM dbo.GIAOVIEN GV
EXCEPT --Trừ
SELECT TG.MAGV
FROM dbo.THAMGIADT TG
-- Truy vấn lồng với NOT EXISTS 
SELECT GV.MAGV
FROM dbo.GIAOVIEN GV
WHERE NOT EXISTS(SELECT * FROM dbo.THAMGIADT TG WHERE GV.MAGV=TG.MAGV)
--hoặc NOT IN

SELECT GV.MAGV
FROM dbo.GIAOVIEN GV
WHERE GV.MAGV NOT IN (SELECT TG.MAGV FROM dbo.THAMGIADT TG )

--Ví dụ 3: Tìm các giáo viên vừa tham gia đề tài vừa là trưởng bộ môn
SELECT *FROM dbo.BOMON

SELECT  TG.MAGV
FROM dbo.THAMGIADT TG
INTERSECT --giao
SELECT BM.TRUONGBM
FROM dbo.BOMON BM
--Truy vấn lồng với EXISTS 
SELECT GV.MAGV
FROM dbo.GIAOVIEN GV
WHERE EXISTS(SELECT * FROM dbo.THAMGIADT TG WHERE TG.MAGV=GV.MAGV)
AND EXISTS (SELECT * FROM dbo.BOMON BM WHERE BM.TRUONGBM= GV.MAGV)
--hoặc IN
SELECT GV.MAGV
FROM dbo.GIAOVIEN GV
WHERE GV.MAGV IN (SELECT TG.MAGV FROM dbo.THAMGIADT TG )
AND GV.MAGV IN  (SELECT BM.TRUONGBM FROM dbo.BOMON BM )

--Phếp Hội 
--- Sử dụng toán tử UNION (Các dòng trùng lắp sẽ được bỏ đi) / UNION ALL
--(Lấy tất cả các dòng của các bảng)
--Vídụ 4: Liệt kê những giáo viên có tham gia đề tài và những giáo viên là trưởng bộmôn.SELECT TG.MAGVFROM dbo.THAMGIADT TGUNION--BỎ QUA TRÙNG LẶPSELECT BM.TRUONGBMFROM dbo.BOMON BMSELECT * FROM dbo.THAMGIADTSELECT * FROM dbo.BOMON--Ví dụ 5: Tìm các giáo viên (MAGV) mà tham gia tất cả các đề tà--BI CHIA :THAMGIADT--CHIA :DETAI--KG:MAGV--LAY RA MAGV MA KHONG CO DE TAI NAO ,MA KHONG DUOC GIAO VIEN DO THAM GIA--Ví dụ 6: Tìm các giáo viên (MAGV) mà tham gia tất cả các đề tài (Dùng NOT EXISTS)SELECT * FROM dbo.THAMGIADTSELECT * FROM dbo.DETAISELECT TG.MAGVFROM dbo.THAMGIADT TGWHERE NOT EXISTS(SELECT *                 FROM dbo.DETAI DT                 WHERE NOT EXISTS(SELECT * FROM dbo.THAMGIADT TG2                                  WHERE TG2.MADT=DT.MADT                                   AND TG.MAGV=TG2.MAGV ))--Ví dụ 7: Tìm các giáo viên (MAGV) mà tham gia tất cả các đề tài (Dùng NOT
EXISTS)--Ví dụ 9: Tìm tên các giáo viên ‘HTTT’ mà tham gia tất cả các đề tài thuộc chủ đề‘QLGD’--BI CHIA:GIAOVIEN,THAMGIADT, CHIA:DETAI --TIM TAT CA GVHHTT MA KHOGN DETAI NAO MA KHONG PHAI LA CHU DE QLDGSELECT * FROM GSELECT * FROM dbo.THAMGIADTSELECT * FROM dbo.DETAISELECT DISTINCT GV.HOTEN,GV.MAGVFROM  dbo.GIAOVIEN GV JOIN dbo.THAMGIADT TG ON TG.MAGV = GV.MAGV--SU DUNG CUNG LUC ON VA WHERE DEU DCWHERE GV.MABM='HTTT'AND NOT EXISTS(SELECT *                FROM dbo.DETAI DT               WHERE DT.MACD='QLGD'                AND NOT EXISTS(SELECT * FROM dbo.THAMGIADT TG2                              WHERE TG2.MADT=DT.MADT AND TG.MAGV=TG2.MAGV )                )--Bài tập Quản lý ĐỀ TÀI:--Q58. Cho biết tên giáo viên nào mà tham gia đề tài đủ tất cả các chủ đề.--BI CHIA:THAMGIADE--CHIA :CHU DE--CHO BIET TEN GV MA KHONG CO DE TAI NAO MA KHONG THUOC CAC CHU DESELECT * FROM dbo.CHUDESELECT * FROM dbo.THAMGIADTSELECT * FROM dbo.DETAISELECT * FROM dbo.THAMGIADT 

SELECT DISTINCT GV.HOTEN,GV.MAGV
FROM dbo.GIAOVIEN GV JOIN dbo.THAMGIADT TG
ON TG.MAGV = GV.MAGV
WHERE NOT EXISTS(SELECT * 
                 FROM dbo.DETAI DT JOIN dbo.CHUDE CD 
                 ON CD.MACD = DT.MACD
                 AND NOT EXISTS(SELECT *
                                FROM dbo.THAMGIADT TG2
                                WHERE TG2.MADT=DT.MADT
                                 AND TG2.MAGV=TG.MAGV) )--Q62. Cho biết tên giáo viên nào tham gia tất cả các đề tài mà giáo viên Trần Trà Hương đã
--tham gia.
SELECT * FROM dbo.THAMGIADT
SELECT * FROM dbo.GIAOVIEN
---CHO BIET TEN GV MA KHONG CO 1 DE TAI NAO CUA THH MA KHONG THAM GIA DE TAI DO
SELECT GV.HOTEN,GV.MAGV
FROM dbo.GIAOVIEN GV
WHERE NOT EXISTS(SELECT *
                 FROM dbo.GIAOVIEN GV1 JOIN dbo.THAMGIADT TG ON TG.MAGV = GV1.MAGV
                 WHERE NOT EXISTS(SELECT *
                                  FROM dbo.THAMGIADT TG2
                                  WHERE TG2.MAGV=GV1.MAGV AND TG2.MAGV=GV.MAGV
                                  AND GV1.HOTEN='Trần Trà Hương '))