clc
clear all
close all
y = input('Enter the Function');
a = input('Enter the Value of a:');
b = input('Enter the Value of b:');
e = input('Enter the error:');
i = 1;
fa = feval(y,a);
fb = feval(y,b);
if fa*fb > 0
    disp('No Roots');
else
    c = (a+b)/2;
    fc = feval(y,c);
    fprintf('\n\na\t\t\tb\t\t\tc\t\t\tf(c)\n');
    while abs(fc) > e
        fprintf('%f\t%f\t%f\t%f\n',a,b,c,fc);
        
        if fa*fc < 0 
            b=c;
        else 
            a=c;
        end 
        c = (a+b)/2;
        fc = feval(y,c);
        d(i) = abs(fc);
        i = i + 1;
    end
    fprintf('Root is: %f\n',c);
    fprintf('Number of Iteration:%f',i);
  
end
       
