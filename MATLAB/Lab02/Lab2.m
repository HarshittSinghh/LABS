%------------INVERSE OF A MATRIX-----------%
% a = [1 2 3 ;
%     3 4 5 ;
%     5 6 7]
% inv(a)

%---------IF-ELSE-STATEMENT----------------%
% clc
% clear all
% close
% a=input('Enter an Integer A:')
% b=input('Enter an Integer B:')
% if a > b 
%     display('a is greater')
% else
%     display('b is greater')
% end

%---------IF-ELSE-STATEMENT---------------%
% clc
% clear all
% close
% n=input('Enter the Number:')
% age = 18
% if n > 18
%     display('Adult')
% else
%     display('Child')
% end

%---------IF-ELSE-STATEMENT (Wheather the number is divisible by 7 or not---------------%
% n = input('Enter the Number: ');
% if rem(n, 7) == 0
%     disp('The given number is divisible by 7');
% else
%     disp('The given number is not divisible by 7');
% end

---------Weekend program (Using Switch Case)-------------------------%
day = input('Enter the day (1 for Monday, 2 for Tuesday, ..., 7 for Sunday): ');
switch day
    case 6 % Saturday
        disp('The given day is a weekend day (Saturday)');
    case 7 % Sunday
        disp('The given day is a weekend day (Sunday)');
    otherwise
        disp('The given day is not a weekend day');
end

