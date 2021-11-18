## Descripción
Carlos Davalos: En esta actividad integradora se registran la interconexión entre distintos aeropuertos del mundo. Y el programa va a modelar esas relaciones en forma de grafo direccional. En esta representación, que un nodo tenga pocos o muchos significa que hay menos o más destinos en los que se puede volar. Se puede buscar la ruta entre un aeropuerto inicial y un aeropuerto destino. Se utilizó el algoritmo Breadth First Search, como son muchas las conexiones entonces es más probalbe que llegue al destino en menor cantidad de pasos que si se hubiera usado un Depth First Search. También se puede buscar el aeropuerto que tiene más puntos de conexión. Los datos se obtienen al leer una tabla de datos en formato csv.
El código se probó utulizando el editor de texto en línea Repl.it

## Complejidad del código
El programa usa una única estructura de datos: el vector. Esto nos permite tener la eficiencia de un arreglo pero al mismo tiempo la flexibilidad de la lista. 

#### BFS()
La complejidad temporal de este algoritmo es lineal o O(n+m) donde n es el número de nodos y m el número de arcos; porque, para el peor de los casos, debe de recorrer todos los nodos y todos los arcos.

#### node_with_more_conections()
La complejidad temporal es lineal o O(n) donde n es el número de nodeos. Esto por que a cada nodo va buscando el número de conexiones que tiene y va comparando uno por uno.
