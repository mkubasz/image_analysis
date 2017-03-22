#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QPushButton>
#include <QImageReader>
#include <QImage>
#include <QGraphicsScene>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void handleOpenImage();
private:
    Ui::MainWindow *ui;
    QGraphicsView *view;
    QPushButton *btnImage;
    QImage image;
    QGraphicsScene *scene;
};

#endif // MAINWINDOW_H
