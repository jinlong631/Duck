#ifndef HELLOWORLDWIDGET_H
#define HELLOWORLDWIDGET_H

#include <QWidget>

namespace Ui {
class HelloWorldWidget;
}

class HelloWorldWidget : public QWidget
{
    Q_OBJECT

public:
    explicit HelloWorldWidget(QWidget *parent = nullptr);
    ~HelloWorldWidget();

private:
    Ui::HelloWorldWidget *ui;
};

#endif // HELLOWORLDWIDGET_H
