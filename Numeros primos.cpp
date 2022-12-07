#include <stdio.h>
#include <stdlib.h>


main()
{
    // Declaração das Variáveis
   
    int  i,  num, vezes = 0;
      
    printf("*** Verifica se o n%cmero %c "
    "primo ***\n", 163, 130);
    printf("\nDigite um n%cmero inteiro: \n\n", 163);
    scanf("%d", &num);
    printf("\n\n\n");
    
    for (i = 1; i <= num && vezes <= 3; i++)              
    //for (i = 1; i <= num; i++)
    {    //5 / 1 = 5  resto = 0
        // 5 / 2 = 2  resto = 1
        // 5 / 3 = 1  resto = 2
        // 5 / 4 = 1  resto = 1
        // 5 / 5 = 1  resto = 0 
      if (num % i == 0)
      vezes ++;
    }
       
    if (vezes == 2)
    printf("\nO n%cmero %d %c primo.\n", 163, num, 130);
    else
    printf("O n%cmero %d n%co %c primo.", 163, num, 198, 130);
    printf("\n\n\n");
   
    system("pause");
}