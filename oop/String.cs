using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Laba2
{
    class Mystring
    {
        char[] Str;

        public Mystring(string str)
        {
            Str = str.ToCharArray();
        }

        public int Counting(char s)
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

        public int Count()
        {
            return Str.Length;
        }

    }
}
