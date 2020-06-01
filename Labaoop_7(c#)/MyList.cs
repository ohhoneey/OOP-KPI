using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Labaoop_7
{
    

    class Base_List
    {
        Node head; //початок списку
        Node tail; //кінець списку
        public int size; //розмір

        public bool IsEmpty //відсутніть значень в списку
        {
            get { return size == 0; }
        }

        public int GetSize //розмір
        {
            get { return size; }
        }

        public void Push(float item) //додавання елемента
        {
            Node node = new Node(item); //ініціалізація вузла
            if (head == null) //якщо список порожній, то додаємо елемент на початок
            {
                head = node;
            }
            else //якщо в списку вже є елементи, то додаємо елемент після останнього
            {
                tail.Next = node;
            }
            tail = node;
            size += 1;
        }
        public bool Delete(float item) //видалення вузла
        {
            Node current = head; //поточний вузол
            Node previous = null; //попередній вузол

            while (current != null) //пребір всіх елементів
            {
                if (current.Data.Equals(item)) //якщо знайшли елемент, що задовольняє умови видалення
                {
                    
                    if (previous != null) //якщо вузол не останній
                    {
                        previous.Next = current.Next; //встановлюємо вказівник попереднього елемента на поточний
                        if (current.Next == null) //якщо поточний елемент - останній вузол, то встановлюємо вказівник на крайній елемент списка
                            tail = previous;
                    }
                    else 
                    {
                        head = head.Next; //ставимо вказівник на головний елемент

                        if (head == null) //якщо список порожній,то обнуляємо кінець списка
                            tail = null;
                    }
                    size--; //зменшуємо розмір
                    return true;
                }
                previous = current; //переходимо до наступного елемента
                current = current.Next;
            }
            return false;
        }
        public void Clear() //видалення всіх даних
        {
            head = null;
            tail = null;
            size = 0;
        }
        public void Addto(float item) //додавання елемента після 2-го
        {

            Node node = new Node(item); //створеня вузла
            Node previous = head; //встановлення попереднього вузла
            for (int i = 0; i < 1 ; i++) //залишаємо значення списку незміниим до 2 елемента
            {
                previous = previous.Next;
            }
            node.Next = previous.Next; //встановлюємо вказівник попереднього елемента на поточний
            previous.Next = node; 
            size++;
        }

        public void MoreThan() //пошук елементів > 3.14
        {
            Node node = head;
            int count = 0; //лічильник
            Console.WriteLine("Елементи > 3.14");
            while (node!=null) //проходимось по всіх елементах
            {
                if(node.Data > 3.14) //якщо умова виконується, збільшуємо лічильник
                {
                    Console.WriteLine(node.Data);
                    count++;
                }
                node = node.Next; //переходимо до наступного елемента

            }
            Console.WriteLine("Всього елементiв > 3.14: {0}", count);
        }
        public void Average() //видалення елементів, значення яких більше за середнє
        {
           var s = Summ(); //середнє арифметичне
           Node node = head;
            
            while (node != null) //проходимось по всіх елементах
            {
                if (node.Data > s) //якщо знаходимо потрібний, то видаляємо
                {
                    Console.WriteLine("Значення, що буде видалено: {0}" , node.Data);
                    Delete(node.Data);
                }
                node = node.Next; //перехід до наступного
            }
           
        }

        public float Summ() //знаходження середнього значення
        {
            float sum = 0;
            int count = 0;
            Node node = head;
            while (node != null) //проходимось по всіх елементах
            {
                sum += node.Data; //сумуємо їх
                node = node.Next; //перехід до наступного елемента
                count++; //збільшуємо лічильник

            }
            return sum / count;

        }

        public void Print() //вивід всіх елементів 
        {
            Node node = head; //встановлюємо початковий вузол
            while (node != null) //проходимось по всіх елементах
            {
                Console.WriteLine(node.Data); 
                node = node.Next; //перехід до наступного елемента
            }
        }

        

    }
        
   
}
