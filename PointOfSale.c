#include<stdio.h>

void main(void){


     int code, qty;
     float price, amt, totalAmt, cash, change;
     char addAnother;

     do 
     {

              system ("cls");
              printf("==================NAJMA'S GROCERY SHOP=========\n");

              printf("[1] A BAG OF RICE\t\t Ksh 200.00\n");
              printf("[2] A BOX OF PASTA\t\t Ksh 150.00\n");
              printf("[3] ALL-PURPOSE FLOUR\t\t Ksh 250.00\n ");
              printf("[4] BREAKFAST CEREAL\t\t Ksh 160.00\n");
              printf("[5] A BOTTLE OF MILK\t\t Ksh 100.00\n");

              printf("\nENTER THE CODE\t: ");
              scanf("%d", &code);
              printf("\nENTER QUANTITY\t: ");
              scanf("%d", &qty);

              switch(code)
              {
                case 1: price = 400.00;
                        break;
                case 2: price = 350.00;
                        break;
                case 3: price = 250.00;
                        break;
                case 4: price = 160.00;
                        break;
                case 5: price = 150.00;
                        break;
              }
               amt = price * qty;
               printf("\nAmount\t: %.2f", amt);

               totalAmt = totalAmt + amt;
               printf("\nTotal Amount\t: %.2f", totalAmt);
            
               printf("\nAdd another order (y/n)? ");
               addAnother = getche();

             }while (addAnother == 'y' || addAnother == 'Y');

             do
            {
               printf("\nCash Tendered\t: ");
               scanf("%f", &cash);
            } while (cash < totalAmt);

              change = cash - totalAmt;
              printf("\nChange\t\t: %.2f", change);
              printf("\n\nTHANK YOU!, COME AGAIN!");
}
        

        

