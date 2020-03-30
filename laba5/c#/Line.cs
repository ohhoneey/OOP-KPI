using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP5
{
    class Line
    {
        protected float x, y, x1, y1; // координати початку та кінця відрізка

        public Line() //конструктор за замовчуванням
        {
            x = 0;
            y = 0;
            x1 = 0;
            y1 = 0;
        }

        public Line(float a, float b, float c, float d) //конструктор з параметрами
        {
            x = a;
            y = b;
            x1 = c;
            y1 = d;
        }

        public virtual double Len() //довжина відрізка
        {
                return Math.Sqrt(Math.Pow((x1 - x), 2) + Math.Pow((y1 - y), 2));

        }
    }
}
