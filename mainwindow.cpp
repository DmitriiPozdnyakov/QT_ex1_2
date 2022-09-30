#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtMath>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
    float a = ui->a->text().toFloat();
    float b = ui->b->text().toFloat();
    float ugol = ui->cos->text().toFloat();
    if(ui->grad->isChecked())
    {
//    float result = qSqrt(b*b+a*a-2*b*a*qCos(cos)); здесь просто код для вычисления третьей стороны по формуле
        double result =qCos(qRadiansToDegrees(ugol));// в данной строчке я пытаюсь вычислить косинус в градусах, но всё равно выдаёт неправильное значение
        // double result =qRadiansToDegrees(qCos(ugol)) - данная команда так же выдаёт у меня неправильное значение
    QString s = QString::number(result);
    ui->answerTab->setText(s);
}

}

