using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyLib
{
    class Mytext
    {
        Mystring[] Text;
        int size;

        public void AddString(Mystring str)
        {
            Array.Resize(ref Text, ++size);
            Text[size - 1] = str;
        }

        public void DelString(int index)
        {
            index--;
            var newData = new Mystring[Text.Length - 1];
            for (int i = 0; i < index; i++)
                newData[i] = Text[i];
            for (int i = index; i < newData.Length; i++)
                newData[i] = Text[i + 1];
            Text = newData;
            size--;
        }

        public void ReplaceString(int index, Mystring str)
        {
            Text[index - 1] = str;
        }

        public void Erase()
        {
            Mystring[] text = new Mystring[0];
            Text = text;
            size = 0;
        }

        public void RemoveIdentical()
        {
            for (int i = 0; i < Text.Length - 1; i++)
            {
                for (int j = 1; j < Text.Length - 2; i++)
                {
                    if (Text[i] == Text[j])
                    {

                        var newData = new Mystring[Text.Length - 1];
                        for (int k = 0; k < j; k++)
                            newData[k] = Text[k];
                        for (int l = j; l < newData.Length; l++)
                            newData[l] = Text[l + 1];
                        Text = newData;
                        size--;
                    }


                }
            }
        }

        public int Allsymbols()
        {
            int symbols = 0;
            foreach (var item in Text)
            {
                symbols += item.Count();
            }
            return symbols;
        }
    }
}
