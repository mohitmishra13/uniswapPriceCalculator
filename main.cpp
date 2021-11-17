
#include <bits/stdc++.h>
using namespace std;
 long double ETH,WRX,ConstantEthWrx,nETH,nWrx;
 double Fees = 00,Slippage=00;// Both are in percentage
 double calclFees = (1-Fees/100),calclSlippage =(1-Slippage/100) ;//Multipliers to calculate fees and slippage
    
    
    
void exchangeEthToWrx(){
    long double tempETH,dy;//tempETH is number of X tokens that are to be swapped and dy the number of Y tokens received after deducting fees
    
    cout<<"\n Enter the number of ETH you want to swap with WRX";
    
    cin>>tempETH;
   
    
    dy = (WRX*tempETH*calclFees)/(ETH+calclFees*tempETH);//calculation as provided in readme
    cout<<"\n you will receive minimum  "<<dy*calclSlippage<<"    number of WRX tokens\n";//calculation after slippage
    
}

void exchangeWrxToEth(){
    long double tempWRX,dy;//tempWRX is number of X tokens that are to be swapped and dy the number of Y tokens received after deducting fees
    
    cout<<"\n Enter the number of WRX you want to swap with ETH";
    
    cin>>tempWRX;
   
    
    dy = (ETH*tempWRX*calclFees)/(WRX+calclFees*tempWRX);
    cout<<"\n you will receive minimum "<<dy*calclSlippage<<"    number of ETH tokens\n";
    
}

void showEthToWrxPrice()
{
    
    cout<<WRX/ETH<<"\n";// 1 ETH is equal to these many WRX TOKENS
}

void showWrxToEthPrice()
{
    cout<<ETH/WRX<<"\n";// 1 WRX is equal to these many ETH TOKENS
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
      cout<<"\nEnter \n1 to swap ETH to WRX \n2 to swap WRX to ETH \n3 to calculate price of 1 ETH w.r.t WRX \n4 to calculate price of 1 WRX w.r.t ETH\n";
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


