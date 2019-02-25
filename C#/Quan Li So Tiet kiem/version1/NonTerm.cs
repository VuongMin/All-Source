using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace version1
{
    class NonTerm:Saving
    {
        //CONSTRUCTOR
        public NonTerm():base()
        { }
        public NonTerm(string maso,string cmnd,string hoten,double money,int thang,double laisuat)
            :base(maso,cmnd,hoten,money,thang,laisuat)
        { }
        public NonTerm(NonTerm x):base((Saving)x)
        { }
        public double TinhTien()
        {
            return (TienGui * (laisuat/100) * Month)+TienGui;
        }
    }
}
