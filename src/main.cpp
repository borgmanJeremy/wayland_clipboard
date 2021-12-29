#include <QDebug>
#include <QClipboard>
#include <QImage>
#include <QGuiApplication>
#include <QMimeData>

int main( int argc, char* argv[]) { 
 
  QGuiApplication  app(argc, argv);
  
  QImage picture("/home/jeremy/github/wayland_clipboard/cat.png");

  if (picture.isNull()){ 
    qDebug() << "Picture is null";
  }

  qDebug() << "size: " << picture.width();

  QClipboard* clipboard = QGuiApplication::clipboard();
  QMimeData *data = new QMimeData;
  data->setImageData(picture);
  clipboard->setMimeData(data, QClipboard::Clipboard);

  app.exec(); 
}


