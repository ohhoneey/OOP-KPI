using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Labaoop_7
{
    class Node
    {
        public float Data { set; get; } //значення вузла
        public Node Next { set; get; } //вказівник на наступний вузол
        public Node(float data) //конструктор вузла
        {
            Data = data;
        }
    }
}
