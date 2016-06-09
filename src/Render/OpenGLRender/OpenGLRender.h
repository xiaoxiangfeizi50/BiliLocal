#pragma once

#include "../ARender.h"

class ASprite;
class OpenGLRenderPrivate;

class OpenGLRender :public ARender
{
public:
	explicit OpenGLRender(QObject *parent = 0);
	virtual void setup() override;

private:
	Q_DECLARE_PRIVATE(OpenGLRender);

public slots:
	virtual ASprite *getSprite() override;
	virtual quintptr getHandle() override;
	virtual void resize(QSize size) override;
	virtual QSize getActualSize() override;
	virtual QSize getBufferSize() override;
	virtual void draw(QRect rect = QRect()) override;
};
