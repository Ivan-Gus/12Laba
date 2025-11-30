# 12Laba

### Условие задачи

5. Напишите программу, которая вычисляет размер основных типов данных в байтах: 5) unsigned char.

### Алгоритм

1. **Начало**

2. Создание массива типа unsigned char.
   
3. Создание указателей:

   `p1` - указатель первого элемента массива.
   
   `p2` - указатель второго элемента массива.

4. Вычисление разницы между указателями:

5. Вывод результата.

6. **Конец**

### Блок-схема
!![Блок-схема алгоритма](Laba11.png)

### 2. Реализация программы

    #include <stdio.h>
    
    #include <stdlib.h>
    
    #include <locale.h>
    
    #include <math.h>
    
    #define _USE_MATH_DEFINES 
    
    #define _CRT_SECURE_NO_DEPRECATE

    int main() {
    
	    setlocale(LC_CTYPE, "RUS");
      
	    unsigned char *p = 0;
      
	    unsigned char array[2];
      
	    unsigned char* p1 = &array[0];
      
	    unsigned char* p2 = &array[1];
      
	    int rez = p2 - p1;
      
	    printf("Размер unsigned char: %d байт\n", rez);

	    return 0;
      
    }

### 3. Результат работы программы

Размер unsigned char: 1 байт

### 4. Информация о разработчике

Гусев Иван бИЦ-252
