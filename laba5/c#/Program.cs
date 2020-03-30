using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP5
{
    class Program
    {
        static void Main(string[] args)
        {
            Line one = new Line(2, 3, 4, 5); //створення нового об'єкта Line
            double f = one.Len(); //присвоєння змінній значення довжини лінії
            Console.WriteLine("Початкова довжина {0}", f);
            Line1 two = new Line1(2, 3, 4, 5); //створення нового об'єкта Line1
            double r = two.Len(); //присвоєння змінній значення довжини лінії
            two.Draw(); //виведення координат на екран
            Console.WriteLine("Довжина пiсля збiльшення в 2 рази {0}", r);

            Console.ReadKey();

        }
    }
}
