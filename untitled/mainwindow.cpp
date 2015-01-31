#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(65);
    ui->tableWidget->verticalHeader()->hide();
    ui->tableWidget->setIconSize(QSize(64,64));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString nameImage=QFileDialog::getOpenFileName(this,"Выберите файл","","*.*");
    if(nameImage.isEmpty())
        return;
    QImage image;
    if(!image.load(nameImage))
        return;
    image=image.scaled(64,64);
    ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,new QTableWidgetItem(QIcon(QPixmap::fromImage(image)),""));
}

void MainWindow::on_pushButton_2_clicked()
{
    if(ui->tableWidget->rowCount()==0)
        return;
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
}
