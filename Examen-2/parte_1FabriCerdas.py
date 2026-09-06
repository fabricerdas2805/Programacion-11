# funcion lista vacia
def estaVacia(fila):
    return len(fila) == 0

# funcion lista llena
def estaLlena(fila, capacidad):
    return len(fila) >= capacidad

# funcion agregar
def encolar(fila, nombre, capacidad):
    if estaLlena(fila, capacidad):
        print("fila llena")
    else:
        fila.append(nombre)

# funcion atender
def atender(fila):
    if estaVacia(fila):
        print("no hay nadie en la fila")
    else:
        nombre = fila.pop(0)
        print(f"atendiendo a: {nombre}")

# funcion ver quien sigue
def frente(fila):
    if estaVacia(fila):
        print("no hay nadie en la fila")
    else:
        print(f"siguiente: {fila[0]}")

# funcin cantidad de personas en fila
def cantidad(fila):
    return len(fila)

capacidad = int(input("ingrese la capacidad maxima de la fila: "))

while capacidad < 1 or capacidad > 100:
    capacidad = int(input("ingrese una capacidad valida (1-100): "))

fila = []

while True:
    print("\n--- cafeteria CCP ---")
    print("1. encolar persona")
    print("2. atender siguiente persona")
    print("3. ver quien sigue")
    print("4. cantidad en fila")
    print("5. salir")

    opcion = input("seleccione una opcion: ")

    if opcion == "1":
        nombre = input("nombre de la persona: ")
        encolar(fila, nombre, capacidad)

    elif opcion == "2":
        atender(fila)

    elif opcion == "3":
        frente(fila)

    elif opcion == "4":
        print(f"en fila: {cantidad(fila)} personas")

    elif opcion == "5":
        print("programa finalizado, chao de la cafeteria")
        break

    else:
        print("opcion invalida")