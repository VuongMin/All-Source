using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace version1
{
    class Termbook:Saving
    {
        private int KyHan;


        public int kyhan
        {
            get { return KyHan; }
            set { KyHan = value; }
        }

      
        //CONSTRUCTOR
        public Termbook():base()
        {
            KyHan = 0;
        }
        public Termbook(string maso,string cmnd,string hoten,double money,int thang,double laisuat,int kyhan)
            :base( maso,cmnd,hoten, money, thang, laisuat)//Truyen truc tiep do
        {
            KyHan=kyhan;
        }
        public Termbook(Termbook x ):base((Saving)x)
        {
            KyHan = x.KyHan;
        }
        //Tinh Tien
        public double TinhTien()
        {
            if(Month>=KyHan)
            {
                return TienGui + (TienGui * (laisuat/100) * Month);
            }
            return TienGui;
        }
    }
}
