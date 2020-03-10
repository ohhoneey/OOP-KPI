using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Labaoop_3
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Кабанец Виктория Ис-92");
            Arr matr = new Arr();
            matr.Fill();//заповнення матриці
            matr.Show();//виведення матриці
            Console.WriteLine("Введите номер столбца");
            int a = Convert.ToInt32(Console.ReadLine());//переведення в числове значення
            Console.WriteLine(matr[a]);//виведення сумми елементів стовбця
            int k = matr.Read;//середньоквадратичне значення всіх елементів масиву
            Console.WriteLine(k);//виведення середньоквадратичного значення всіх елементів масиву
            Console.ReadKey();
        }
    }
}
