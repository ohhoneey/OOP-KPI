using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Laba2
{
    class Mystring
    {
        char[] Str;//виділяємо пам'ять під рядок

        public Mystring(string str)//строку конвертуємо в масив символів
        {
            Str = str.ToCharArray();
        }

        public int Counting(char s)//рахуємо кількість повторів заданого символу
        {
            int count = 0;
            foreach (var c in Str)
            {
                if (c == s)
                {
                    count++;
                }
            }
            return count;
        }

        public int Count()//кількість сиволів в строці
        {
            return Str.Length;
        }

    }
}
