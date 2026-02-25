def hay_cupo(reservas, capacidad):
    return len(reservas) < capacidad


def mostrar_resumen(reservas, capacidad):
    print("\n Resumen de  los aceptados")
    print(f"Reservas aceptadas: {len(reservas)}/{capacidad}")
    for nombre in reservas:
        print(f"- {nombre}")


def main():
    capacidad = 5
    reservas = []

    while True:
        print(f"\nCupos disponibles: {capacidad - len(reservas)}")
        nombre = input("Nombre (o 'salir'): ")

        if nombre.lower() == "salir":
            break

        if hay_cupo(reservas, capacidad):
            reservas.append(nombre)
            print(" fuiste reservado para la mejor fiesta")
        else:
            print("Salado por lerdo ya no hay espacio.")

    mostrar_resumen(reservas, capacidad)


if __name__ == "__main__":
    main()
    
    