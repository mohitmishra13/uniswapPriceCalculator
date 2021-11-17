The project contains simple main file to calculate the token price taking care of supply and demand curve as well as factor of "transaction fees" and "slippage".

The project starts by asking Fees and Slippage in percentage.

lets  the exchange has 50 tokens of type X and 1000 tokens of type Y.
let the transaction fees be 10% and slippage 5%.
let K be a constant where K = X*Y.

if we want to swap dx = 20 X tokens than number of dy tokens we receive is calculated as  below
(X+dx)(Y-dy)=K
Y-dy=K/(X+dx)
dy= Y - K/(X+dx)
dy = Y - (Y*X)/(X+dx) // substituting value of K
dy = (Y*(X+dx)- Y*X)/(X+dx)
dy = (Y*dx)/(X+dx) ---(1)

if 10% is the transaction fees than number of X coins that are left to swap is:
dx-dx*Fees/100= dx(1-Fees/100)= 0.9dx
substituting in equation (1)

dy = (Y*0.9dx)/(X+0.9dx)
substituting value for Y, dx,X we get 
dy = (1000*20*0.9)/(50+0.9*20)= 264.706

since slippage is 5%, the minimum number of coins that will be received is 
dy(1-slippage/100)=dy(1-5/100)=264.706*(19/20)=251.47
