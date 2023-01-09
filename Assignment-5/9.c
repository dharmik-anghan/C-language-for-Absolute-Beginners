#include<stdio.h>                                                             
                                                                                                                                                                                                                                                                          
void main()                                                                     
{                                                                               
  double cost, sold, profit, profit_per;                                        
  printf("Enter cost amount: ");                                                
  scanf("%lf", &cost);                                                          
  printf("Enter sold amount: ");                                                
  scanf("%lf", &sold);                                                          
                                                                                
  profit = sold - cost;                                                         
  profit_per = ((profit *100)/cost);                                            
  printf("Profit Percentage: %lf\n", profit_per);                               
}      
