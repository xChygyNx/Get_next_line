# Get_next_line
Get one line from file, can work with few file descriptors

Задача программы - считать и вывести из Файл дескриптора следующую строку. Причем при смене файл дескриптора до окончания считывания предыдущего не приведет кпотери места, до которого произошло считываение предыдущего.  
Get_next_line возвращает 3 знаения:  
**1** - чтение файл дескриптора прошло успешно, еще остались данные для вывода.  
**0** - чтение файл дескриптора прошло успешно, но в данном дескрипторе больше нет данных для вывода.  
**-1** - чтение данных из файл дескриптора закончилось ошибкой.

### Компиляция
В проекте присутствует Makefile
