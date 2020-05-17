using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Laba_8
{

    class Matrix
    {

        public Random rnd = new Random(); //генерація рандомних значень
        public int sum = 0; //сумма
        public int count = 0; //сумма
        public int rand;
        public int[,] M; //двовимірний масив
        public int n { set; get; } //розмірність масиву

        public Matrix(int n) //конструктор з параметром
        {
            this.n = n;
            M = new int[n, n]; //надання матриці розміру
            Init();
        }



        public void Init() //генерація матриці
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    rand = rnd.Next(0, 100);
                    M[i, j] = rand;
                }
            }
        }

        public void Output() //вивід матриці
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    Console.Write(M[i, j] + "\t");
                }
                Console.WriteLine();
            }

        }

        public void Summarise(int[,] arr) //метод знаходження суми елементів
        {
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    sum += arr[i, j];
                }
            }
            Console.WriteLine(sum);
        }

        public void Summ() //віртуальний метод знаходження суми елементів
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    count += M[i, j];
                }
            }
            Console.WriteLine(count);
        }

    }
}
