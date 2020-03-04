using System;
using MyLib;
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
            Mytext text = new Mytext();
            text.AddString(str2);
            text.AddString(str1);
            text.AddString(str3);
            int y = str1.Counting('j');
            int z = str2.Counting('j');
            int e = str3.Counting('h');
          
            Console.WriteLine(y);
            Console.WriteLine(z);
            Console.WriteLine(e);
            Console.WriteLine(text.Allsymbols());

            text.ReplaceString(2, str1);
            text.RemoveIdentical();
            text.Erase();

            Console.ReadKey();
        }
        
    }
}
