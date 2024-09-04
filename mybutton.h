#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QPushButton>
#include <QPainter>

class MyButton : public QPushButton {
    Q_OBJECT

public:
    explicit MyButton(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;  // 正确使用 override 关键字
};

#endif // MYBUTTON_H
