#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/platinum.ico

convert ../../src/qt/res/icons/platinum-16.png ../../src/qt/res/icons/platinum-32.png ../../src/qt/res/icons/platinum-48.png ${ICON_DST}
