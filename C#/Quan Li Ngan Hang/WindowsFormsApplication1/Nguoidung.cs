using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace WindowsFormsApplication1
{
    class Nguoidung
    {
        private double TienGui;
        private int HinhThucGui;
        private Ngay NgayGui;
        private Ngay NgayRut;
        public Nguoidung()
        {
            TienGui = 0.0;
            HinhThucGui =0;
        }
        public Nguoidung(double Money,int ht,DateTime gui,DateTime rut)
        {
            TienGui = Money;
            HinhThucGui = ht;
            NgayGui = new Ngay(gui.Day,gui.Month,gui.Year);
            NgayRut = new Ngay(rut.Day, rut.Month, rut.Year);
            
        }
        //Method Process
        public double TinhTienLai()
        {
            bool Check=false;
            double MoneyLai=0;
            double Thoihan = NgayGui.TinhKhoangCachGiua2Moc(NgayRut);
            //Gia su Dung Thoi han rut Tien
            if(HinhThucGui==0)
            {
                Check = true;
                MoneyLai = ((TienGui * 0.8)*Thoihan)/12.0;
            }
            else if(HinhThucGui==1&&Thoihan>=1&&Thoihan<3)
            {
                Check = true;
                MoneyLai = ((TienGui *1.00) * Thoihan) / 12.0;
            }
            else if(HinhThucGui==2&&Thoihan>=3&&Thoihan<5)
            {
                Check = true;
                MoneyLai = ((TienGui * 4.00) * Thoihan) / 12.0;
            }
            else if(HinhThucGui==3&&Thoihan>=5&&Thoihan<8)
            {
                Check = true;
                MoneyLai = ((TienGui * 4.30) * Thoihan) / 12.0;
            }
            else if(HinhThucGui==4&&Thoihan>=8&&Thoihan<=12)
            {
                Check = true;
                MoneyLai = ((TienGui * 5.00) * Thoihan) / 12.0;
            }
            
            
            if(Check==false)
            {
                MoneyLai = ((TienGui * 0.8) * Thoihan) / 12.0;
            }
            return MoneyLai;

        }

    }
}
