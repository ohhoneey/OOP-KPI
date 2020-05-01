using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;


namespace Laba_6
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Кабанец Виктория ИС -92");
            var exp = new List<Expression>();
            exp.Add(new Expression(1, 0, 2, 3)); //сттворення та додавання об'єкта 1
            exp.Add(new Expression(1, -1, 2, 3)); //сттворення та додавання об'єкта 2

            foreach (var line in exp)
            {
                try
                {

                    Console.WriteLine("Solution {0}", line.GetAnswer()); //виведення розрахунку виразу
                    
                }
                catch (DivideByZeroException e) //якщо виникне помилка,то виведеться повідомлення
                {
                    Console.WriteLine(e.Message);
                }
                catch (ArithmeticException e) //якщо виникне помилка,то виведеться повідомлення
                {
                    Console.WriteLine(e.Message);
                }
                
                Console.WriteLine("Parameters of the expression");
                line.Show(); //виведення змінних на екран
                Console.WriteLine("***********************************");


            }
            

    

            Console.ReadKey();
            
        }
    }

}
