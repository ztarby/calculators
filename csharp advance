using System;

namespace Calculadora_csharp
{
    class Program
    {
        static void Main(string[] args)
        {
        
        //the code is similar to c++
        //variables here
            double b = 0; // number 2
           double suma = 0; // the result of the calculate
            char oper; // operator

            bool cierre = true; // for close the program
            char comando; // comands in the program
            bool sumatoria = true; // for showing the results

            string[] frasefinal  = {"suma" , "resta" , "multiplicacion" , "divicion" };
            int elegir = 0;
            //Text inctoduction

            Console.WriteLine("            Bienvenido a caculadora de c#");
            string help = "        Primero escriba el numero luego la operacion: + de sumar - de restar x de multiplicar y / de dividir. luego ponga el segundo numero y listo";
            Console.WriteLine(help);
            
            //intro app
            while(cierre)
            {
                sumatoria = true;
                
                //the user inputs de comand: h of help and e of exit

                Console.WriteLine("Presiona h para ayuda, e para salir o si no quiere hacer niguno de estos presione cualquier tecla");
                comando = Convert.ToChar( Console.ReadLine());
                if(comando == 'h')
                {
                    Console.WriteLine(help);
                }
                if(comando == 'e')
                {
                    Console.WriteLine("Una sumatoria mas pls");
                    cierre = false;
                }
                
                //now the user input the first number

                Console.WriteLine("Ponga su primer numero");
               double a = Convert.ToDouble(Console.ReadLine());
               
               //now de operator
               //in the switch the user inputs the second number
               
                Console.WriteLine("Ponga su operador");
                oper = Convert.ToChar(Console.ReadLine());

                switch(oper)
                {
                   
                    case ('+'):
                    {
                            Console.WriteLine("  Ahora el segundo numero");
                            b = Convert.ToDouble(Console.ReadLine());
                            suma = a + b;

                            elegir = 0;
                           
                            break;
                    }
                    case ('-'):
                        {
                            Console.WriteLine("  Ahora el segundo numero");
                            b = Convert.ToDouble(Console.ReadLine());

                            suma = a - b;
                            elegir = 1;
                            break;
                        }
                    case ('x'):
                        {
                            Console.WriteLine("  Ahora el segundo numero");
                            b = Convert.ToDouble(Console.ReadLine());

                            suma = a * b;
                            elegir = 2;
                            break;
                        }
                    case ('/'): 
                        {
                            Console.WriteLine("  Ahora el segundo numero");
                            b = Convert.ToDouble(Console.ReadLine());
                            
                            //if the user inputs a 0 the condition alert something

                            if(b == 0)
                            {
                                Console.WriteLine("No se divide 0 aqui");
                                sumatoria = false;
                            } else
                            {
                              suma =  a / b;
                                elegir = 3;
                            }
                            break;
                        }
                    default:
                        {
                        //if the user inputs a incorrect operator the code alert something
                            Console.WriteLine("Operador invalido ponga h para saver de los operadores");
                            sumatoria = false;
                            break;
                        }
                }
                
                //finally the result of the calculator

                if(sumatoria == true)
                {
                    Console.WriteLine($"La {frasefinal[elegir]} es {suma}");
                }
                      
            }
        }
    }
}
