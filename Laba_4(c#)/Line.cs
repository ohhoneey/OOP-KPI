using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Laba_4
{
    class Line
    {
        protected float _x1, _x2, _y1, _y2; //координати відрізка

        public Line()  //конструктор за замовчуванням
        {
            _x1 = 0;
            _x2 = 0;
            _y1 = 0;
            _y2 = 0;
        }

        public Line(float x1, float y1, float x2, float y2) //конструктор з параметрами
        {
            _x1 = x1;
            _y1 = y1;
            _x2 = x2;
            _y2 = y2;
        }

        public float x1  //встановлення даних точки
        {
            set
            {
                _x1 = value;
            }

            get
            {
                return _x1;
            }
        }

        public float y1 //встановлення даних точки
        {
            set
            {
                _y1 = value;
            }

            get
            {
                return _y1;
            }
        }

        public float x2 //встановлення даних точки
        {
            set
            {
                _x2 = value;
            }

            get
            {
                return _x2;
            }
        }

        public float y2 //встановлення даних точки
        {
            set
            {
                _y2 = value;
            }

            get
            {
                return _y2;
            }
        }

        public double Len() //отримання довжини відрізка
        {
            if (_x1 == _x2 && _y1 == _y2)
            {
                throw new Exception("Error!Identical coordinates of points");
            }
            return Math.Sqrt(Math.Pow((x2 - x1), 2) + Math.Pow((y2 - y1), 2));
        }

        public void Move(int s, int c) //зсув 
        {
            _x1 += s;
            _x2 += s;
            _y1 += c;
            _y2 += c;
        }

        public void Show() //вивід координат точки на екран
        {
            Console.WriteLine("(x1, y1) {0}, {1}",_x1, _y1);
            Console.WriteLine("(x2, y2) {0}, {1}", _x2, _y2);

        }

        public static Line operator +(Line t1, Line t2) //перевантаження оператора додавання
        {
            if (t1.x1 == t2.x1 && t1.y1 == t2.y1 && t1.y2 == t2.y2 && t1.x2 == t2.x2)
            {
                throw new Exception("Error!Identical coordinates of lines");
            }
            return new Line(t1.x1 + t2.x1, t1.y1 + t2.y1, t1.x2 + t2.x2, t1.y2 + t2.y2);
        }

        public static Line operator -(Line t1, Line t2)
        {
            if (t1.x1 == t2.x1 && t1.y1 == t2.y1 && t1.y2 == t2.y2 && t1.x2 == t2.x2) //перевантаження оператора віднімання
            {
                throw new Exception("Error!Identical coordinates of lines");
            }
            return new Line(t1.x1 - t2.x1, t1.y1 - t2.y1, t1.x2 - t2.x2, t1.y2 - t2.y2);
        }


    }
}
