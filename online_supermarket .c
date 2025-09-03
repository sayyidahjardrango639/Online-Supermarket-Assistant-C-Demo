 #include <stdio.h>

 int main()
{
    int firstchoice,secondchoice,itemchoice,quatintychoice,i;
    double weightkg=0.0,total=0.0;
    
    char *vegtablessection[]={"Tomato🍅 ","Corn🌽","Potato🥔","Brinjal🍆"};
    char *vegtablesdietplansection [] = { "Broccoli🥦","Carrote🥕","Cucumber🥒","Garlic🧄"};
    char *fruitssection []={"Apple🍎","Grapes🍇","Pinapple🍍","cherry🍒"};
    char *fruitsdietplansection []={"Banana🍌","Kiwi🥝","Watermelon🍉","Strawberry🍓"};
   
    double vegtablessectionprices []={20.0,35.0,45.0,20.0};
    double vegtablesdietplansectionprices []={50.0,75.0,15.0,10.0};
    double fruitssectionprices []={100.0,30.0,80.0,95.0};
    double fruitsdietplansectionprices[]={40.0,120.0,45.0,125.0};
    
    char **names=NULL;
    double *price=NULL;
    int list=4;
    
    printf("welcome to online supermarket, Sir/ Madam 🏪 \n");
    printf("what do you want to buy today  😊 \n");
   
   printf ("1. for vegtables \n");
   printf ("2.  for fruits \n");
   printf ("Enter your have which intreste selecte choice  😊 :");
   if (scanf ("%d",&firstchoice)!=1)
   return 0;
   
   switch (firstchoice){
   case 1:
   case 2:
   
   printf(" Great choice Sir or Madam are you buying for this :\n");
   printf("1. for Home use\n");
   printf("2. for Family use \n");
   printf("3. for Diet plan option \n");
   
   printf("Enter your choice  😊 :");
   if (scanf("%d",&secondchoice)!=1)
   return 0;
   
   switch (secondchoice){
   case 1:
   case 2:
   printf("Here are normal some options (price per kg) :\n ");
   
   if (firstchoice ==1){
   names= vegtablessection;
   price=vegtablessectionprices;}else{
   
   names=fruitssection;
   price=fruitssectionprices;} 
   break;
   
   case 3:
   printf("Here are some Diet plan options (price per kg): \n");
   if (firstchoice ==1){
   names=vegtablesdietplansection;
   price=vegtablesdietplansectionprices;}else{
   
   names=fruitsdietplansection;
   price=fruitsdietplansectionprices;}
   break;
   default:
   printf("❌❌wrong option please try again !!\n");
   return 0;
   }
   for (i=0;i<list;i++){
   printf("%d . %s - Rs: %f/kg\n",i+1,names[i],price[i]);}
   
   printf("select is item (1-%d):",list);
   if(scanf("%d",&itemchoice)!=1)
   return 0;
   
   if (itemchoice <1|| itemchoice>list){
   printf("wrong item select \n");
   return 0;}
   
   printf("Choose quatinty :\n");
   printf("1. 1kg \n");
   printf("2. 500g\n");
   printf("Enter your which choice 😊 :");
   
   if (scanf("%d",&quatintychoice)!=1)
   return 0;
   
   switch(quatintychoice){
   case 1:weightkg=0.5;
   break;
   case 2:weightkg=1.0;
   break;
   default:
   printf("❌wrong quatinty\n");
   return 0;}
   
   printf("📃=== Bill Recipte===📃\n");
   printf(" item :%s\n",names[itemchoice-1]);
   if(quatintychoice==2){
   printf("price (500g) : Rs. %f\n",price [itemchoice-1]*0.5);
   printf("quatinty : 500g \n");}else{
   printf("price (1kg ) :Rs. %f\n",price[itemchoice-1]);
   printf("quatinty : 1kg \n");}
   printf("Total : Rs. %f\n",total);
   printf("==================================\n");
   printf("your order has a successfully ✔✔  \n");
   printf("Delivery will reach within 10 minutes⏳ \n");
   printf("🙏 Thank you for shopping with us and Hope you will come 😊 ");
   break;
   default:
   printf("❌ ❌Error first choice so please try again or restart the app \n");
   } return 0;
}
