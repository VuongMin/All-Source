using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WindowsFormsApplication1
{
    class Ngay
    {
         private int Day, Month, Year;
        //Khỏi Tạo Constructor.
        //Khog co constructor sao chep
       public Ngay()
         {
             Day = 0;
             Month = 0;
             Year = 1994;
         }
        public Ngay(int d,int m,int y)
        {
            Day = d;
            Month = m;
            Year = y;
        }
          //Method Process
        public double TinhKhoangCachGiua2Moc(Ngay x)
        {
            double DigitMoth;
            if(this.Year==x.Year)
            {
                if(x.Day==this.Day)
                {
                    DigitMoth = x.Month - this.Month;
                    
                }else
                {
                    if (x.Day > this.Day)
                    {
                        DigitMoth = x.Month - this.Month + ((x.Day - this.Day) / 30.0);
                    }
                    else
                    {
                        DigitMoth = ((x.Month - this.Month) - 1) + ((x.Day+30) - this.Day) / 30.0;
                    }
                    
                }
            }else
            {
                if(x.Day==this.Day)
                {
                    if(x.Month<this.Month)
                    {
                        DigitMoth = (12 + (x.Month - this.Month)) + (12 * (x.Year - this.Year - 1));
                    }
                    else
                    {
                        DigitMoth = (12 * (x.Year - this.Year))+x.Month-this.Month;
                    }
                }
                else
                {
                    int ValueD;
                    int valueM;
                    ValueD = x.Day - this.Day;
                    valueM = x.Month - this.Month;
                    if(ValueD>0)
                    {
                        if(valueM>0)
                        {
                            DigitMoth = ((x.Year - Year )* 12)+valueM+(ValueD/30.0);
                        }
                        else
                        {
                            DigitMoth = ((x.Year - Year) * 12) + (valueM * -1) + (ValueD / 30.0);
                        }

                    }
                    else
                    {
                        if(valueM>0)
                        {
                            DigitMoth=((x.Year-Year)*12)+(valueM-1)+((ValueD*-1)/30.0);
                        }
                        else
                        {
                            DigitMoth = ((x.Year - Year - 1) * 12) + ((valueM * -1)-1) + ((ValueD*-1) / 30.0);
                        }
                    }
                    
                }
            }

            return DigitMoth;
        }

    }
}
