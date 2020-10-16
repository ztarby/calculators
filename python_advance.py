print("       ****Bienvenidos a calculadora****")
#The code are same like the others only diferences like the oper
# variables
true = True
false = False

sumar = true
reiniciar = true
suma = 0

help = "   Primero ponga su primer numero luego el operador: + de sumar - de restar x de multiplicar y / de dividir. al final el ultimo numero"
print(help)
comand = "0"

frasefinal = ["sumatoria","resta","multiplicacion" , "division"]
elegir = 0

truco = 0
#variables

#like the calculator of javassrcipt, oper def 

def calcul(aa,opera,bb): 
    if opera == "+" :
        return aa + bb
        elegir = 0
        pass
    if opera == "-" :
        return aa - bb
        elegir = 1
        pass
    if opera == "x" :
        return aa * bb
        elegir = 2
        pass
    if opera == "/" :
        return aa / bb
        elegir = 3
        pass
    #sorry for my bunch of ifs
  
 
    pass
#introduction
while reiniciar :
 sumar = True
 #comand for exiting and help
 print("    Presiona cualquier tecla para continuar o e de exit o h de ayuda de comandos")

 comand = input()
 if comand == "h" :
     print(help)
     pass
 if comand == "e" :
     reiniciar = false
     print("Aga una calculacion mas y se saldra del la aplicacion")
     pass

 #input for the 2 numbers and oper
 a = float(input("Ingrese el primer numero: "))
 oper = input("Ingrese el operador: ")
 b = float(input("ingrese el segundo numero: "))
 #anti error code
 if oper != "+" :
        truco += 1
        pass
 if oper != "-" :
        truco += 1
        pass
 if oper != "x" :
        truco += 1
        pass
 if oper != "/" :
        truco += 1
        pass

 if truco == 4 :
       sumar = False
       pass
 truco = 0

 if oper == "/" :
        if b == 0 :
            sumar = false
            pass
        pass
    #antierror code
  
    #finally the results of the calculator
 if sumar == true :
     suma = calcul(a,oper,b)
     print("La " , frasefinal[elegir] ," es: " , suma)
   
     pass 
 else :
     print(" Syntas errona o error desconosido ")
     pass
 
     pass


   
