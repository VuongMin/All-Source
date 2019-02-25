using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace version1
{
    class Saving
    {
        protected string CMND, Name, Maso;

        public string maso
        {
            get { return Maso; }
            set { Maso = value; }
        }

        public string name
        {
            get { return Name; }
            set { Name = value; }
        }

        public string cmnd
        {
            get { return CMND; }
            set { CMND = value; }
        }
        private double Depostsit;

        public double TienGui
        {
            get { return Depostsit; }
            set { Depostsit = value; }
        }
        protected int Month;
        private double LaiSuat;

        public double laisuat
        {
            get { return LaiSuat; }
            set { LaiSuat = value; }
        }
        //CONSTRUCKTOR
        public Saving()
        {
            CMND = Name = "DEFAULT";
            Depostsit = LaiSuat = Month = 0;
        }
        public Saving(string maso,string cmnd,string hoten,double money,int thang,double laisuat)
        {
            Maso = maso;
            CMND = cmnd;
            Name = hoten;
            Depostsit = money;
            Month = thang;
            LaiSuat = laisuat;
        }
        public Saving(Saving x)
        {
            Maso = x.Maso;
            CMND = x.CMND;
            Name = x.Name;
            LaiSuat = x.LaiSuat;
            Depostsit = x.Depostsit;
            Month = x.Month;
        }
    }
}
