#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H

#include <QImage>
#include <QString>
class ImageViewer
{
public:
    ImageViewer();
    void loadImage(const QString name);
    QImage image;
};

#endif // IMAGEVIEWER_H
