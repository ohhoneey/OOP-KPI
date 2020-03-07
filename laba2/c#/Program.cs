using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Laba2
{
    class Program
    {
        static void Main(string[] args)
        {
            
            var str1 = new MyLib.Mystring("jhjjftjgk"); 
            var str2 = new MyLib.Mystring("jhdfhvgk");
            var str3 = new MyLib.Mystring("jhhfghy");
            Mytext text = new Mytext();//виклик класу текста
            text.AddString(str2);
            text.AddString(str1);
            text.AddString(str3);
            int y = str1.Counting('j');//підрахунок літери в рядку
            int z = str2.Counting('j');//підрахунок літери в рядку
            int e = str3.Counting('h');//підрахунок літери в рядку

            Console.WriteLine(y);//вивід на екран підрахунку літери в рядку
            Console.WriteLine(z);//вивід на екран підрахунку літери в рядку
            Console.WriteLine(e);//вивід на екран підрахунку літери в рядку
            Console.WriteLine(text.Allsymbols());//вивід на екран підрахунку літер в тексті

            text.ReplaceString(2, str1);//заміна рядка в тексті
            text.RemoveIdentical();//видалення однакових рядків 
            text.Erase();//очищення тексту

            Console.ReadKey();
        }
        
    }
}
