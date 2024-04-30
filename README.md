1. Данное задание является одной из возможностей получить баллы за проект. Критерии его оценки перечислены ниже. Если вы пишете проект с нуля, без использования какой-либо части/частей этого кода, то ваш проект будет оценен выше. 

Проект нужно собрать в QT-creator.

    1) Создайте QWidjet application

    2) Разместите 2 tableView элемента на форме используя дизайнер, разместите 4 pushButton, textEdit и lineEdit (см form.jpg)

    3) Скопируйте файлы examplemodel.cpp, examplemodel.h, main.cpp, mainwindow.cpp, mainwindow.h, clusters.cpp, clusters.h, readWrite.cpp, readWrite.h, clusters.txt, siluettes.txt в ваш проект как показано в редакторе (см editor.jpg). Файлы вашего проект расположены в некотором каталоге файловой системы. К этому каталогу нужно добавить навые фвйлы (см ProjectFiles.jpg)

    4) Запустите проект

    5) Приложение заполняет 2 таблицы tableView из 2 текстовых файлов clusters.txt и siluettes.txt

    6) При возникновении ошибки invalidPath (см invalidPath.jpg) нужно поменять путь до рабочего каталога, так как он указан неверно. Для этого зайдите во вкладку Проекты (вертикальное меню слева в QT), нажмите Запустить под вашим compiling kit (см ChangePath.jpg)

    7) Замените неправильный путь на правильный путь в котором хранятся файлы вашего проекты (см ChangePath2.jpg).
    
    ![changePath2](https://github.com/marymex/projectTask/blob/master/changePath2.jpg)
  
2. Необходимо реализовать следующие функции:
    1) из readWrite.cpp
     void readpoints(std::ifstream& in, std::vector<mycluster::point>& points)
     void write_clusters(std::string outfilename, std::vector<mycluster::point>& points)
     void write_siluettes(std::string outfilename, std::vector<mycluster::cluster>& clusters)
    2) из cluster.h
     все элементы класса point
    3) из cluster.cpp
     void normalize_column(int ind, vector<point>& points)
     double dist2(const point &a, const point &b)
     double dist(const point &a, const point &b)
    4) из mainwindow.cpp
     разкомментировать все функции с пометкой //  UNCOMMENT ME WHEN FIXED после того, как данные функции реализованы


3. КРИТЕРИИ ОЦЕНИВАНИЯ ДАННОГО ЗАДАНИЯ:

    1) за полностью выполненные пункты 1) - 4) перечисленные ранее вы получаете 15 баллов
    2) дополнительно если в вашей программе присутствует наследование и виртуальная(ые) функции для классов point и cluster а также выполнено требование про использование конструктора модели через QList<QList<QString> >& вы получаете ещё 15 баллов
    3) если в вашей программе есть несколько форм и реализован механизм переключения между ними с использованием слотов и сигналов вы получаете ещё 15 баллов. Инструкция как это сделать вот здесь https://evileg.com/ru/post/112/#header_anotherwindow.h
    4) если в вашей программе logging осуществляется с использованием класса logger (как в задании https://github.com/mgordenko/course_c_plus_23_24/tree/main/2023_2024_2nd_sem/week11/sem_22) вы получаете ещё 15 баллов
    5) если в вашей программе реализовано графическое представление данных (например через GraphicsView или QPainter) вы получаете ещё 15 баллов.
    6) если вы реализовали самостоятельно алгоритмы кластеризации вы можете получить +7 баллов за каждый алгоритм кластеризации.
    7) если вы используете task board при совместной разработки в github вы получаете +5 баллов
    8) если в вашей комманде 4 человека, то ваш итоговый результат по баллам умножается на 0.75.


