## Descripción
Esta es mi actividad integrdora y tiene un tamaño de cuatro columnas (país, código del país, año y emisiones totales) y 20,853 entradas. El usuario puede imprimir en consola toda la tabla o una porción de ella ingresando un rango; puede ordenar la tabla o una porción de ella, en base a una de las cuatro variables disponibes (entidad, el código, año y emisiones totales); y buscar cualquier valor en la tabla.

Los casos de prueba se encuentran en la opción 4 del menú inicial 

El código se probó utulizando el editor de texto en línea Repl.it

## Complejidad del código
El programa usa dos estructuras fundamentales, lista doblemente ligada para almacenar los datos en forma de una matriz de cadenas, y árbol binario que se usa únicamente para buscar valores. Para ordenar la matriz, se utiliza el Bubble Sort. Este no es el más eficiente, sin embargo se decidió usar este porque la longitud de la tabla no es de tamaño considerado para que la eficiencia juegue un papel fundamental, y estos algoritmos son mucho más fácilesde implementar y de leer, por lo que se le dio prioridad a esto, en vez de algoritmos que resulvan la tarea un poco más rápido.

#### Bubble Sort
La complejidad temporal de este algoritmo es menor que cuadrática. Sin embargo, contemplamos que para el peor de los casos la complejidad se redondea a cuadrática, O(n^2). 

#### Sequential Search (Binary Search Tree)
La complejida temporal de la función es logarítmica para el promedio de los casos, porque por cada iteración, el algoritmo descarta la mitad de los valores. Sin embargo, se puede dar el caso de que el árbol se haya creado de forma degenerada, y eso aumentaría el tiempo de búsqueda a O(n).

### Complejidad de otras funciones

#### Lectura de datos
Leer los datos tiene una complejidad temporal lineal en todos los casos, o O(n), porque tiene que recorrer todo los caracteres del archivo para guardarlos. Lo mismo para la complejidad espacial.

#### Desplegar datos
De igual manera, tiene una complejidad temporal lineal para el peor de los casos, O(n), porque recorre toda la tabla. 

## Casos de prueba
### Ordenamiento
#### Caso 1
~~~
[IN]: 3 0 10
[OUT]:
ENTITY     CODE     YEAR     CO2-EMISSIONS
Bermuda    BMU    2012    476320
Papua New Guinea    PNG    1974    1586512
Myanmar    MMR    1929    3048448
Finland    FIN    1933    3224320
Dominican Republic    DOM    1971    3518697.01
Slovenia    SVN    1959    3992183.44
Norway    NOR    1969    22193766.31
EU-28        1830    87005344
South Korea    KOR    1977    105691588.4
Czechoslovakia    OWID_CZS    1956    107318560
~~~
#### Caso 2
~~~
[IN]: 3 0 10
[OUT]:
ENTITY     CODE     YEAR     CO2-EMISSIONS
EU-28        1835    86111328
International transport        1762    0
Statistical differences        1909    0
Poland    POL    1936    49900016
Mexico    MEX    1940    23211440
Americas (other)        1950    316393728
Guyana    GUY    1957    534944
Guadeloupe    GLP    1958    109920
Burkina Faso    BFA    1978    348080
Vietnam    VNM    1988    23008690.03
~~~

### Búsqueda
#### Caso 1
~~~
[IN]: 4 1 COL
[OUT]:
ENTITY     CODE     YEAR     CO2-EMISSIONS
Colombia    COL    1961    18196303.65
~~~
#### Caso 2
~~~
[IN]: 4 2 1944
[OUT]:
ENTITY     CODE     YEAR     CO2-EMISSIONS
Poland    POL    1994    359611076.8
~~~
