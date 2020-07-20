from math import modf
def farey(approx):
    num1=0
    den1=1
    num2=1
    den2=1
    i=0
    z=(num1+num2)/(den1+den2)
    while(i<1000):
        if approx>z:
            num1+=num2
            den1+=den2
        elif approx<z:
            num2+=num1
            den2+=den1
        z=(num1+num2)/(den1+den2)
        i+=1
    return(str(num1+num2)+"/"+str(den1+den2))

k=float(input("Enter the numerator"))
l=float(input("Enter the denominator"))
flt,inte=modf(k/l)
print(str(int(k/l)),str(farey(flt)))