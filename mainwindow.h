#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    ~MainWindow();
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent *event);
    void refreshPixmap();
private:
    Ui::MainWindow *ui;
    bool pan = false;
    QPixmap pixmap;
    QPointF lastMouseWindowPosition = {0.0, 0.0};
};

#endif // MAINWINDOW_H
