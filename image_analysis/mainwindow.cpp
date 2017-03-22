#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QGraphicsPixmapItem>
#include <QTransform>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    btnImage = ui->btnImage;
    view = ui->graphicsView;
    ui->graphicsView->showMaximized();
    connect(btnImage, SIGNAL(released()), this, SLOT(handleOpenImage()));
}

void MainWindow::handleOpenImage(){
    auto fileName = QFileDialog::getOpenFileName(this, tr("Open Image"));
     QImage file(fileName);
     QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(file));
     item->update();

     scene->addItem(item);
     view->fitInView(scene->sceneRect());
}

MainWindow::~MainWindow()
{
    delete ui;
}
