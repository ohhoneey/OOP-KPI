using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Labaoop_3
{
    class Arr
    {
        private int[,] Array = new int[100, 100];//оголошення масиву
        private int size, size2;//розмір
        Random rnd = new Random();//рандомайзер
        private int sum, result;//сумма та результат


        public Arr()//встановлення розміру матриці
        {
            size = 3;
            size2 = 3;

        }

        public Arr(int size, int size2)
        {
            this.size = size;
            this.size2 = size2;

        }

        public void Fill()//генерація чисел для заповнення матриці
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size2; j++)
                {
                    Array[i, j] = rnd.Next(0, 10);//генерація чисел для заповнення матриці в діапазоні від 0 до 10
                }
            }
        }

        public void Show()//виведення матриці
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size2; j++)
                {
                    Console.Write(Array[i, j] + "  ");
                }
                Console.WriteLine();
            }
        }

        public int this[int index]//одновимірний індексатор, що повертає суму всіх елементів заданого індексом стовпця масиву
        {
            get
            {
                sum = 0;
                for (int i = 0; i < size; i++)
                {
                    for(int j = 0; j < size2; j++)
                    {
                        if(j == index - 1)//знаходимо потрібний стовбчик
                        {
                            sum += Array[i,j];//сумма елементів стовбчика
                        }
                    }
                }
                return sum;
            }

   
        }
        
        public int Read//властивість, доступна для читання закритого елементу-даного, що містить середньоквадратичне значення всіх елементів масиву 
        {

            get
            {
                sum = 0;
                for (int i = 0; i < size; i++)
                {
                    for (int j = 0; j < size2; j++)
                    {
                       
                       sum += Array[i, j];//сумма всіх елементів матриці

                    }
                }
                result = sum / (size * size2);//середньоквадратичне значення всіх елементів масиву
                return result;
            }
            
            

        }
    }
}
