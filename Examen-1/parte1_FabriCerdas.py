#planta hidroelectrics


def aumentar(turbinas, i, mw, capacidad_max):
    if turbinas[i] + mw > capacidad_max:
        print("limite excedido")
    else:
        turbinas[i] += mw


def reducir(turbinas, i, mw):
    if turbinas[i] - mw < 0:
        turbinas[i] = 0
        print(f"turbina {i+1} apagada")
    else:
        turbinas[i] -= mw


def consultar(turbinas, i):
    print(f"Turbina {i+1}: {turbinas[i]} MW")


def total(turbinas):
    suma = 0
    for t in turbinas:
        suma += t
    return suma


def mayor_aporte(turbinas, n):
    mayor = turbinas[0]
    pos = 0

    for i in range(n):
        if turbinas[i] > mayor:
            mayor = turbinas[i]
            pos = i

    print(f"mayor aporte= turbina {pos+1}: {mayor} MW")



n = int(input("N: "))
capacidad_max = int(input("capacidad maxima (mw): "))

turbinas = [0] * n 

opcion = 0

while opcion != 6:
    print("\n bienvenide al sistema de control")
    print("1. aumentar generacion")
    print("2. reducir generacion")
    print("3. consultar turbina")
    print("4. generacion total de la planta")
    print("5. turbina con mayor aporte")
    print("6. salir")

    opcion = int(input("opcion: "))

    if opcion == 1:
        i = int(input("turbina: ")) - 1
        mw = int(input("MW: "))
        if 0 <= i < n:
            aumentar(turbinas, i, mw, capacidad_max)

    elif opcion == 2:
        i = int(input("turbina: ")) - 1
        mw = int(input("MW: "))
        if 0 <= i < n:
            reducir(turbinas, i, mw)

    elif opcion == 3:
        i = int(input("turbina: ")) - 1
        if 0 <= i < n:
            consultar(turbinas, i)

    elif opcion == 4:
        print(f"generacion total: {total(turbinas)} MW")

    elif opcion == 5:
        mayor_aporte(turbinas, n)

    elif opcion == 6:
        print("saliendo gracias")

    else:
        print("opcion invalida")