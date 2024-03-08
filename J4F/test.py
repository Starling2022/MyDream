#BAI1
n=int(input("nhap so a:"))
if n%2==0:
    print("a la so chan")
else:
    print("a la so le")

#BAI2
n=int(input("nhap so a:"))
if n>0:
    print("a la so nguyen duong")
else:
    print("a la so nguyen am")

#BAI3
a=int(input("Nhap so nguyen a:"))
b=int(input("Nhap so nguyen b:"))
if a>b:
    print("a lon hon b")
else:
    print("a nho hon b")

#BAI4
a=int(input("Nhap so nguyen a:"))
b=int(input("Nhap so nguyen b:"))
if a+b>0:
    print("nguyen duong")
else:
    print("Nguyen am")

#BAI5
a=int(input("Nhap so nguyen a:"))
b=int(input("Nhap so nguyen b:"))
if a>b:
    print("F=", 2*a+2*(a-b))
else:
    print("F=", 2*b+2*(b-a))

#BAI6
n=int(input("nhap khoi luong cam can mua:"))
if n<5:
    print("So tien can phai tra la: ", n*15000)
else:
    print("So tien can phai tra la: ", n*12000)

#BAI7
a=int(input("Nhap so nguyen a:"))
b=int(input("Nhap so nguyen b:"))
c=int(input("Nhap so nguyen c:"))
f=a+b+c
if f < 0:
    print("tong f=",f, "la so nguyen am")
else:
    print("tong f=",f, "la so nguyen duong")

#BAI8
a=int(input("Nhap so nguyen a:"))
b=int(input("Nhap so nguyen b:"))
c=int(input("Nhap so nguyen c:"))
f=a+b+c
if f%2==0:
    print("tong f=",f, "la so chan")
else:
    print("tong f=",f, "la so le")
