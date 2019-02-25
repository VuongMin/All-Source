using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Projiect
{
    class Program
    {
        //Viết hàm đổi một ký tự hoa sang ký tự thường.
        //ham main la static nen Thu tuc khac phai static
         static char ChangeParater(char x)
        {
            if (x >= 'a' && x <= 'z')
            {
                return (char)(x-32);
            }
             if(x>='A'&&x<='Z')
             {
                 return (char)(x+32);
             }
             return x;
        }
         //Viết hàm trả về giá trị nhỏ nhất của 4 số nguyên. 
        static int SoNguyen(int a,int b,int c,int d)
         {
             int Min = a;
            if(b<Min)
            {
                Min = b;
            }
             if(c<Min)
            {
                Min = c;
            }
             if(d<Min)
            {
                Min = d;
            }
            return Min;
         }
        //Viết thủ tục hoán vị hai số nguyên.
        public static void HoanVi(ref int a,ref int b)
        {
            int Temp = a;
            a = b;
            b = Temp;
            //Console.WriteLine("{0},{1}",a,b);
        }
        //f. Viết thủ tục sắp xếp 4 số nguyên tăng dần.
        public static void Sort_Tang(int a,int b,int c,int d)
        {
            if(a>b)
            {
                HoanVi( ref a,ref b);
            }
             if(a>c)
            {
                HoanVi( ref a, ref c);
            }
             if(a>d)
            {
                HoanVi( ref a,ref d);
            }
              if(b>c)
            {
                HoanVi(ref b,ref c);
            }
             if(b>d)
            {
                HoanVi( ref b,ref  d);
            }
              if(c>d)
            {
                HoanVi(ref c,ref d);
            }
            Console.Write("\n---- Sap Xep Tang Dan-----\n A={0} , B={1}, C={2},D= {3}",a,b,c,d);
           
        }

     
        static void Main(string[] args)
        {
            //char x = 'a';
            //Console.WriteLine((int)x);
            Min:
          
            try
            {
                Console.Write("\n Vui Long Nhap vao Ki Tu:\t");
                char Kitu = char.Parse(Console.ReadLine());
                Console.WriteLine(ChangeParater(Kitu));
                Console.Write("Nhap a:");
                int a = int.Parse(Console.ReadLine());
                Console.Write("\n Nhap b:");
                int b = int.Parse(Console.ReadLine());
                Console.Write("\n Nhap c:");
                int c = int.Parse(Console.ReadLine());
                Console.Write("Nhap d:");
                int d = int.Parse(Console.ReadLine());
                Console.WriteLine("\nMin = {0}",SoNguyen(a, b, c, d));
                Console.Write("\n---Swap----\n ");
                Console.Write("Nhap a:");
                int swa = int.Parse(Console.ReadLine());
                Console.Write("\nNhap b:");
                int swb = int.Parse(Console.ReadLine());
                HoanVi(ref swa, ref swb);
                Console.WriteLine("a = {0} , b = {1}",swa,swb);
                Sort_Tang(a, b, c, d);
            }
            catch
            {
                goto Min;
            }
            
       
           
            
            Console.ReadKey();
        }
    }
}
