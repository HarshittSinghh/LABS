%------------------Write a program to find the number ten from a series of random numbers--------------% 
series = randi([1, 20], 1, 10); % Randi function is use to generate random numbers
disp('Generated series:');
display(series);
if any(series == 10)
    display('The number ten is found in the series.');
else
    display('The number ten is not found in the series.');
end

%-------Use if-else statement to determine the largest of two number----%
% Prompt the user to enter two numbers
numf = input('Enter the first number: ');
nums = input('Enter the second number: ');

% Compare the two numbers using if-else statement
if numf > nums
    disp('The first number is larger.');
elseif nums > numf
    disp('The second number is larger.');
else
    disp('Both numbers are equal.');
end
