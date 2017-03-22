
#include "imageviewer.h"

ImageViewer::ImageViewer()
{

}

void ImageViewer::loadImage(const QString name)
{
    image.load(name);
}
