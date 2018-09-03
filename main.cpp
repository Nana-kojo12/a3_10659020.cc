#include <iostream>

using namespace std;

int main()
{
   int  myscore;
   cout<<" Enter myscore:";
   cin>>myscore;

   if(myscore<=100 && myscore>=80){
       cout<<"Your grade is:A";
   }

   else if(myscore<=79 && myscore>=75){
        cout<<"Your grade is:B+";
   }

   else if(myscore<=74 && myscore>=70){
         cout<<"Your grade is : B";

   }
   else if(myscore<=69 && myscore>=65){
         cout<<"Your grade is: C+";
   }
   else if(myscore<=64 && myscore>=60){
        cout<<"Your grade is: C";
   }
   else if( myscore<=59 && myscore>=55){
      cout<<"Your grade is:D+";
   }
   else if(myscore<=54 && myscore>=50){
      cout<<"Your grade is: D";
   }
   else if(myscore<=49 && myscore>=45){
      cout<<"Your grade is: E";
   }
   else if(myscore<=44 && myscore>=0){
      cout<<"Your grade is: F";
   }
   return 0;
}
