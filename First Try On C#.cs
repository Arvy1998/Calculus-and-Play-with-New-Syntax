using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ok
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = 1;
            Console.WriteLine("Hello World!");
            while (x != -4)
            {
                x--;
                Console.WriteLine(x);
            }
            Console.WriteLine(x);
            Console.WriteLine("Hey, what's your name?");
            string your_name = Console.ReadLine();
            Console.WriteLine("Glad to meet you, " + your_name + "!");
        }
    }
}
