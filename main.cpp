#include <iostream>
using namespace std;
//potato price
float potato(){
    cout<<"Potato 1kg = rs 30";
    float quantity ;
    cout<<"\n enter the quantity:";cin>>quantity;
    cout<<"the total cost of Potato is:"<<quantity*30;
    return quantity*30;
}

//Onion price 
float onion(){
    cout<<"onion 1kg = rs 10";
    float quantity ;
    cout<<"\n enter the quantity:";cin>>quantity;
    cout<<"the total cost of Onion is:"<<quantity*10;
    return quantity*10;
}
//Tomato price
float tomato(){
    cout<<"tomato 1kg = rs 25";
    float quantity ;
    cout<<"\n enter the quantity:";cin>>quantity;
    cout<<"the total cost of Tomato is:"<<quantity*25;
        return quantity*25;
}
//Raddish price
float raddish(){
    cout<<"Raddish 1kg = rs 55";
    float quantity ;
    cout<<"\n enter the quantity:";cin>>quantity;
    cout<<"the total cost of Raddish is:"<<quantity*55;
        return quantity*55;
}
//Carrot price
float carrot(){
    cout<<"Carrot 1kg = rs 45";
    float quantity ;
    cout<<"\n enter the quantity:";cin>>quantity;
    cout<<"the total cost of Carrot is:"<<quantity*45;
        return quantity*45;
}
//Beetroot price
float beetroot(){
    cout<<"Beetrrot 1kg = rs 25";
    float quantity ;
    cout<<"\n enter the quantity:";cin>>quantity;
    cout<<"the total cost of Beetroot is:"<<quantity*25;
        return quantity*25;
}
//Beans price
float beans(){
    cout<<"Beans 1kg = rs 50";
    float quantity ;
    cout<<"\n enter the quantity:";cin>>quantity;
    cout<<"the total cost of Beans is:"<<quantity*50;
        return quantity*50;
}
//Cabbage price
float cabbage(){
    cout<<"Cabbage 1kg = rs 77";
    float quantity ;
    cout<<"\n enter the quantity:";cin>>quantity;
    cout<<"the total cost of Cabbage is:"<<quantity*77;
        return quantity*77;
}
//Cauliflower price
float cauliflower(){
    cout<<"Cauliflower 1kg = rs 35";
    float quantity ;
    cout<<"\n enter the quantity:";cin>>quantity;
    cout<<"the total cost of Cauliflower is:"<<quantity*35;
        return quantity*35;
}
//Chilli price
float chilli(){
    cout<<"Chilli 1kg = rs 25";
    float quantity ;
    cout<<"\n enter the quantity";cin>>quantity;
    cout<<"the total cost of Chilli is:"<<quantity*40;
        return quantity*40;
}


int main()
{ //main program starts
    int option;
    float baseamount, totalamount,a,b,c,d,e,f,g,h,i,j;
    cout<<"\n\t\tNAME:AMSAKUMARI R\t\t\n";
    cout<<"\t\tCOLLEGE:MAILAM ENGINEERING COLLEGE";
    cout<<"\n\n\t\tWelcome to ~AMSI~ Supermarket\n\n";
    start:
    cout<<"\n1.Potato \n2.Onion \n3.Tomato \n4.Raddish \n5.Carrot \n6.Beetroot \n7.Beans \n8.Cabbage \n9.Cauliflower \n10.Chilli";
    cout<<"\nenter your choice:";cin>>option;
      switch(option){
          case 1:
          a=potato();
          break;
          case 2:
          b=onion();
          break;
          case 3:
          c=tomato();
          break;
          case 4:
          d=raddish();
          break;
          case 5:
          e=carrot();
          break;
          case 6:
          f=beetroot();
          break;
          case 7:
          g=beans();
          break;
          case 8:
          h=cabbage();
          break;
          case 9:
          i=cauliflower();
          break;
          case 10:
          j=chilli();
          break;
          default:
            exit(0);
      }
      
      totalamount=a+b+c+d+e+f+g+h+i+j;
      cout<<"\nThe Grand total is:"<<totalamount;
      goto start;
    
    

    return 0;
    //main program ends
}
