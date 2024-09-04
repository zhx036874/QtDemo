#include "mybutton.h"

MyButton::MyButton(QWidget *parent) : QPushButton(parent) {
    // 默认样式
    setStyleSheet("background-color: blue; color: white;");
    setText("Click Me");
}

void MyButton::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);  // 开启抗锯齿

    // 设置按钮背景颜色和边框
    QBrush brush(Qt::blue);
    QPen pen(Qt::white, 2);  // 边框颜色和宽度

    painter.setBrush(brush);
    painter.setPen(pen);

    // 绘制圆角矩形
    QRect rect = this->rect();
    int radius = 15;  // 圆角半径123
    painter.drawRoundedRect(rect, radius, radius);

    // 绘制文本
    painter.setPen(Qt::white);  // 文本颜色
    painter.drawText(rect, Qt::AlignCenter, this->text());
}
