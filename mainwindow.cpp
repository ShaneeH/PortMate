#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "services/memoryservice.h"
#include "services/portservice.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("PortMate");

    resize(900, 600);

    setMinimumSize(650, 450);
    setMaximumSize(900,600);

    memoryservice memory;
    Ram ram = memory.getRam();
    std::cout << ram.totalMem << "\n";
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_label_linkActivated(const QString &link)
{



}

