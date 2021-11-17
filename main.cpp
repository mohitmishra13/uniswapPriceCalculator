
#include <bits/stdc++.h>
using namespace std;
 long double ETH,WRX,ConstantEthWrx,nETH,nWrx;
 double Fees = 00,Slippage=00;// Both are in percentage
 double calclFees = (1-Fees/100),calclSlippage =(1-Slippage/100) ;
    
    
    
void exchangeEthToWrx(){
    long double tempETH,dy;
    
    cout<<"\n Enter the number of ETH you want to swap with WRX";
    
    cin>>tempETH;
   
    
    dy = (WRX*tempETH*calclFees)/(ETH+calclFees*tempETH);
    cout<<"\n you will receive minimum  "<<dy*calclSlippage<<"    number of WRX tokens";
    
}

void exchangeWrxToEth(){
    long double tempWRX,dy;
    
    cout<<"\n Enter the number of ETH you want to swap with WRX";
    
    cin>>tempWRX;
   
    
    dy = (ETH*tempWRX*calclFees)/(WRX+calclFees*tempWRX);
    cout<<"\n you will receive minimum "<<dy*calclSlippage<<"    number of WRX tokens";
    
}

void showEthToWrxPrice()
{
    
    cout<<WRX/ETH;
}

void showWrxToEthPrice()
{
    cout<<ETH/WRX;
}

int main()
{
    long double nETH,nWrx;
    
    cout<<"Enter the transaction Fees";
    cin>>Fees;
    cout<<"\nEnter the Slippage";
    cin>>Slippage;
    calclFees = (1-Fees/100);
    calclSlippage =(1-Slippage/100);
    
    
    cout<<"\nEnter the initial number of ETH tokens";
    cin>>ETH;
    cout<<"\nEnter the initial number of WRX tokens";
    cin>>WRX;
    
    ConstantEthWrx = ETH*WRX;
    
  while(1){
      int option;
      cout<<"\nEnter \n1 to swap ETH to WRX \n2 to swap WRX to ETH \n3 to calculate price of 1 ETH w.r.t ETH WRX \n4 to calculate price of 1 WRX w.r.t \n";
      cin>>option;
      switch(option)
      {
          case 1 : exchangeEthToWrx();
          break;
          case 2: exchangeWrxToEth();
          break;
          case 3: showEthToWrxPrice();
          break;
          case 4: showWrxToEthPrice();
          break;
          
      }
  }
    
    
    
    
    
    
    
    
    
}


