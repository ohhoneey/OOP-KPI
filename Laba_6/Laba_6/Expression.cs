using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Laba_6
{

    class Expression
    {

        public double _a, _b, _c, _d; //змінні

        public double a  //встановлення значення a 
        {
            set
            {
                _a = value;
            }
            get
            {
                return _a;
            }
        }

        public double b  //встановлення значення b
        {
            set
            {
                _b = value;
            }
            get
            {
                return _b;
            }
        }

        public double c  //встановлення значення c
        {
            set
            {
                _c = value;
            }
            get
            {
                return _c;
            }
        }

        public double d  //встановлення значення d
        {
            set
            {
                _d = value;
            }
            get
            {
                return _d;
            }
        }

        public Expression(double a, double b, double c, double d)  //конструктор з параметрами
        {
            _a = a;
            _b = b;
            _c = c;
            _d = d;

        }

        public double GetAnswer()
        {
            if ((_b == 0)) //так як ділити на 0 не можна, то спрацьовує виключення
            {
                throw new DivideByZeroException("Division by zero is impossible!");

            }

            if ((_d - _c) < -24) //так під коренем не може бути від'ємне число, то спрацьовує виключення
            {
                throw new ArithmeticException("The value under the root must be non-negative!");
            }

            else
            {
                return Solve(); //розв'язок виразу
            }



        }

        public double Solve() //розв'язання виразу
        {
            return ((1 + a - b / 2) / (Math.Sqrt(24 + d - c) + a / b));
        }

        public void Show() //виведення змінних на екран
        {
            Console.WriteLine("a = {0}", _a);
            Console.WriteLine("b = {0}", _b);
            Console.WriteLine("c = {0}", _c);
            Console.WriteLine("d = {0}", _d);
        }
    }

}
