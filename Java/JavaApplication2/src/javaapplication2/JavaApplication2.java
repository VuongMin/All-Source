/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication2;
import java.util.*;

/**
 *
 * @author Administrator
 */
public class JavaApplication2 {

    /**
     * @param args the command line arguments
     */
    public static double [] Nhapmang()
    {
        System.out.print("\n Nhap vao Mang :");
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        String[] arrchuoi=str.split(" ");
        double []arrSo=new double[arrchuoi.length];
        for(int i=0;i<arrchuoi.length;i++)
        {
            arrSo[i]=Double.parseDouble(arrchuoi[i]);
        }
        return arrSo;
    }
    public  static  void xuat(double [] a,int n)
    {
        for(int i=0;i<a.length;i++)
        {
            if(a[i]!=0)
            {
                if(a[i]==(int)a[i])
            {
                 System.out.print((int)a[i]+" ");
            }
            else
            {
                 System.out.print(a[i]+" ");
            }
            }
            
           
        }
    }
    public static void sortgiam(double []a,int n)
    {
        for(int i=0;i<a.length-1;i++)
        {
            for(int j=i+1;j<a.length;j++)
            {
                if((a[i]<a[j])&&(a[i]%2!=0&&a[j]%2!=0))
                {
                     double temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                }
               
            }
        }
        xuat(a, n);
    }
        public static void sorttang(double []a,int n)
    {
        for(int i=0;i<a.length-1;i++)
        {
            for(int j=i+1;j<a.length;j++)
            {
                if((a[i]>a[j])&&(a[i]%2==0&&a[j]%2==0))
                {
                     double temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                }
               
            }
        }
          xuat(a, n);
    }
        public static void Insothuc(double []a,int n)
        {
            for(int i=0;i<a.length;i++)
            {
                if(a[i]!=(int)a[i])
                {
                    System.out.print(a[i]+" ");
                }
            }
        }
    public static void main(String[] args) {
        // TODO code application logic here
        double[] Mangso=Nhapmang();
        System.out.print("\n Mang vua nhap\n");
        xuat(Mangso, Mangso.length);
      
         double [] Mangchan=new double[10];
         double[]mangle=new double[10];
         int idxchan=0;
         int idxle=0;
        for(int i=0;i<Mangso.length;i++)
        {
            if(Mangso[i]%2==0)
            {
                Mangchan[idxchan++]=Mangso[i];
            }
            else 
            {
                mangle[idxle++]=Mangso[i];
            }
        }
           System.out.print("\n Mang chan\n");
           xuat(Mangchan, idxchan);
         System.out.print("\n Mang Le\n");
         xuat(mangle, idxle);
            System.out.print("\n Mang Sau khi sap xep Chan Tang -Le giam\n");
            sorttang(Mangchan, idxchan);
            sortgiam(mangle, idxle);
             System.out.print("\n Mang So thuc \n");
             Insothuc(Mangso, Mangso.length);
               System.out.print("\n Gia tri thu nhi cua mang: "+Mangso[1]);
               
    
    }
    
}
