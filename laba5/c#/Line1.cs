using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP5
{
    class Line1 : Line
    {

        public float getX(){ return x; }//метод отримання даних об'єкта
        public float getY(){ return y; }//метод отримання даних об'єкта
        public float getX1(){ return x1; }//метод отримання даних об'єкта
        public float getY1(){ return y1; }//метод отримання даних об'єкта

        public Line1(float x, float y, float x1, float y1) ://конструктор з параметрами
            base(x, y, x1, y1)
        {
          
        }

        public override double Len() //методи збільшення довжини вдвічі
        {
                return 2 * base.Len();
        }

        public void Draw() //виведення координат на екран
        {
            Console.WriteLine("Line start:({0},{1}) Line end:({2},{3})", x, y, x1, y1);
        }

    }
}
