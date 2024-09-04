#include <QApplication>
#include <QWidget>
#include "mybutton.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QWidget window;
    window.setFixedSize(400, 300);

    MyButton *button = new MyButton(&window);
    button->setText("Click Me");
    button->setGeometry(150, 100, 100, 50);

    window.show();

    return a.exec();
}
