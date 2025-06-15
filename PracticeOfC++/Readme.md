# Kata de Codewars: Zero Padding Number  

Este proyecto implementa la solución de una kata de Codewars en C++ ([ver kata](https://www.codewars.com/kata/51c89385ee245d7ddf000001/cpp) ).  
La idea principal es tomar un número entero y transformarlo en una cadena de texto con un ancho fijo de 5 dígitos. Si el número tiene menos de 5 dígitos, se rellenará con ceros a la izquierda. Además, se formatea el resultado final para incluir la frase `"Value is "` al inicio.

## Descripción del Proyecto

La implementación contiene dos funciones principales:

- **`solution(int n)`**:  
  Toma el número, lo convierte en una cadena y lo almacena en un array de 5 posiciones. Rellena las posiciones faltantes con ceros y utiliza `std::ostringstream` para concatenar el resultado final con la frase `"Value is "`.

- **`solition2(int n)`**:  
  Otra versión de la solución que inicializa una cadena con `"00000"` y luego reemplaza sus posiciones correspondientes con los dígitos del número dado. Ambas funciones son usadas en el `main` para mostrar ejemplos de salida.

El `main()` ejecuta la función con diferentes valores de entrada (por ejemplo, 5, 123 y 98765) y muestra en consola el string formateado.

## Compilación y Ejecución

Para compilar y ejecutar el proyecto en sistemas compatibles con C++:

1. **Compilación**  
   Utiliza un compilador de C++ (por ejemplo, g++). Ejecuta el siguiente comando en la terminal:  

   ```bash
   g++ -std=c++11 -o kata PracticeOfC++.cpp
   ```

2. **Ejecución**  
   Una vez compilado el proyecto, ejecútalo:  

   ```bash
   ./kata
   ```

Verás la salida en la consola con los diferentes formatos resultantes, por ejemplo:

```
Value is 00005
Value is 00123
Value is 98765
----------------------------
Value is 00005
Value is 00123
Value is 98765
```

## Estructura del Código

- **PracticeOfC++.cpp**:  
  Archivo principal que contiene el punto de entrada (`main`) y las dos funciones `solution` y `solition2`.

- **Encabezados y Librerías**:  
  El código hace uso estándar de las bibliotecas `<iostream>`, `<string>`, `<sstream>` para el manejo de cadenas y la salida en consola.

## Notas y Mejoras

- **Consistencia de Nombres**: Si deseas mejorar la claridad, considera renombrar `solition2` a algo como `solutionV2`.
- **Validación de Entrada**: Actualmente el código asume que la entrada es válida. Se podría añadir manejo de errores o validación para otros casos.
- **Optimización**: Ambas implementaciones logran el mismo objetivo; se puede analizar el rendimiento y claridad para decidir cuál usar en un entorno de producción o enseñanza.

## Contribuciones

Si deseas colaborar o sugerir mejoras, no dudes en abrir un _issue_ o enviar una _pull request_.  
¡Siempre es interesante debatir ideas sobre el formateo de strings en C++!

---