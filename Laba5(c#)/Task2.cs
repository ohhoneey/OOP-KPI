using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP5
{
    class StringBase
    {
        protected char[] Chars { set; get; } //масив символів 


        public StringBase(params char[] str) //конструктор з параметром
        {
            Chars = new char[str.Length]; 
            Array.Copy(str, Chars, str.Length);//створення нового масиву шляхом копіювання вхідних даних в Chars

        }

        public virtual int Length()
        {
            return Chars.Length; //обчислення довжини рядка
        }

        public override string ToString() //обробка рядка
        {
            return new string(Chars);
        }

        public StringBase(IEnumerable<char> chars) //конструктор з параметром, що дає можливість ввести вхідні дані суцільним текстом
        {
            Chars = chars.ToArray();
        }

        public virtual void Show() //виведення рядка на екран
        {
            Console.WriteLine(Chars);
        }

    }

    class Letters : StringBase
    {
        public Letters(params char[] letters) : base(letters) //конструктор з параметром
        {
        }

        public Letters(IEnumerable<char> letters) : base(letters) //конструктор з параметром
        {

        }

        public override int Length() //обчислення довжини
        {
            return base.Length();
        }

        public override string ToString() //функція обробки рядка
        {
            return string.Join("", Chars);
        }

        public virtual void Reverse() //перевертання рядка
        {
           
            for (int i = Chars.Length - 1; i >= 0; i--)
            {
                Console.Write(Chars[i]);
            }
            Console.WriteLine();

        }


    }

    class Numbers : StringBase
    {
        public Numbers(params char[] numbers) : base(numbers) //конструктор з параметром
        {

        }

        public Numbers(IEnumerable<char> numbers) : base(numbers) //конструктор з параметром
        {

        }

        public override int Length() //обчислення довжини
        {
            return base.Length();
        }

        public override string ToString() //функція обробки рядка
        {
            return string.Join("", Chars);
        }

        public virtual void Enlargment() //функція подвоєння рядка
        {
            char[] chars = new char[Chars.Length * 2];

            for (int i = 0; i < chars.Length; i += Chars.Length)
            {
                for (int j = 0; j < Chars.Length; j++)
                {
                    chars[i + j] = Chars[j];
                }
            }
            Chars = chars;
        }



    }

}

