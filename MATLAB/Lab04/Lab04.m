clc
clear all
close all
f = @(x) x^3 - x -1;
g = @(x) 3*x^2-1;
a = input('Enter the Initial Guess (a): ');
e = input('Enter the Error Tolerance: ');
n = input('Enter the Number of Iteration:');
step = 1;
fa = feval(f,a);
while abs(fa) > e
    err(step)=abs(fa);
    fa = feval(f,a);
    ga = feval(g,a);
    if ga == 0
        disp('Mathematical Error');
        break;
    end
    b = a - fa/ga;
    fprintf('step=%d\ta=%f\tf(a)=%f\n ',step ,a,fa);
    a = b;
    if step > n
        disp('Not Convergent');
        break;
    end
    step = step + 1;
end

fprintf('Root is: %f\n',a);
fprintf('Number of Iterations: %d\n',step);
plot(err)