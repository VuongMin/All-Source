using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace version1
{
    class Bank
    {
       private static List<Termbook> DanhsachTerm = new List<Termbook>();
       private static List<NonTerm> DanhsachNonTerm = new List<NonTerm>();
        public Bank()
        { }
        public static List<Termbook> GetListTerm()
        {
            return DanhsachTerm;
        }
        public static void SetListTerm(Termbook x)
        {
            DanhsachTerm.Add(x);
        }

        public static List<NonTerm> GetNonTerm()
        {
            return DanhsachNonTerm;
        }
        public static void SetNonTerm(NonTerm x)
        {
            DanhsachNonTerm.Add(x);
        }
        //Method -------------------------------------
        //1 nguoi co the dang ki nhieu so nhung khong the nao 1 cmnd ma luu 2 ten nguoi duoc
        public static bool InvalidFailsData(string name,string cmnd)
        {
            for(int i=0;i<DanhsachTerm.Count;i++)
            {
                if(DanhsachTerm[i].cmnd==cmnd&&DanhsachTerm[i].name!=name)
                {
                    return false;
                }
               
            }
            for(int i=0;i<DanhsachNonTerm.Count;i++)
            {
                if(DanhsachNonTerm[i].cmnd==cmnd&&DanhsachNonTerm[i].name!=name)
                {
                    return false;
                }
            }
            return true;
        }
        //search and dele item

        public static void DeleItem(string maso,string Loaiso)
        {
            if(Loaiso=="Term Book")
            {
                for(int i=0;i<DanhsachTerm.Count;i++)
                {
                    if(DanhsachTerm[i].maso==maso)
                    {
                        DanhsachTerm.RemoveAt(i);
                        break;
                    }
                }
            }
            else
            {
                for(int i=0;i<DanhsachNonTerm.Count;i++)
                {
                    if(DanhsachNonTerm[i].maso==maso)
                    {
                        DanhsachNonTerm.RemoveAt(i);
                        break;
                    }
                }
            }
        }
        public static void UpadteName(string namebefore,string namenow)
        {
            for (int i = 0; i < DanhsachTerm.Count; i++)
            {
                if (DanhsachTerm[i].name ==namebefore)
                {
                    
                     DanhsachTerm[i].name = namenow ;
                }

            }
            for (int i = 0; i < DanhsachNonTerm.Count; i++)
            {
                if (DanhsachNonTerm[i].name == namebefore)
                {
                    DanhsachNonTerm[i].name =namenow;
                
                }
            }
        }
     
    }
}
