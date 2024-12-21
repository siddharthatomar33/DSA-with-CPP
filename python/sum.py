a = int(input("enter first no."))
b = int(input("enter sec no."))
c = int(input("enter third no."))

S = (a+b+c)/2;

result=S*(S-a)*(S-b)*(S-c);
print("the area of the triangle", result**(1/2)) 