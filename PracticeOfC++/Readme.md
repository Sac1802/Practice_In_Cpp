# Kata de Codewars: Zero Padding Number  

Este proyecto implementa la soluci�n de una kata de Codewars en C++ ([ver kata](https://www.codewars.com/kata/51c89385ee245d7ddf000001/cpp) ).  
La idea principal es tomar un n�mero entero y transformarlo en una cadena de texto con un ancho fijo de 5 d�gitos. Si el n�mero tiene menos de 5 d�gitos, se rellenar� con ceros a la izquierda. Adem�s, se formatea el resultado final para incluir la frase `"Value is "` al inicio.

## Descripci�n del Proyecto

La implementaci�n contiene dos funciones principales:

- **`solution(int n)`**:  
  Toma el n�mero, lo convierte en una cadena y lo almacena en un array de 5 posiciones. Rellena las posiciones faltantes con ceros y utiliza `std::ostringstream` para concatenar el resultado final con la frase `"Value is "`.

- **`solition2(int n)`**:  
  Otra versi�n de la soluci�n que inicializa una cadena con `"00000"` y luego reemplaza sus posiciones correspondientes con los d�gitos del n�mero dado. Ambas funciones son usadas en el `main` para mostrar ejemplos de salida.

El `main()` ejecuta la funci�n con diferentes valores de entrada (por ejemplo, 5, 123 y 98765) y muestra en consola el string formateado.

## Compilaci�n y Ejecuci�n

Para compilar y ejecutar el proyecto en sistemas compatibles con C++:

1. **Compilaci�n**  
   Utiliza un compilador de C++ (por ejemplo, g++). Ejecuta el siguiente comando en la terminal:  

   ```bash
   g++ -std=c++11 -o kata PracticeOfC++.cpp
   ```

2. **Ejecuci�n**  
   Una vez compilado el proyecto, ejec�talo:  

   ```bash
   ./kata
   ```

Ver�s la salida en la consola con los diferentes formatos resultantes, por ejemplo:

```
Value is 00005
Value is 00123
Value is 98765
----------------------------
Value is 00005
Value is 00123
Value is 98765
```

## Estructura del C�digo

- **PracticeOfC++.cpp**:  
  Archivo principal que contiene el punto de entrada (`main`) y las dos funciones `solution` y `solition2`.

- **Encabezados y Librer�as**:  
  El c�digo hace uso est�ndar de las bibliotecas `<iostream>`, `<string>`, `<sstream>` para el manejo de cadenas y la salida en consola.

## Notas y Mejoras

- **Consistencia de Nombres**: Si deseas mejorar la claridad, considera renombrar `solition2` a algo como `solutionV2`.
- **Validaci�n de Entrada**: Actualmente el c�digo asume que la entrada es v�lida. Se podr�a a�adir manejo de errores o validaci�n para otros casos.
- **Optimizaci�n**: Ambas implementaciones logran el mismo objetivo; se puede analizar el rendimiento y claridad para decidir cu�l usar en un entorno de producci�n o ense�anza.

## Contribuciones

Si deseas colaborar o sugerir mejoras, no dudes en abrir un _issue_ o enviar una _pull request_.  
�Siempre es interesante debatir ideas sobre el formateo de strings en C++!

---