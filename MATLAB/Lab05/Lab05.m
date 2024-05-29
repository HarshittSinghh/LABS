clc
clear all
close all
X =input('Enter the Value of X:');
x=[0,1,2,3,4];
y=[1,2,4,8,16];
n=length(x);
%use to create blank table
D=zeros(n,n); 
D(:,1)=y';
for j=2:n
    for i=j:n
        D(i,j) =D(i ,j-1)-D(i-1,j-1);
    end
end
h=x(2)-x(1);
u=(X-x(n))/h;
A=y(n)
G=u;
for k=1:n-1
    A=A+G*D(n-k,k+1)
    G=((u+k)/(k+1))*G
end
fprintf('value of Y(%f)=%f\n',X,A);
