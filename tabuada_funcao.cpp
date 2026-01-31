#include <iostream>
void tabuada(int n) //teste de envio
{
    for (int i = 1; i <= 10; i++)
    {
        std::cout << n << " x " << i << " = " << n * i << std::endl;
    }
}

int main ()
{
    int n;
    std::cout << " Digite um numero para ver a sua tabuada : ";
    std::cin>> n;
    tabuada(n);
   std::cout << " Essa foi a tabuada do numero " <<  n  <<  "." << " Espero que tenha gostado!" << std::endl;
    return 0;
}