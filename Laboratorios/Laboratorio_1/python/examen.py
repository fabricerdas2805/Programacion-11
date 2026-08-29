def func(expresion):
    pila = []
    for caracter in expresion:
        if caracter == ")":
            if not pila:
                return False
            pila.pop()
            return len(pila) == 0