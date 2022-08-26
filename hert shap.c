#include<stdio.h>
int main () 
{
  
for (int a = 1; a <= 3; a++)
    {
      
for (int b = 1; b <= 19; b++)
	{
	  
if ((b >= 4 - a && b <= 6 + a) || (b >= 14 - a && b <= 16 + a))
	    
printf ("*");
	  
	  else
	    
printf (" ");
	
}
      
printf ("\n");
    
}
  
for (int j = 1; j <= 10; j++)
    {
      
for (int i = 1; i <= 19; i++)
	{
	  
if (j == 1 && i == 6)
	    
printf ("ravish");
	  
if (j == 1 && i >= 6 && i <= 11)
	    
continue;
	  
if (j <= i && j <= 20 - i)
	    
printf ("*");
	  
	  else
	    
printf (" ");
	
}
      
printf ("\n");
    
}
  
return 0;

}
