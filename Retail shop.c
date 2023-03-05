#include<stdio.h>
struct item
{
    int quant;
    float price;
    float amt_spent;
};
void main()
{
  struct item x[8];
  float /*total=0,*/total_amt=0;
  int sum=0;
  int total_items=0;
  printf("enter the quantity and price of items as per requirements\n");
  printf("********************\n\nRICE BAG -\t 1\nEDITABLE OIL -\t 2\nCOOKERY ITEMS -\t 3\nWHEAT FLOUR -\t 4\nGROUND NUTS -\t 5\nSALT -\t\t 6\nBISCUITS -\t 7\nDAL ITEMS -\t 8\n********************\n\n");
  for(int i=0;i<8;i++)
  {
    printf("enter the quantity and price for %d item\t",i+1);
    scanf("%d",&x[i].quant);
    scanf("%f",&x[i].price);
    total_items=total_items+x[i].quant;
    x[i].amt_spent = x[i].quant*x[i].price;
    total_amt=total_amt+x[i].amt_spent;
    //sum=sum+x[i].price;
    //total=total_items*sum;
  }
  printf("\nthe quantity and price of rice bag is %d and %.2f",x[0].quant,x[0].price);
  printf("\nthe quantity and price of oil is %d and %.2f",x[1].quant,x[1].price);
  printf("\nthe quantity and price of cookery items is %d and %.2f",x[2].quant,x[2].price);
  printf("\nthe quantity and price of wheat flour is %d and %.2f",x[3].quant,x[3].price);
  printf("\nthe quantity and price of ground nuts is %d and %.2f",x[4].quant,x[4].price);
  printf("\nthe quantity and price of salt is %d and %.2f",x[5].quant,x[5].price);
  printf("\nthe quantity and price of biscuits is %d and %.2f",x[6].quant,x[6].price);
  printf("\nthe quantity and price of dal items is %d and %.2f",x[7].quant,x[7].price);
  printf("\n***************\n\nthe total price of the items is %.2f",total_amt);
  printf("\nthe total number of items is %d \n",total_items);
  x[0].price=0.80*x[0].price;
  x[1].price=0.85*x[1].price;
  x[2].price=0.90*x[2].price;
  for(int i=3;i<8;i++)
  {
    x[i].price=0.95*x[i].price;
  }
  printf("********************\n\nRICE BAG -\t 1\nEDITABLE OIL -\t 2\nCOOKERY ITEMS -\t 3\nWHEAT FLOUR -\t 4\nGROUND NUTS -\t 5\nSALT -\t\t 6\nBISCUITS -\t 7\nDAL ITEMS -\t 8\n********************\n\n");
  total_amt=0;
  for(int i=0;i<8;i++)
  {
    printf("\nEnter the quantity bought for item %d\t",i+1);
    scanf("%d",&x[i].quant);
    x[i].amt_spent = x[i].quant*x[i].price;
    total_amt=total_amt+x[i].amt_spent;
  }

  printf("\n\nTotal amount spent by rhe customer is \t\t%f",total_amt);
}
