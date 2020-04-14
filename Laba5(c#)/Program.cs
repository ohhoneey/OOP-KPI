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
            Console.WriteLine("Кабанець Вiкторiя IС 92");
            Console.WriteLine("Task 1");
            Line1 two = new Line1(2, 3, 4, 5); //створення нового об'єкта Line1
            Line one = two; //створення нового об'єкта Line
            double f = one.Len(); //присвоєння змінній значення довжини лінії
            Console.WriteLine("Початкова довжина {0}", f);
            double r = two.Len(); //присвоєння змінній значення довжини лінії
            two.Draw(); //виведення координат на екран
            Console.WriteLine("Довжина пiсля збiльшення в 2 рази {0}", r);

            Console.WriteLine("Task 2");
            char[] chars = { 'h', 'e', 'l', 'l', 'o' }; //масив літер
            char[] charss = { '0', '6', '9', '4', '3','8' }; //масив цифр
            Letters letter = new Letters(chars); //створення нового об'єкта Letters
            Numbers number = new Numbers(charss); //створення нового об'єкта Numbers
            StringBase str = letter;
            StringBase num = number;
            int k = str.Length();
            int g = num.Length();
            Console.WriteLine("Рядок букв");
            str.Show(); //виведення літер на екран
            Console.WriteLine("Рядок цифр");
            num.Show(); //виведення цифр на екран
            Console.WriteLine("Довжина масиву букв {0}",k); //виведення довжини масиву літер на екран
            Console.WriteLine("Довжина масиву цифр {0}", g); //виведення довжини масиву цифр на екран
            number.Enlargment(); //подвоєння масиву цифр
            Console.WriteLine("Масив пiсля подвоєння");
            Console.WriteLine(num);
            Console.WriteLine("Масив пiсля перевертання");
            letter.Reverse(); //перевертання масиву літер



            Console.ReadKey();


            
        }
    }
}
