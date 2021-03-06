  ; ===========================================
  ; gdiplus.inc Creado por Alonso Murillo
  ; ===========================================

GdipAddImageCodec PROTO :DWORD
;GdipAddPathArc  path:DWORD, x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4, startAngle:REAL4, sweepAngle:REAL4
GdipAddPathArc PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathArcI  path:DWORD, x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD, startAngle:REAL4, sweepAngle:REAL4
GdipAddPathArcI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathBezier  path:DWORD, X1:REAL4, Y1:REAL4, X2:REAL4, Y2:REAL4, X3:REAL4, Y3:REAL4, x4:REAL4, y4:REAL4
GdipAddPathBezier PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathBezierI  path:DWORD, X1:DWORD, Y1:DWORD, X2:DWORD, Y2:DWORD, X3:DWORD, Y3:DWORD, x4:DWORD, y4:DWORD
GdipAddPathBezierI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathBeziers  path:DWORD, Points:POINTF, count:DWORD
GdipAddPathBeziers PROTO :DWORD,:DWORD,:DWORD
;GdipAddPathBeziersI  path:DWORD, Points:POINTL, count:DWORD
GdipAddPathBeziersI PROTO :DWORD,:DWORD,:DWORD
;GdipAddPathClosedCurve  path:DWORD, Points:POINTF, count:DWORD
GdipAddPathClosedCurve PROTO :DWORD,:DWORD,:DWORD
;GdipAddPathClosedCurve2  path:DWORD, Points:POINTF, count:DWORD, tension:REAL4
GdipAddPathClosedCurve2 PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathClosedCurve2I  path:DWORD, Points:POINTL, count:DWORD, tension:REAL4
GdipAddPathClosedCurve2I PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathClosedCurveI  path:DWORD, Points:POINTL, count:DWORD
GdipAddPathClosedCurveI PROTO :DWORD,:DWORD,:DWORD
;GdipAddPathCurve  path:DWORD, Points:POINTF, count:DWORD
GdipAddPathCurve PROTO :DWORD,:DWORD,:DWORD
;GdipAddPathCurve2  path:DWORD, Points:POINTF, count:DWORD, tension:REAL4
GdipAddPathCurve2 PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathCurve2I  path:DWORD, Points:POINTL, count:DWORD, tension:DWORD
GdipAddPathCurve2I PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathCurve3  path:DWORD, Points:POINTF, count:DWORD, Offset:DWORD, numberOfSegments:DWORD, tension:REAL4
GdipAddPathCurve3 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathCurve3I  path:DWORD, Points:POINTL, count:DWORD, Offset:DWORD, numberOfSegments:DWORD, tension:REAL4
GdipAddPathCurve3I PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathCurveI  path:DWORD, Points:POINTL, count:DWORD
GdipAddPathCurveI PROTO :DWORD,:DWORD,:DWORD
;GdipAddPathEllipse  path:DWORD, x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4
GdipAddPathEllipse PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathEllipseI  path:DWORD, x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD
GdipAddPathEllipseI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathLine  path:DWORD, X1:REAL4, Y1:REAL4, X2:REAL4, Y2:REAL4
GdipAddPathLine PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathLine2  path:DWORD, Points:POINTF, count:DWORD
GdipAddPathLine2 PROTO :DWORD,:DWORD,:DWORD
;GdipAddPathLine2I  path:DWORD, Points:POINTL, count:DWORD
GdipAddPathLine2I PROTO :DWORD,:DWORD,:DWORD
;GdipAddPathLineI  path:DWORD, X1:DWORD, Y1:DWORD, X2:DWORD, Y2:DWORD
GdipAddPathLineI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathPath  path:DWORD, addingPath:DWORD, bConnect:DWORD
GdipAddPathPath PROTO :DWORD,:DWORD,:DWORD
;GdipAddPathPie  path:DWORD, x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4, startAngle:REAL4, sweepAngle:REAL4
GdipAddPathPie PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathPieI  path:DWORD, x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD, startAngle:REAL4, sweepAngle:REAL4
GdipAddPathPieI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathPolygon  path:DWORD, Points:POINTF, count:DWORD
GdipAddPathPolygon PROTO :DWORD,:DWORD,:DWORD
;GdipAddPathPolygonI  path:DWORD, Points:POINTL, count:DWORD
GdipAddPathPolygonI PROTO :DWORD,:DWORD,:DWORD
;GdipAddPathRectangle  path:DWORD, x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4
GdipAddPathRectangle PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathRectangleI  path:DWORD, x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD
GdipAddPathRectangleI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathRectangles  path:DWORD, RECT:RECTF, count:DWORD
GdipAddPathRectangles PROTO :DWORD,:DWORD,:DWORD
;GdipAddPathRectanglesI  path:DWORD, rects:RECTL, count:DWORD
GdipAddPathRectanglesI PROTO :DWORD,:DWORD,:DWORD
;GdipAddPathString  path:DWORD, str:String, Length:DWORD, family:DWORD, Style:DWORD, emSize:REAL4, layoutRect:RECTF, StringFormat:DWORD
GdipAddPathString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipAddPathStringI  path:DWORD, str:String, Length:DWORD, family:DWORD, Style:DWORD, emSize:REAL4, layoutRect:RECTL, StringFormat:DWORD
GdipAddPathStringI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipAlloc  SIZE:DWORD
GdipAlloc PROTO :DWORD
;GdipBeginContainer  graphics:DWORD, dstrect:RECTF, srcRect:RECTF, unit:GpUnit, State:DWORD
GdipBeginContainer PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipBeginContainer2  graphics:DWORD, State:DWORD
GdipBeginContainer2 PROTO :DWORD,:DWORD
;GdipBeginContainerI  graphics:DWORD, dstrect:RECTL, srcRect:RECTL, unit:GpUnit, State:DWORD
GdipBeginContainerI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipBitmapGetPixel  bitmap:DWORD, x:DWORD, Y:DWORD, Color:DWORD
GdipBitmapGetPixel PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipBitmapLockBits  bitmap:DWORD, RECT:RECTL, Flags:ImageLockMode, PixelFormat:DWORD, lockedBitmapData:BitmapData
GdipBitmapLockBits PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipBitmapSetPixel  bitmap:DWORD, x:DWORD, Y:DWORD, Color:DWORD
GdipBitmapSetPixel PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipBitmapSetResolution  bitmap:DWORD, xdpi:REAL4, ydpi:REAL4
GdipBitmapSetResolution PROTO :DWORD,:DWORD,:DWORD
;GdipBitmapUnlockBits  bitmap:DWORD, lockedBitmapData:BitmapData
GdipBitmapUnlockBits PROTO :DWORD,:DWORD
;GdipClearPathMarkers  path:DWORD
GdipClearPathMarkers PROTO :DWORD
;GdipCloneBitmapArea  x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4, PixelFormat:DWORD, srcBitmap:DWORD, dstBitmap:DWORD
GdipCloneBitmapArea PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipCloneBitmapAreaI  x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD, PixelFormat:DWORD, srcBitmap:DWORD, dstBitmap:DWORD
GdipCloneBitmapAreaI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipCloneBrush  brush:DWORD, cloneBrush:DWORD
GdipCloneBrush PROTO :DWORD,:DWORD
;GdipCloneCustomLineCap  customCap:DWORD, clonedCap:DWORD
GdipCloneCustomLineCap PROTO :DWORD,:DWORD
;GdipCloneFont  curFont:DWORD, cloneFont:DWORD
GdipCloneFont PROTO :DWORD,:DWORD
;GdipCloneFontFamily  fontFamily:DWORD, clonedFontFamily:DWORD
GdipCloneFontFamily PROTO :DWORD,:DWORD
;GdipCloneImage  image:DWORD, cloneImage:DWORD
GdipCloneImage PROTO :DWORD,:DWORD
;GdipCloneImageAttributes  imageattr:DWORD, cloneImageattr:DWORD
GdipCloneImageAttributes PROTO :DWORD,:DWORD
;GdipCloneMatrix  matrix:DWORD, cloneMatrix:DWORD
GdipCloneMatrix PROTO :DWORD,:DWORD
;GdipClonePath  path:DWORD, clonePath:DWORD
GdipClonePath PROTO :DWORD,:DWORD
;GdipClonePen  pen:DWORD, clonepen:DWORD
GdipClonePen PROTO :DWORD,:DWORD
;GdipCloneRegion  region:DWORD, cloneRegion:DWORD
GdipCloneRegion PROTO :DWORD,:DWORD
;GdipCloneStringFormat  StringFormat:DWORD, newFormat:DWORD
GdipCloneStringFormat PROTO :DWORD,:DWORD
;GdipClosePathFigure  path:DWORD
GdipClosePathFigure PROTO :DWORD
;GdipClosePathFigures  path:DWORD
GdipClosePathFigures PROTO :DWORD
;GdipCombineRegionPath  region:DWORD, path:DWORD, CombineMd:CombineMode
GdipCombineRegionPath PROTO :DWORD,:DWORD,:DWORD
;GdipCombineRegionRect  region:DWORD, RECT:RECTF, CombineMd:CombineMode
GdipCombineRegionRect PROTO :DWORD,:DWORD,:DWORD
;GdipCombineRegionRectI  region:DWORD, RECT:RECTF, CombineMd:CombineMode
GdipCombineRegionRectI PROTO :DWORD,:DWORD,:DWORD
;GdipCombineRegionRegion  region:DWORD, region2:DWORD, CombineMd:CombineMode
GdipCombineRegionRegion PROTO :DWORD,:DWORD,:DWORD
;GdipComment  graphics:DWORD, sizeData:DWORD, data:Any
GdipComment PROTO :DWORD,:DWORD,:DWORD
;GdipCreateAdjustableArrowCap  Height:REAL4, Width:REAL4, isFilled:DWORD, cap:DWORD
GdipCreateAdjustableArrowCap PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateBitmapFromDirectDrawSurface  surface:DirectDrawSurface7, bitmap:DWORD
GdipCreateBitmapFromDirectDrawSurface PROTO :DWORD,:DWORD
;GdipCreateBitmapFromFile  Filename:DWORD, bitmap:DWORD
GdipCreateBitmapFromFile PROTO :DWORD,:DWORD
;GdipCreateBitmapFromFileICM  Filename:DWORD, bitmap:DWORD
GdipCreateBitmapFromFileICM PROTO :DWORD,:DWORD
;GdipCreateBitmapFromGdiDib  gdiBitmapInfo:BITMAPINFO, gdiBitmapData:DWORD, bitmap:DWORD
GdipCreateBitmapFromGdiDib PROTO :DWORD,:DWORD,:DWORD
;GdipCreateBitmapFromGraphics  Width:DWORD, Height:DWORD, graphics:DWORD, bitmap:DWORD
GdipCreateBitmapFromGraphics PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateBitmapFromHBITMAP  hbm:DWORD, hpal:DWORD, bitmap:DWORD
GdipCreateBitmapFromHBITMAP PROTO :DWORD,:DWORD,:DWORD
;GdipCreateBitmapFromHICON  hicon:DWORD, bitmap:DWORD
GdipCreateBitmapFromHICON PROTO :DWORD,:DWORD
;GdipCreateBitmapFromResource  hInstance:DWORD, lpBitmapName:String, bitmap:DWORD
GdipCreateBitmapFromResource PROTO :DWORD,:DWORD,:DWORD
;GdipCreateBitmapFromScan0  Width:DWORD, Height:DWORD, stride:DWORD, PixelFormat:DWORD, scan0:Any, bitmap:DWORD
GdipCreateBitmapFromScan0 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateBitmapFromStream  stream:IStream, bitmap:DWORD
GdipCreateBitmapFromStream PROTO :DWORD,:DWORD
;GdipCreateBitmapFromStreamICM  stream:IStream, bitmap:DWORD
GdipCreateBitmapFromStreamICM PROTO :DWORD,:DWORD
;GdipCreateCachedBitmap  bitmap:DWORD, graphics:DWORD, cachedBitmap:DWORD
GdipCreateCachedBitmap PROTO :DWORD,:DWORD,:DWORD
;GdipCreateCustomLineCap  fillPath:DWORD, strokePath:DWORD, baseCap:LineCap, baseInset:REAL4, customCap:DWORD
GdipCreateCustomLineCap PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateFont  fontFamily:DWORD, emSize:REAL4, Style:FontStyle, unit:GpUnit, createdfont:DWORD
GdipCreateFont PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateFontFamilyFromName  name:String, fontCollection:DWORD, fontFamily:DWORD
GdipCreateFontFamilyFromName PROTO :DWORD,:DWORD,:DWORD
;GdipCreateFontFromDC  hdc:DWORD, createdfont:DWORD
GdipCreateFontFromDC PROTO :DWORD,:DWORD
GdipCreateFontFromLogfont equ <GdipCreateFontFromLogfontA>
;GdipCreateFontFromLogfontA  hdc:DWORD, logfont:LOGFONTA, createdfont:DWORD
GdipCreateFontFromLogfontA PROTO :DWORD,:DWORD,:DWORD
;GdipCreateFontFromLogfontW  hdc:DWORD, logfont:LOGFONTW, createdfont:DWORD
GdipCreateFontFromLogfontW PROTO :DWORD,:DWORD,:DWORD
;GdipCreateFromHDC  hdc:DWORD, graphics:DWORD
GdipCreateFromHDC PROTO :DWORD,:DWORD
GdipCreateFromHDC2 PROTO :DWORD,:DWORD,:DWORD
;GdipCreateFromHWND  hwnd:DWORD, graphics:DWORD
GdipCreateFromHWND PROTO :DWORD,:DWORD
;GdipCreateFromHWNDICM  hwnd:DWORD, graphics:DWORD
GdipCreateFromHWNDICM PROTO :DWORD,:DWORD
;GdipCreateHalftonePalette  :DWORD
GdipCreateHalftonePalette PROTO 
;GdipCreateHatchBrush  Style:HatchStyle, forecolr:DWORD, backcolr:DWORD, brush:DWORD
GdipCreateHatchBrush PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateHBITMAPFromBitmap  bitmap:DWORD, hbmReturn:DWORD, background:DWORD
GdipCreateHBITMAPFromBitmap PROTO :DWORD,:DWORD,:DWORD
;GdipCreateHICONFromBitmap  bitmap:DWORD, hbmReturn:DWORD
GdipCreateHICONFromBitmap PROTO :DWORD,:DWORD
;GdipCreateImageAttributes  imageattr:DWORD
GdipCreateImageAttributes PROTO :DWORD
;GdipCreateLineBrush  point1:POINTF, point2:POINTF, color1:DWORD, color2:DWORD, WrapMd:WrapMode, lineGradient:DWORD
GdipCreateLineBrush PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateLineBrushFromRect  RECT:RECTF, color1:DWORD, color2:DWORD, Mode:LinearGradientMode, WrapMd:WrapMode, lineGradient:DWORD
GdipCreateLineBrushFromRect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateLineBrushFromRectI  RECT:RECTL, color1:DWORD, color2:DWORD, Mode:LinearGradientMode, WrapMd:WrapMode, lineGradient:DWORD
GdipCreateLineBrushFromRectI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateLineBrushFromRectWithAngle  RECT:RECTF, color1:DWORD, color2:DWORD, angle:REAL4, isAngleScalable:DWORD, WrapMd:WrapMode, lineGradient:DWORD
GdipCreateLineBrushFromRectWithAngle PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateLineBrushFromRectWithAngleI  RECT:RECTL, color1:DWORD, color2:DWORD, angle:REAL4, isAngleScalable:DWORD, WrapMd:WrapMode, lineGradient:DWORD
GdipCreateLineBrushFromRectWithAngleI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateLineBrushI  point1:POINTL, point2:POINTL, color1:DWORD, color2:DWORD, WrapMd:WrapMode, lineGradient:DWORD
GdipCreateLineBrushI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateMatrix  matrix:DWORD
GdipCreateMatrix PROTO :DWORD
;GdipCreateMatrix2  m11:REAL4, m12:REAL4, m21:REAL4, m22:REAL4, dx:REAL4, dy:REAL4, matrix:DWORD
GdipCreateMatrix2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateMatrix3  RECT:RECTF, dstplg:POINTF, matrix:DWORD
GdipCreateMatrix3 PROTO :DWORD,:DWORD,:DWORD
;GdipCreateMatrix3I  RECT:RECTL, dstplg:POINTL, matrix:DWORD
GdipCreateMatrix3I PROTO :DWORD,:DWORD,:DWORD
;GdipCreateMetafileFromEmf  hEmf:DWORD, bDeleteEmf:DWORD, metafile:DWORD
GdipCreateMetafileFromEmf PROTO :DWORD,:DWORD,:DWORD
;GdipCreateMetafileFromFile  byvalfile:String, metafile:DWORD
GdipCreateMetafileFromFile PROTO :DWORD,:DWORD
;GdipCreateMetafileFromStream  stream:IStream, metafile:DWORD
GdipCreateMetafileFromStream PROTO :DWORD,:DWORD
;GdipCreateMetafileFromWmf  hWmf:DWORD, bDeleteWmf:DWORD, WmfPlaceableFileHdr:WmfPlaceableFileHeader, metafile:DWORD
GdipCreateMetafileFromWmf PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateMetafileFromWmfFile  file:String, WmfPlaceableFileHdr:WmfPlaceableFileHeader, metafile:DWORD
GdipCreateMetafileFromWmfFile PROTO :DWORD,:DWORD,:DWORD
;GdipCreatePath  brushmode:FillMode, path:DWORD
GdipCreatePath PROTO :DWORD,:DWORD
;GdipCreatePath2  Points:POINTF, types:Any, count:DWORD, brushmode:FillMode, path:DWORD
GdipCreatePath2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipCreatePath2I  Points:POINTL, types:Any, count:DWORD, brushmode:FillMode, path:DWORD
GdipCreatePath2I PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipCreatePathGradient  Points:POINTF, count:DWORD, WrapMd:WrapMode, polyGradient:DWORD
GdipCreatePathGradient PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipCreatePathGradientFromPath  path:DWORD, polyGradient:DWORD
GdipCreatePathGradientFromPath PROTO :DWORD,:DWORD
;GdipCreatePathGradientI  Points:POINTL, count:DWORD, WrapMd:WrapMode, polyGradient:DWORD
GdipCreatePathGradientI PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipCreatePathIter  iterator:DWORD, path:DWORD
GdipCreatePathIter PROTO :DWORD,:DWORD
;GdipCreatePen1  Color:DWORD, Width:REAL4, unit:GpUnit, pen:DWORD
GdipCreatePen1 PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipCreatePen2  brush:DWORD, Width:REAL4, unit:GpUnit, pen:DWORD
GdipCreatePen2 PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateRegion  region:DWORD
GdipCreateRegion PROTO :DWORD
;GdipCreateRegionHrgn  hRgn:DWORD, region:DWORD
GdipCreateRegionHrgn PROTO :DWORD,:DWORD
;GdipCreateRegionPath  path:DWORD, region:DWORD
GdipCreateRegionPath PROTO :DWORD,:DWORD
;GdipCreateRegionRect  RECT:RECTF, region:DWORD
GdipCreateRegionRect PROTO :DWORD,:DWORD
;GdipCreateRegionRectI  RECT:RECTL, region:DWORD
GdipCreateRegionRectI PROTO :DWORD,:DWORD
;GdipCreateRegionRgnData  regionData:Any, SIZE:DWORD, region:DWORD
GdipCreateRegionRgnData PROTO :DWORD,:DWORD,:DWORD
;GdipCreateSolidFill  argb:DWORD, brush:DWORD
GdipCreateSolidFill PROTO :DWORD,:DWORD
;GdipCreateStreamOnFile  filename:String, access:DWORD, stream:IStream
GdipCreateStreamOnFile PROTO :DWORD,:DWORD,:DWORD
;GdipCreateStringFormat  formatAttributes:DWORD, language:Integer, StringFormat:DWORD
GdipCreateStringFormat PROTO :DWORD,:DWORD,:DWORD
;GdipCreateTexture  image:DWORD, WrapMd:WrapMode, texture:DWORD
GdipCreateTexture PROTO :DWORD,:DWORD,:DWORD
;GdipCreateTexture2  image:DWORD, WrapMd:WrapMode, x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4, texture:DWORD
GdipCreateTexture2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateTexture2I  image:DWORD, WrapMd:WrapMode, x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD, texture:DWORD
GdipCreateTexture2I PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateTextureI equ <GdipCreateTextureIA>
;GdipCreateTextureIA  image:DWORD, imageAttributes:DWORD, x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4, texture:DWORD
GdipCreateTextureIA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipCreateTextureIAI  image:DWORD, imageAttributes:DWORD, x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD, texture:DWORD
GdipCreateTextureIAI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDeleteBrush  brush:DWORD
GdipDeleteBrush PROTO :DWORD
;GdipDeleteCachedBitmap  cachedBitmap:DWORD
GdipDeleteCachedBitmap PROTO :DWORD
;GdipDeleteCustomLineCap  customCap:DWORD
GdipDeleteCustomLineCap PROTO :DWORD
;GdipDeleteFont  curFont:DWORD
GdipDeleteFont PROTO :DWORD
;GdipDeleteFontFamily  fontFamily:DWORD
GdipDeleteFontFamily PROTO :DWORD
;GdipDeleteGraphics  graphics:DWORD
GdipDeleteGraphics PROTO :DWORD
;GdipDeleteMatrix  matrix:DWORD
GdipDeleteMatrix PROTO :DWORD
;GdipDeletePath  path:DWORD
GdipDeletePath PROTO :DWORD
;GdipDeletePathIter  iterator:DWORD
GdipDeletePathIter PROTO :DWORD
;GdipDeletePen  pen:DWORD
GdipDeletePen PROTO :DWORD
;GdipDeletePrivateFontCollection  fontCollection:DWORD
GdipDeletePrivateFontCollection PROTO :DWORD
;GdipDeleteRegion  region:DWORD
GdipDeleteRegion PROTO :DWORD
;GdipDeleteStringFormat  StringFormat:DWORD
GdipDeleteStringFormat PROTO :DWORD
;GdipDisposeImage  image:DWORD
GdipDisposeImage PROTO :DWORD
;GdipDisposeImageAttributes  imageattr:DWORD
GdipDisposeImageAttributes PROTO :DWORD
;GdipDrawArc  graphics:DWORD, pen:DWORD, x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4, startAngle:REAL4, sweepAngle:REAL4
GdipDrawArc PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawArcI  graphics:DWORD, pen:DWORD, x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD, startAngle:REAL4, sweepAngle:REAL4
GdipDrawArcI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawBezier  graphics:DWORD, pen:DWORD, X1:REAL4, Y1:REAL4, X2:REAL4, Y2:REAL4, X3:REAL4, Y3:REAL4, x4:REAL4, y4:REAL4
GdipDrawBezier PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawBezierI  graphics:DWORD, pen:DWORD, X1:DWORD, Y1:DWORD, X2:DWORD, Y2:DWORD, X3:DWORD, Y3:DWORD, x4:DWORD, y4:DWORD
GdipDrawBezierI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawBeziers  graphics:DWORD, pen:DWORD, Points:POINTF, count:DWORD
GdipDrawBeziers PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawBeziersI  graphics:DWORD, pen:DWORD, Points:POINTL, count:DWORD
GdipDrawBeziersI PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawCachedBitmap  graphics:DWORD, cachedBitmap:DWORD, x:DWORD, Y:DWORD
GdipDrawCachedBitmap PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawClosedCurve  graphics:DWORD, pen:DWORD, Points:POINTF, count:DWORD
GdipDrawClosedCurve PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawClosedCurve2  graphics:DWORD, pen:DWORD, Points:POINTF, count:DWORD, tension:REAL4
GdipDrawClosedCurve2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawClosedCurve2I  graphics:DWORD, pen:DWORD, Points:POINTL, count:DWORD, tension:REAL4
GdipDrawClosedCurve2I PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawClosedCurveI  graphics:DWORD, pen:DWORD, Points:POINTL, count:DWORD
GdipDrawClosedCurveI PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawCurve  graphics:DWORD, pen:DWORD, Points:POINTF, count:DWORD
GdipDrawCurve PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawCurve2  graphics:DWORD, pen:DWORD, Points:POINTF, count:DWORD, tension:REAL4
GdipDrawCurve2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawCurve2I  graphics:DWORD, pen:DWORD, Points:POINTL, count:DWORD, tension:REAL4
GdipDrawCurve2I PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawCurve3  graphics:DWORD, pen:DWORD, Points:POINTF, count:DWORD, Offset:DWORD, numberOfSegments:DWORD, tension:REAL4
GdipDrawCurve3 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawCurve3I  graphics:DWORD, pen:DWORD, Points:POINTL, count:DWORD, Offset:DWORD, numberOfSegments:DWORD, tension:REAL4
GdipDrawCurve3I PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawCurveI  graphics:DWORD, pen:DWORD, Points:POINTL, count:DWORD
GdipDrawCurveI PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawDriverString  graphics:DWORD, str:String, Length:DWORD, thefont:DWORD, brush:DWORD, positions:POINTF, Flags:DWORD, matrix:DWORD
GdipDrawDriverString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawEllipse  graphics:DWORD, pen:DWORD, x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4
GdipDrawEllipse PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawEllipseI  graphics:DWORD, pen:DWORD, x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD
GdipDrawEllipseI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawImage  graphics:DWORD, image:DWORD, x:REAL4, Y:REAL4
GdipDrawImage PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawImageI  graphics:DWORD, image:DWORD, x:DWORD, Y:DWORD
GdipDrawImageI PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawImagePointRect  graphics:DWORD, image:DWORD, x:REAL4, Y:REAL4, srcx:REAL4, srcy:REAL4, srcwidth:REAL4, srcheight:REAL4, srcUnit:GpUnit
GdipDrawImagePointRect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawImagePointRectI  graphics:DWORD, image:DWORD, x:DWORD, Y:DWORD, srcx:DWORD, srcy:DWORD, srcwidth:DWORD, srcheight:DWORD, srcUnit:GpUnit
GdipDrawImagePointRectI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawImagePoints  graphics:DWORD, image:DWORD, dstpoints:POINTF, count:DWORD
GdipDrawImagePoints PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawImagePointsI  graphics:DWORD, image:DWORD, dstpoints:POINTL, count:DWORD
GdipDrawImagePointsI PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawImagePointsRect  graphics:DWORD, image:DWORD, Points:POINTF, count:DWORD, srcx:REAL4, srcy:REAL4, srcwidth:REAL4, srcheight:REAL4, srcUnit:GpUnit, Optional imageAttributes:DWORD = 0, Optional callback:DWORD = 0, Optional callbackData:DWORD = 0
GdipDrawImagePointsRect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawImagePointsRectI  graphics:DWORD, image:DWORD, Points:POINTL, count:DWORD, srcx:DWORD, srcy:DWORD, srcwidth:DWORD, srcheight:DWORD, srcUnit:GpUnit, Optional imageAttributes:DWORD = 0, Optional callback:DWORD = 0, Optional callbackData:DWORD = 0
GdipDrawImagePointsRectI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawImageRect  graphics:DWORD, image:DWORD, x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4
GdipDrawImageRect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawImageRectI  graphics:DWORD, image:DWORD, x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD
GdipDrawImageRectI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawImageRectRect  graphics:DWORD, image:DWORD, dstx:REAL4, dsty:REAL4, dstwidth:DWORD, dstheight:REAL4, srcx:REAL4, srcy:REAL4, srcwidth:REAL4, srcheight:REAL4, srcUnit:GpUnit, Optional imageAttributes:DWORD = 0, Optional callback:DWORD = 0, Optional callbackData:DWORD = 0
GdipDrawImageRectRect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawImageRectRectI  graphics:DWORD, image:DWORD, dstx:DWORD, dsty:DWORD, dstwidth:DWORD, dstheight:DWORD, srcx:DWORD, srcy:DWORD, srcwidth:DWORD, srcheight:DWORD, srcUnit:GpUnit, Optional imageAttributes:DWORD = 0, Optional callback:DWORD = 0, Optional callbackData:DWORD = 0
GdipDrawImageRectRectI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawLine  graphics:DWORD, pen:DWORD, X1:REAL4, Y1:REAL4, X2:REAL4, Y2:REAL4
GdipDrawLine PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawLineI  graphics:DWORD, pen:DWORD, X1:DWORD, Y1:DWORD, X2:DWORD, Y2:DWORD
GdipDrawLineI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawLines  graphics:DWORD, pen:DWORD, Points:POINTF, count:DWORD
GdipDrawLines PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawLinesI  graphics:DWORD, pen:DWORD, Points:POINTL, count:DWORD
GdipDrawLinesI PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawPath  graphics:DWORD, pen:DWORD, path:DWORD
GdipDrawPath PROTO :DWORD,:DWORD,:DWORD
;GdipDrawPie  graphics:DWORD, pen:DWORD, x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4, startAngle:REAL4, sweepAngle:REAL4
GdipDrawPie PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawPieI  graphics:DWORD, pen:DWORD, x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD, startAngle:REAL4, sweepAngle:REAL4
GdipDrawPieI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawPolygon  graphics:DWORD, pen:DWORD, Points:POINTF, count:DWORD
GdipDrawPolygon PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawPolygonI  graphics:DWORD, pen:DWORD, Points:POINTL, count:DWORD
GdipDrawPolygonI PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawRectangle  graphics:DWORD, pen:DWORD, x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4
GdipDrawRectangle PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawRectangleI  graphics:DWORD, pen:DWORD, x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD
GdipDrawRectangleI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawRectangles  graphics:DWORD, pen:DWORD, rects:RECTF, count:DWORD
GdipDrawRectangles PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawRectanglesI  graphics:DWORD, pen:DWORD, rects:RECTL, count:DWORD
GdipDrawRectanglesI PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipDrawString  graphics:DWORD, str:String, Length:DWORD, thefont:DWORD, layoutRect:RECTF, StringFormat:DWORD, brush:DWORD
GdipDrawString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GdipEmfToWmfBits PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipEndContainer  graphics:DWORD, State:DWORD
GdipEndContainer PROTO :DWORD,:DWORD
;GdipEnumerateMetafileDestPoint  graphics:DWORD, metafile:DWORD, destPoint:POINTF, lpEnumerateMetafileProc:DWORD, callbackData:DWORD, imageAttributes:DWORD
GdipEnumerateMetafileDestPoint PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipEnumerateMetafileDestPointI  graphics:DWORD, metafile:DWORD, destPoint:POINTL, lpEnumerateMetafileProc:DWORD, callbackData:DWORD, imageAttributes:DWORD
GdipEnumerateMetafileDestPointI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipEnumerateMetafileDestPoints  graphics:DWORD, metafile:DWORD, destPoint:POINTF, count:DWORD, lpEnumerateMetafileProc:DWORD, callbackData:DWORD, imageAttributes:DWORD
GdipEnumerateMetafileDestPoints PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipEnumerateMetafileDestPointsI  graphics:DWORD, metafile:DWORD, destPoint:POINTL, count:DWORD, lpEnumerateMetafileProc:DWORD, callbackData:DWORD, imageAttributes:DWORD
GdipEnumerateMetafileDestPointsI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipEnumerateMetafileDestRect  graphics:DWORD, metafile:DWORD, destRect:RECTF, lpEnumerateMetafileProc:DWORD, callbackData:DWORD, imageAttributes:DWORD
GdipEnumerateMetafileDestRect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipEnumerateMetafileDestRectI  graphics:DWORD, metafile:DWORD, destRect:RECTL, lpEnumerateMetafileProc:DWORD, callbackData:DWORD, imageAttributes:DWORD
GdipEnumerateMetafileDestRectI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipEnumerateMetafileSrcRectDestPoint  graphics:DWORD, metafile:DWORD, destPoint:POINTF, srcRect:RECTF, srcUnit:GpUnit, lpEnumerateMetafileProc:DWORD, callbackData:DWORD, imageAttributes:DWORD
GdipEnumerateMetafileSrcRectDestPoint PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipEnumerateMetafileSrcRectDestPointI  graphics:DWORD, metafile:DWORD, destPoint:POINTL, srcRect:RECTL, srcUnit:GpUnit, lpEnumerateMetafileProc:DWORD, callbackData:DWORD, imageAttributes:DWORD
GdipEnumerateMetafileSrcRectDestPointI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipEnumerateMetafileSrcRectDestPoints  graphics:DWORD, metafile:DWORD, destPoints:POINTF, count:DWORD, srcRect:RECTF, srcUnit:GpUnit, lpEnumerateMetafileProc:DWORD, callbackData:DWORD, imageAttributes:DWORD
GdipEnumerateMetafileSrcRectDestPoints PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipEnumerateMetafileSrcRectDestPointsI  graphics:DWORD, metafile:DWORD, destPoints:POINTL, count:DWORD, srcRect:RECTL, srcUnit:GpUnit, lpEnumerateMetafileProc:DWORD, callbackData:DWORD, imageAttributes:DWORD
GdipEnumerateMetafileSrcRectDestPointsI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipEnumerateMetafileSrcRectDestRect  graphics:DWORD, metafile:DWORD, destRect:RECTF, srcRect:RECTF, srcUnit:GpUnit, lpEnumerateMetafileProc:DWORD, callbackData:DWORD, imageAttributes:DWORD
GdipEnumerateMetafileSrcRectDestRect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipEnumerateMetafileSrcRectDestRectI  graphics:DWORD, metafile:DWORD, destRect:RECTL, srcRect:RECTL, srcUnit:GpUnit, lpEnumerateMetafileProc:DWORD, callbackData:DWORD, imageAttributes:DWORD
GdipEnumerateMetafileSrcRectDestRectI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipFillClosedCurve  graphics:DWORD, brush:DWORD, Points:POINTF, count:DWORD
GdipFillClosedCurve PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipFillClosedCurve2  graphics:DWORD, brush:DWORD, Points:POINTF, count:DWORD, tension:REAL4, FillMd:FillMode
GdipFillClosedCurve2 PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipFillClosedCurve2I  graphics:DWORD, brush:DWORD, Points:POINTL, count:DWORD, tension:REAL4, FillMd:FillMode
GdipFillClosedCurve2I PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipFillClosedCurveI  graphics:DWORD, brush:DWORD, Points:POINTL, count:DWORD
GdipFillClosedCurveI PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipFillEllipse  graphics:DWORD, brush:DWORD, x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4
GdipFillEllipse PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipFillEllipseI  graphics:DWORD, brush:DWORD, x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD
GdipFillEllipseI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipFillPath  graphics:DWORD, brush:DWORD, path:DWORD
GdipFillPath PROTO :DWORD,:DWORD,:DWORD
;GdipFillPie  graphics:DWORD, brush:DWORD, x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4, startAngle:REAL4, sweepAngle:REAL4
GdipFillPie PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipFillPieI  graphics:DWORD, brush:DWORD, x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD, startAngle:REAL4, sweepAngle:REAL4
GdipFillPieI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipFillPolygon  graphics:DWORD, brush:DWORD, Points:POINTF, count:DWORD, FillMd:FillMode
GdipFillPolygon PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipFillPolygon2  graphics:DWORD, brush:DWORD, Points:POINTF, count:DWORD
GdipFillPolygon2 PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipFillPolygon2I  graphics:DWORD, brush:DWORD, Points:POINTL, count:DWORD
GdipFillPolygon2I PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipFillPolygonI  graphics:DWORD, brush:DWORD, Points:POINTL, count:DWORD, FillMd:FillMode
GdipFillPolygonI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipFillRectangle  graphics:DWORD, brush:DWORD, x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4
GdipFillRectangle PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipFillRectangleI  graphics:DWORD, brush:DWORD, x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD
GdipFillRectangleI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipFillRectangles  graphics:DWORD, brush:DWORD, rects:RECTF, count:DWORD
GdipFillRectangles PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipFillRectanglesI  graphics:DWORD, brush:DWORD, rects:RECTL, count:DWORD
GdipFillRectanglesI PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipFillRegion  graphics:DWORD, brush:DWORD, region:DWORD
GdipFillRegion PROTO :DWORD,:DWORD,:DWORD
;GdipFlattenPath  path:DWORD, Optional matrix:DWORD = 0, Optional flatness:REAL4 = FlatnessDefault
GdipFlattenPath PROTO :DWORD,:DWORD,:DWORD
;GdipFlush  graphics:DWORD, intention:FlushIntention
GdipFlush PROTO :DWORD,:DWORD
;GdipFontCollectionEnumerable  fontCollection:DWORD, graphics:DWORD, numFound:DWORD

;GdipFontCollectionEnumerate  fontCollection:DWORD, numSought:DWORD, gpfamilies:DWORD, numFound:DWORD, graphics:DWORD

;GdipFree  ptr:DWORD
GdipFree PROTO :DWORD
;GdipGetAdjustableArrowCapFillState  cap:DWORD, bFillState:DWORD
GdipGetAdjustableArrowCapFillState PROTO :DWORD,:DWORD
;GdipGetAdjustableArrowCapHeight  cap:DWORD, Height:REAL4
GdipGetAdjustableArrowCapHeight PROTO :DWORD,:DWORD
;GdipGetAdjustableArrowCapMiddleInset  cap:DWORD, middleInset:REAL4
GdipGetAdjustableArrowCapMiddleInset PROTO :DWORD,:DWORD
;GdipGetAdjustableArrowCapWidth  cap:DWORD, Width:REAL4
GdipGetAdjustableArrowCapWidth PROTO :DWORD,:DWORD
;GdipGetAllPropertyItems  image:DWORD, totalBufferSize:DWORD, numProperties:DWORD, allItems:PropertyItem
GdipGetAllPropertyItems PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipGetBrushType  brush:DWORD, brshType:BrushType
GdipGetBrushType PROTO :DWORD,:DWORD
;GdipGetCellAscent  family:DWORD, Style:DWORD, CellAscent:Integer
GdipGetCellAscent PROTO :DWORD,:DWORD,:DWORD
;GdipGetCellDescent  family:DWORD, Style:DWORD, CellDescent:Integer
GdipGetCellDescent PROTO :DWORD,:DWORD,:DWORD
;GdipGetClip  graphics:DWORD, region:DWORD
GdipGetClip PROTO :DWORD,:DWORD
;GdipGetClipBounds  graphics:DWORD, RECT:RECTF
GdipGetClipBounds PROTO :DWORD,:DWORD
;GdipGetClipBoundsI  graphics:DWORD, RECT:RECTL
GdipGetClipBoundsI PROTO :DWORD,:DWORD
;GdipGetCompositingMode  graphics:DWORD, CompositingMd:CompositingMode
GdipGetCompositingMode PROTO :DWORD,:DWORD
;GdipGetCompositingQuality  graphics:DWORD, CompositingQlty:CompositingQuality
GdipGetCompositingQuality PROTO :DWORD,:DWORD
;GdipGetCustomLineCapBaseCap  customCap:DWORD, baseCap:LineCap
GdipGetCustomLineCapBaseCap PROTO :DWORD,:DWORD
;GdipGetCustomLineCapBaseInset  customCap:DWORD, inset:REAL4
GdipGetCustomLineCapBaseInset PROTO :DWORD,:DWORD
;GdipGetCustomLineCapStrokeCaps  customCap:DWORD, startCap:LineCap, endCap:LineCap
GdipGetCustomLineCapStrokeCaps PROTO :DWORD,:DWORD,:DWORD
;GdipGetCustomLineCapStrokeJoin  customCap:DWORD, LnJoin:LineJoin
GdipGetCustomLineCapStrokeJoin PROTO :DWORD,:DWORD
;GdipGetCustomLineCapType  customCap:DWORD, capType:CustomLineCapType
GdipGetCustomLineCapType PROTO :DWORD,:DWORD
;GdipGetCustomLineCapWidthScale  customCap:DWORD, widthScale:REAL4
GdipGetCustomLineCapWidthScale PROTO :DWORD,:DWORD
;GdipGetDC  graphics:DWORD, hdc:DWORD
GdipGetDC PROTO :DWORD,:DWORD
;GdipGetDpiX  graphics:DWORD, dpi:REAL4
GdipGetDpiX PROTO :DWORD,:DWORD
;GdipGetDpiY  graphics:DWORD, dpi:REAL4
GdipGetDpiY PROTO :DWORD,:DWORD
;GdipGetEmHeight  family:DWORD, Style:DWORD, EmHeight:Integer
GdipGetEmHeight PROTO :DWORD,:DWORD,:DWORD
;GdipGetEncoderParameterList  image:DWORD, clsidEncoder:CLSID, SIZE:DWORD, buffer:EncoderParameters
GdipGetEncoderParameterList PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipGetEncoderParameterListSize  image:DWORD, clsidEncoder:CLSID, SIZE:DWORD
GdipGetEncoderParameterListSize PROTO :DWORD,:DWORD,:DWORD
;GdipGetFamily  curFont:DWORD, family:DWORD
GdipGetFamily PROTO :DWORD,:DWORD
;GdipGetFamilyName  family:DWORD, name:String, language:Integer
GdipGetFamilyName PROTO :DWORD,:DWORD,:DWORD
;GdipGetFontCollectionFamilyCount  fontCollection:DWORD, numFound:DWORD
GdipGetFontCollectionFamilyCount PROTO :DWORD,:DWORD
;GdipGetFontCollectionFamilyList  fontCollection:DWORD, numSought:DWORD, gpfamilies:DWORD, numFound:DWORD
GdipGetFontCollectionFamilyList PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipGetFontHeight  curFont:DWORD, graphics:DWORD, Height:REAL4
GdipGetFontHeight PROTO :DWORD,:DWORD,:DWORD
;GdipGetFontHeightGivenDPI  curFont:DWORD, dpi:REAL4, Height:REAL4
GdipGetFontHeightGivenDPI PROTO :DWORD,:DWORD,:DWORD
;GdipGetFontSize  curFont:DWORD, SIZE:REAL4
GdipGetFontSize PROTO :DWORD,:DWORD
;GdipGetFontStyle  curFont:DWORD, Style:DWORD
GdipGetFontStyle PROTO :DWORD,:DWORD
;GdipGetFontUnit  curFont:DWORD, unit:GpUnit
GdipGetFontUnit PROTO :DWORD,:DWORD
;GdipGetGenericFontFamilyMonospace  nativeFamily:DWORD
GdipGetGenericFontFamilyMonospace PROTO :DWORD
;GdipGetGenericFontFamilySansSerif  nativeFamily:DWORD
GdipGetGenericFontFamilySansSerif PROTO :DWORD
;GdipGetGenericFontFamilySerif  nativeFamily:DWORD
GdipGetGenericFontFamilySerif PROTO :DWORD

GdipGetGraphicsLayout PROTO :DWORD,:DWORD
;GdipGetHatchBackgroundColor  brush:DWORD, backcolr:DWORD
GdipGetHatchBackgroundColor PROTO :DWORD,:DWORD
;GdipGetHatchForegroundColor  brush:DWORD, forecolr:DWORD
GdipGetHatchForegroundColor PROTO :DWORD,:DWORD
;GdipGetHatchStyle  brush:DWORD, Style:HatchStyle
GdipGetHatchStyle PROTO :DWORD,:DWORD
;GdipGetHemfFromMetafile  metafile:DWORD, hEmf:DWORD
GdipGetHemfFromMetafile PROTO :DWORD,:DWORD
;GdipGetImageAttributesAdjustedPalette  imageattr:DWORD, colorPal:ColorPalette, ClrAdjType:ColorAdjustType
GdipGetImageAttributesAdjustedPalette PROTO :DWORD,:DWORD,:DWORD
;GdipGetImageBounds  image:DWORD, srcRect:RECTF, srcUnit:GpUnit
GdipGetImageBounds PROTO :DWORD,:DWORD,:DWORD
;GdipGetImageDecoders  numDecoders:DWORD, SIZE:DWORD, decoders:Any
GdipGetImageDecoders PROTO :DWORD,:DWORD,:DWORD
;GdipGetImageDecodersSize  numDecoders:DWORD, SIZE:DWORD
GdipGetImageDecodersSize PROTO :DWORD,:DWORD
;GdipGetImageDimension  image:DWORD, Width:REAL4, Height:REAL4
GdipGetImageDimension PROTO :DWORD,:DWORD,:DWORD
;GdipGetImageEncoders  numEncoders:DWORD, SIZE:DWORD, encoders:Any
GdipGetImageEncoders PROTO :DWORD,:DWORD,:DWORD
;GdipGetImageEncodersSize  numEncoders:DWORD, SIZE:DWORD
GdipGetImageEncodersSize PROTO :DWORD,:DWORD
;GdipGetImageFlags  image:DWORD, Flags:DWORD
GdipGetImageFlags PROTO :DWORD,:DWORD
;GdipGetImageGraphicsContext  image:DWORD, graphics:DWORD
GdipGetImageGraphicsContext PROTO :DWORD,:DWORD
;GdipGetImageHeight  image:DWORD, Height:DWORD
GdipGetImageHeight PROTO :DWORD,:DWORD
;GdipGetImageHorizontalResolution  image:DWORD, resolution:REAL4
GdipGetImageHorizontalResolution PROTO :DWORD,:DWORD

GdipGetImageLayout PROTO :DWORD,:DWORD
;GdipGetImagePalette  image:DWORD, palette:ColorPalette, SIZE:DWORD
GdipGetImagePalette PROTO :DWORD,:DWORD,:DWORD
;GdipGetImagePaletteSize  image:DWORD, SIZE:DWORD
GdipGetImagePaletteSize PROTO :DWORD,:DWORD
;GdipGetImagePixelFormat  image:DWORD, PixelFormat:DWORD
GdipGetImagePixelFormat PROTO :DWORD,:DWORD
;GdipGetImageRawFormat  image:DWORD, format:CLSID
GdipGetImageRawFormat PROTO :DWORD,:DWORD
;GdipGetImageThumbnail  image:DWORD, thumbWidth:DWORD, thumbHeight:DWORD, thumbImage:DWORD, Optional callback:DWORD = 0, Optional callbackData:DWORD = 0
GdipGetImageThumbnail PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipGetImageType  image:DWORD, itype:ImageType
GdipGetImageType PROTO :DWORD,:DWORD
;GdipGetImageVerticalResolution  image:DWORD, resolution:REAL4
GdipGetImageVerticalResolution PROTO :DWORD,:DWORD
;GdipGetImageWidth  image:DWORD, Width:DWORD
GdipGetImageWidth PROTO :DWORD,:DWORD
;GdipGetInterpolationMode  graphics:DWORD, interpolation:InterpolationMode
GdipGetInterpolationMode PROTO :DWORD,:DWORD
;GdipGetLineBlend  brush:DWORD, blend:REAL4, positions:REAL4, count:DWORD
GdipGetLineBlend PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipGetLineBlendCount  brush:DWORD, count:DWORD
GdipGetLineBlendCount PROTO :DWORD,:DWORD
;GdipGetLineColors  brush:DWORD, lColors:DWORD
GdipGetLineColors PROTO :DWORD,:DWORD
;GdipGetLineGammaCorrection  brush:DWORD, useGammaCorrection:DWORD
GdipGetLineGammaCorrection PROTO :DWORD,:DWORD

GdipGetLinePoints PROTO :DWORD,:DWORD

GdipGetLinePointsI PROTO :DWORD,:DWORD
;GdipGetLinePresetBlend  brush:DWORD, blend:DWORD, positions:REAL4, count:DWORD
GdipGetLinePresetBlend PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipGetLinePresetBlendCount  brush:DWORD, count:DWORD
GdipGetLinePresetBlendCount PROTO :DWORD,:DWORD
;GdipGetLineRect  brush:DWORD, RECT:RECTF
GdipGetLineRect PROTO :DWORD,:DWORD
;GdipGetLineRectI  brush:DWORD, RECT:RECTL
GdipGetLineRectI PROTO :DWORD,:DWORD
;GdipGetLineSpacing  family:DWORD, Style:DWORD, LineSpacing:Integer
GdipGetLineSpacing PROTO :DWORD,:DWORD,:DWORD
;GdipGetLineTransform  brush:DWORD, matrix:DWORD
GdipGetLineTransform PROTO :DWORD,:DWORD
;GdipGetLineWrapMode  brush:DWORD, WrapMd:WrapMode
GdipGetLineWrapMode PROTO :DWORD,:DWORD

GdipGetLogFont equ <GdipGetLogFontA>
;GdipGetLogFontA  curFont:DWORD, graphics:DWORD, logfont:LOGFONTA
GdipGetLogFontA PROTO :DWORD,:DWORD,:DWORD
;GdipGetLogFontW  curFont:DWORD, graphics:DWORD, logfont:LOGFONTW
GdipGetLogFontW PROTO :DWORD,:DWORD,:DWORD
;GdipGetMatrixElements  matrix:DWORD, matrixOut:REAL4
GdipGetMatrixElements PROTO :DWORD,:DWORD
;GdipGetMetafileDownLevelRasterizationLimit  metafile:DWORD, metafileRasterizationLimitDpi:DWORD
GdipGetMetafileDownLevelRasterizationLimit PROTO :DWORD,:DWORD
;GdipGetMetafileHeaderFromEmf  hEmf:DWORD, header:MetafileHeader
GdipGetMetafileHeaderFromEmf PROTO :DWORD,:DWORD
;GdipGetMetafileHeaderFromFile  Filename:String, header:MetafileHeader
GdipGetMetafileHeaderFromFile PROTO :DWORD,:DWORD
;GdipGetMetafileHeaderFromMetafile  metafile:DWORD, header:MetafileHeader
GdipGetMetafileHeaderFromMetafile PROTO :DWORD,:DWORD
;GdipGetMetafileHeaderFromStream  stream:IStream, header:MetafileHeader
GdipGetMetafileHeaderFromStream PROTO :DWORD,:DWORD
;GdipGetMetafileHeaderFromWmf  hWmf:DWORD, WmfPlaceableFileHdr:WmfPlaceableFileHeader, header:MetafileHeader
GdipGetMetafileHeaderFromWmf PROTO :DWORD,:DWORD,:DWORD
;GdipGetNearestColor  graphics:DWORD, argb:DWORD
GdipGetNearestColor PROTO :DWORD,:DWORD
;GdipGetPageScale  graphics:DWORD, sscale:REAL4
GdipGetPageScale PROTO :DWORD,:DWORD
;GdipGetPageUnit  graphics:DWORD, unit:GpUnit
GdipGetPageUnit PROTO :DWORD,:DWORD
;GdipGetPathData  path:DWORD, pdata:PathData
GdipGetPathData PROTO :DWORD,:DWORD
;GdipGetPathFillMode  path:DWORD, brushmode:FillMode
GdipGetPathFillMode PROTO :DWORD,:DWORD
;GdipGetPathGradientBlend  brush:DWORD, blend:REAL4, positions:REAL4, count:DWORD
GdipGetPathGradientBlend PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipGetPathGradientBlendCount  brush:DWORD, count:DWORD
GdipGetPathGradientBlendCount PROTO :DWORD,:DWORD
;GdipGetPathGradientCenterColor  brush:DWORD, lColors:DWORD
GdipGetPathGradientCenterColor PROTO :DWORD,:DWORD
;GdipGetPathGradientCenterPoint  brush:DWORD, Points:POINTF
GdipGetPathGradientCenterPoint PROTO :DWORD,:DWORD
;GdipGetPathGradientCenterPointI  brush:DWORD, Points:POINTL
GdipGetPathGradientCenterPointI PROTO :DWORD,:DWORD
;GdipGetPathGradientFocusScales  brush:DWORD, xScale:REAL4, yScale:REAL4
GdipGetPathGradientFocusScales PROTO :DWORD,:DWORD,:DWORD
;GdipGetPathGradientGammaCorrection  brush:DWORD, useGammaCorrection:DWORD
GdipGetPathGradientGammaCorrection PROTO :DWORD,:DWORD
;GdipGetPathGradientPath  brush:DWORD, path:DWORD
GdipGetPathGradientPath PROTO :DWORD,:DWORD
;GdipGetPathGradientPointCount  brush:DWORD, count:DWORD
GdipGetPathGradientPointCount PROTO :DWORD,:DWORD
;GdipGetPathGradientPresetBlend  brush:DWORD, blend:DWORD, positions:REAL4, count:DWORD
GdipGetPathGradientPresetBlend PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipGetPathGradientPresetBlendCount  brush:DWORD, count:DWORD
GdipGetPathGradientPresetBlendCount PROTO :DWORD,:DWORD
;GdipGetPathGradientRect  brush:DWORD, RECT:RECTF
GdipGetPathGradientRect PROTO :DWORD,:DWORD
;GdipGetPathGradientRectI  brush:DWORD, RECT:RECTL
GdipGetPathGradientRectI PROTO :DWORD,:DWORD
;GdipGetPathGradientSurroundColorCount  brush:DWORD, count:DWORD
GdipGetPathGradientSurroundColorCount PROTO :DWORD,:DWORD
;GdipGetPathGradientSurroundColorsWithCount  brush:DWORD, argb:DWORD, count:DWORD
GdipGetPathGradientSurroundColorsWithCount PROTO :DWORD,:DWORD,:DWORD
;GdipGetPathGradientTransform  brush:DWORD, matrix:DWORD
GdipGetPathGradientTransform PROTO :DWORD,:DWORD
;GdipGetPathGradientWrapMode  brush:DWORD, WrapMd:WrapMode
GdipGetPathGradientWrapMode PROTO :DWORD,:DWORD
;GdipGetPathLastPoint  path:DWORD, lastPoint:POINTF
GdipGetPathLastPoint PROTO :DWORD,:DWORD
;GdipGetPathPoints  path:DWORD, Points:POINTF, count:DWORD
GdipGetPathPoints PROTO :DWORD,:DWORD,:DWORD
;GdipGetPathPointsI  path:DWORD, Points:POINTL, count:DWORD
GdipGetPathPointsI PROTO :DWORD,:DWORD,:DWORD
;GdipGetPathTypes  path:DWORD, types:Any, count:DWORD
GdipGetPathTypes PROTO :DWORD,:DWORD,:DWORD
;GdipGetPathWorldBounds  path:DWORD, bounds:RECTF, matrix:DWORD, pen:DWORD
GdipGetPathWorldBounds PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipGetPathWorldBoundsI  path:DWORD, bounds:RECTL, matrix:DWORD, pen:DWORD
GdipGetPathWorldBoundsI PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipGetPenBrushFill  pen:DWORD, brush:DWORD
GdipGetPenBrushFill PROTO :DWORD,:DWORD
;GdipGetPenColor  pen:DWORD, argb:DWORD
GdipGetPenColor PROTO :DWORD,:DWORD
;GdipGetPenCompoundArray  pen:DWORD, dash:REAL4, count:DWORD
GdipGetPenCompoundArray PROTO :DWORD,:DWORD,:DWORD
;GdipGetPenCompoundCount  pen:DWORD, count:DWORD
GdipGetPenCompoundCount PROTO :DWORD,:DWORD
;GdipGetPenCustomEndCap  pen:DWORD, customCap:DWORD
GdipGetPenCustomEndCap PROTO :DWORD,:DWORD
;GdipGetPenCustomStartCap  pen:DWORD, customCap:DWORD
GdipGetPenCustomStartCap PROTO :DWORD,:DWORD
;GdipGetPenDashArray  pen:DWORD, dash:REAL4, count:DWORD
GdipGetPenDashArray PROTO :DWORD,:DWORD,:DWORD
;GdipGetPenDashCap  pen:DWORD, dcap:DashCap
GdipGetPenDashCap197819 PROTO :DWORD,:DWORD
;GdipGetPenDashCount  pen:DWORD, count:DWORD
GdipGetPenDashCount PROTO :DWORD,:DWORD
;GdipGetPenDashOffset  pen:DWORD, Offset:REAL4
GdipGetPenDashOffset PROTO :DWORD,:DWORD
;GdipGetPenDashStyle  pen:DWORD, dStyle:DashStyle
GdipGetPenDashStyle PROTO :DWORD,:DWORD
;GdipGetPenEndCap  pen:DWORD, endCap:LineCap
GdipGetPenEndCap PROTO :DWORD,:DWORD
;GdipGetPenFillType  pen:DWORD, ptype:PenType
GdipGetPenFillType PROTO :DWORD,:DWORD
;GdipGetPenLineJoin  pen:DWORD, LnJoin:LineJoin
GdipGetPenLineJoin PROTO :DWORD,:DWORD
;GdipGetPenMiterLimit  pen:DWORD, miterLimit:REAL4
GdipGetPenMiterLimit PROTO :DWORD,:DWORD
;GdipGetPenMode  pen:DWORD, penMode:PenAlignment
GdipGetPenMode PROTO :DWORD,:DWORD
;GdipGetPenStartCap  pen:DWORD, startCap:LineCap
GdipGetPenStartCap PROTO :DWORD,:DWORD
;GdipGetPenTransform  pen:DWORD, matrix:DWORD
GdipGetPenTransform PROTO :DWORD,:DWORD
;GdipGetPenUnit  pen:DWORD, unit:GpUnit
GdipGetPenUnit PROTO :DWORD,:DWORD
;GdipGetPenWidth  pen:DWORD, Width:REAL4
GdipGetPenWidth PROTO :DWORD,:DWORD
;GdipGetPixelOffsetMode  graphics:DWORD, PixOffsetMode:PixelOffsetMode
GdipGetPixelOffsetMode PROTO :DWORD,:DWORD
;GdipGetPointCount  path:DWORD, count:DWORD
GdipGetPointCount PROTO :DWORD,:DWORD
;GdipGetPropertyCount  image:DWORD, numOfProperty:DWORD
GdipGetPropertyCount PROTO :DWORD,:DWORD
;GdipGetPropertyIdList  image:DWORD, numOfProperty:DWORD, list:DWORD
GdipGetPropertyIdList PROTO :DWORD,:DWORD,:DWORD
;GdipGetPropertyItem  image:DWORD, propId:DWORD, propSize:DWORD, buffer:PropertyItem
GdipGetPropertyItem PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipGetPropertyItemSize  image:DWORD, propId:DWORD, SIZE:DWORD
GdipGetPropertyItemSize PROTO :DWORD,:DWORD,:DWORD
;GdipGetPropertySize  image:DWORD, totalBufferSize:DWORD, numProperties:DWORD
GdipGetPropertySize PROTO :DWORD,:DWORD,:DWORD
;GdipGetRegionBounds  region:DWORD, graphics:DWORD, RECT:RECTF
GdipGetRegionBounds PROTO :DWORD,:DWORD,:DWORD
;GdipGetRegionBoundsI  region:DWORD, graphics:DWORD, RECT:RECTL
GdipGetRegionBoundsI PROTO :DWORD,:DWORD,:DWORD
;GdipGetRegionData  region:DWORD, buffer:Any, bufferSize:DWORD, sizeFilled:DWORD
GdipGetRegionData PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipGetRegionDataSize  region:DWORD, bufferSize:DWORD
GdipGetRegionDataSize PROTO :DWORD,:DWORD
;GdipGetRegionHRgn  region:DWORD, graphics:DWORD, hRgn:DWORD
GdipGetRegionHRgn PROTO :DWORD,:DWORD,:DWORD
;GdipGetRegionScans  region:DWORD, rects:RECTF, count:DWORD, matrix:DWORD
GdipGetRegionScans PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipGetRegionScansCount  region:DWORD, Ucount:DWORD, matrix:DWORD
GdipGetRegionScansCount PROTO :DWORD,:DWORD,:DWORD
;GdipGetRegionScansI  region:DWORD, rects:RECTL, count:DWORD, matrix:DWORD
GdipGetRegionScansI PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipGetRenderingOrigin  graphics:DWORD, x:DWORD, Y:DWORD
GdipGetRenderingOrigin PROTO :DWORD,:DWORD,:DWORD
;GdipGetSmoothingMode  graphics:DWORD, SmoothingMd:SmoothingMode
GdipGetSmoothingMode PROTO :DWORD,:DWORD
;GdipGetSolidFillColor  brush:DWORD, argb:DWORD
GdipGetSolidFillColor PROTO :DWORD,:DWORD
;GdipGetStringFormatAlign  StringFormat:DWORD, align:StringAlignment
GdipGetStringFormatAlign PROTO :DWORD,:DWORD
;GdipGetStringFormatDigitSubstitution  StringFormat:DWORD, language:Integer, substitute:StringDigitSubstitute
GdipGetStringFormatDigitSubstitution PROTO :DWORD,:DWORD,:DWORD
;GdipGetStringFormatFlags  StringFormat:DWORD, Flags:DWORD
GdipGetStringFormatFlags PROTO :DWORD,:DWORD
;GdipGetStringFormatHotkeyPrefix  StringFormat:DWORD, hkPrefix:HotkeyPrefix
GdipGetStringFormatHotkeyPrefix PROTO :DWORD,:DWORD
;GdipGetStringFormatLineAlign  StringFormat:DWORD, align:StringAlignment
GdipGetStringFormatLineAlign PROTO :DWORD,:DWORD
;GdipGetStringFormatMeasurableCharacterRangeCount  StringFormat:DWORD, count:DWORD
GdipGetStringFormatMeasurableCharacterRangeCount PROTO :DWORD,:DWORD
;GdipGetStringFormatTabStopCount  StringFormat:DWORD, count:DWORD
GdipGetStringFormatTabStopCount PROTO :DWORD,:DWORD
;GdipGetStringFormatTabStops  StringFormat:DWORD, count:DWORD, firstTabOffset:REAL4, tabStops:REAL4
GdipGetStringFormatTabStops PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipGetStringFormatTrimming  StringFormat:DWORD, trimming:DWORD
GdipGetStringFormatTrimming PROTO :DWORD,:DWORD
;GdipGetTextContrast  graphics:DWORD, contrast:DWORD
GdipGetTextContrast PROTO :DWORD,:DWORD
;GdipGetTextRenderingHint  graphics:DWORD, Mode:TextRenderingHint
GdipGetTextRenderingHint PROTO :DWORD,:DWORD
;GdipGetTextureImage  brush:DWORD, image:DWORD
GdipGetTextureImage PROTO :DWORD,:DWORD
;GdipGetTextureTransform  brush:DWORD, matrix:DWORD
GdipGetTextureTransform PROTO :DWORD,:DWORD
;GdipGetTextureWrapMode  brush:DWORD, WrapMd:WrapMode
GdipGetTextureWrapMode PROTO :DWORD,:DWORD
;GdipGetVisibleClipBounds  graphics:DWORD, RECT:RECTF
GdipGetVisibleClipBounds PROTO :DWORD,:DWORD
;GdipGetVisibleClipBoundsI  graphics:DWORD, RECT:RECTL
GdipGetVisibleClipBoundsI PROTO :DWORD,:DWORD
;GdipGetWorldTransform  graphics:DWORD, matrix:DWORD
GdipGetWorldTransform PROTO :DWORD,:DWORD
;GdipGraphicsClear  graphics:DWORD, lcolor:DWORD
GdipGraphicsClear PROTO :DWORD,:DWORD
;GdipImageForceValidation  image:DWORD
GdipImageForceValidation PROTO :DWORD
;GdipImageGetFrameCount  image:DWORD, dimensionID:CLSID, count:DWORD
GdipImageGetFrameCount PROTO :DWORD,:DWORD,:DWORD
;GdipImageGetFrameDimensionsCount  image:DWORD, count:DWORD
GdipImageGetFrameDimensionsCount PROTO :DWORD,:DWORD
;GdipImageGetFrameDimensionsList  image:DWORD, dimensionIDs:CLSID, count:DWORD
GdipImageGetFrameDimensionsList PROTO :DWORD,:DWORD,:DWORD
;GdipImageRotateFlip  image:DWORD, rfType:RotateFlipType
GdipImageRotateFlip PROTO :DWORD,:DWORD
;GdipImageSelectActiveFrame  image:DWORD, dimensionID:CLSID, frameIndex:DWORD
GdipImageSelectActiveFrame PROTO :DWORD,:DWORD,:DWORD
;GdipInvertMatrix  matrix:DWORD
GdipInvertMatrix PROTO :DWORD
;GdipIsClipEmpty  graphics:DWORD, result:DWORD
GdipIsClipEmpty PROTO :DWORD,:DWORD
;GdipIsEmptyRegion  region:DWORD, graphics:DWORD, result:DWORD
GdipIsEmptyRegion PROTO :DWORD,:DWORD,:DWORD
;GdipIsEqualRegion  region:DWORD, region2:DWORD, graphics:DWORD, result:DWORD
GdipIsEqualRegion PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipIsInfiniteRegion  region:DWORD, graphics:DWORD, result:DWORD
GdipIsInfiniteRegion PROTO :DWORD,:DWORD,:DWORD
;GdipIsMatrixEqual  matrix:DWORD, matrix2:DWORD, result:DWORD
GdipIsMatrixEqual PROTO :DWORD,:DWORD,:DWORD
;GdipIsMatrixIdentity  matrix:DWORD, result:DWORD
GdipIsMatrixIdentity PROTO :DWORD,:DWORD
;GdipIsMatrixInvertible  matrix:DWORD, result:DWORD
GdipIsMatrixInvertible PROTO :DWORD,:DWORD
;GdipIsOutlineVisiblePathPoint  path:DWORD, x:REAL4, Y:REAL4, pen:DWORD, graphics:DWORD, result:DWORD
GdipIsOutlineVisiblePathPoint PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipIsOutlineVisiblePathPointI  path:DWORD, x:DWORD, Y:DWORD, pen:DWORD, graphics:DWORD, result:DWORD
GdipIsOutlineVisiblePathPointI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipIsStyleAvailable  family:DWORD, Style:DWORD, IsStyleAvailable:DWORD
GdipIsStyleAvailable PROTO :DWORD,:DWORD,:DWORD
;GdipIsVisibleClipEmpty  graphics:DWORD, result:DWORD
GdipIsVisibleClipEmpty PROTO :DWORD,:DWORD
;GdipIsVisiblePathPoint  path:DWORD, x:REAL4, Y:REAL4, graphics:DWORD, result:DWORD
GdipIsVisiblePathPoint PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipIsVisiblePathPointI  path:DWORD, x:DWORD, Y:DWORD, graphics:DWORD, result:DWORD
GdipIsVisiblePathPointI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipIsVisiblePoint  graphics:DWORD, x:REAL4, Y:REAL4, result:DWORD
GdipIsVisiblePoint PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipIsVisiblePointI  graphics:DWORD, x:DWORD, Y:DWORD, result:DWORD
GdipIsVisiblePointI PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipIsVisibleRect  graphics:DWORD, x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4, result:DWORD
GdipIsVisibleRect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipIsVisibleRectI  graphics:DWORD, x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD, result:DWORD
GdipIsVisibleRectI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipIsVisibleRegionPoint  region:DWORD, x:REAL4, Y:REAL4, graphics:DWORD, result:DWORD
GdipIsVisibleRegionPoint PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipIsVisibleRegionPointI  region:DWORD, x:DWORD, Y:DWORD, graphics:DWORD, result:DWORD
GdipIsVisibleRegionPointI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipIsVisibleRegionRect  region:DWORD, x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4, graphics:DWORD, result:DWORD
GdipIsVisibleRegionRect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipIsVisibleRegionRectI  region:DWORD, x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD, graphics:DWORD, result:DWORD
GdipIsVisibleRegionRectI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipLoadImageFromFile  Filename:String, image:DWORD
GdipLoadImageFromFile PROTO :DWORD,:DWORD
;GdipLoadImageFromFileICM  Filename:String, image:DWORD
GdipLoadImageFromFileICM PROTO :DWORD,:DWORD
;GdipLoadImageFromStream  stream:IStream, image:DWORD
GdipLoadImageFromStream PROTO :DWORD,:DWORD
;GdipLoadImageFromStreamICM  stream:IStream, image:DWORD
GdipLoadImageFromStreamICM PROTO :DWORD,:DWORD

GdiplusNotificationHook PROTO :DWORD

GdiplusNotificationUnhook PROTO :DWORD
;GdiplusShutdown  token:DWORD
GdiplusShutdown PROTO :DWORD
;GdiplusStartup  token:DWORD, inputbuf:GdiplusStartupInput, Optional outputbuf:DWORD = 0
GdiplusStartup PROTO :DWORD,:DWORD,:DWORD
;GdipMeasureCharacterRanges  graphics:DWORD, str:String, Length:DWORD, thefont:DWORD, layoutRect:RECTF, StringFormat:DWORD, regionCount:DWORD, regions:DWORD
GdipMeasureCharacterRanges PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipMeasureDriverString  graphics:DWORD, str:String, Length:DWORD, thefont:DWORD, positions:POINTF, Flags:DWORD, matrix:DWORD, boundingBox:RECTF
GdipMeasureDriverString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipMeasureString  graphics:DWORD, str:String, Length:DWORD, thefont:DWORD, layoutRect:RECTF, StringFormat:DWORD, boundingBox:RECTF, codepointsFitted:DWORD, linesFilled:DWORD
GdipMeasureString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipMultiplyLineTransform  brush:DWORD, matrix:DWORD, order:MatrixOrder
GdipMultiplyLineTransform PROTO :DWORD,:DWORD,:DWORD
;GdipMultiplyMatrix  matrix:DWORD, matrix2:DWORD, order:MatrixOrder
GdipMultiplyMatrix PROTO :DWORD,:DWORD,:DWORD
;GdipMultiplyPathGradientTransform  brush:DWORD, matrix:DWORD, order:MatrixOrder
GdipMultiplyPathGradientTransform PROTO :DWORD,:DWORD,:DWORD
;GdipMultiplyPenTransform  pen:DWORD, matrix:DWORD, order:MatrixOrder
GdipMultiplyPenTransform PROTO :DWORD,:DWORD,:DWORD
;GdipMultiplyTextureTransform  brush:DWORD, matrix:DWORD, order:MatrixOrder
GdipMultiplyTextureTransform PROTO :DWORD,:DWORD,:DWORD
;GdipMultiplyWorldTransform  graphics:DWORD, matrix:DWORD, order:MatrixOrder
GdipMultiplyWorldTransform PROTO :DWORD,:DWORD,:DWORD
;GdipNewInstalledFontCollection  fontCollection:DWORD
GdipNewInstalledFontCollection PROTO :DWORD
;GdipNewPrivateFontCollection  fontCollection:DWORD
GdipNewPrivateFontCollection PROTO :DWORD
;GdipPathIterCopyData  iterator:DWORD, resultCount:DWORD, Points:POINTF, types:Any, startIndex:DWORD, endIndex:DWORD
GdipPathIterCopyData PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipPathIterEnumerate  iterator:DWORD, resultCount:DWORD, Points:POINTF, types:Any, count:DWORD
GdipPathIterEnumerate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipPathIterGetCount  iterator:DWORD, count:DWORD
GdipPathIterGetCount PROTO :DWORD,:DWORD
;GdipPathIterGetSubpathCount  iterator:DWORD, count:DWORD
GdipPathIterGetSubpathCount PROTO :DWORD,:DWORD
;GdipPathIterHasCurve  iterator:DWORD, hasCurve:DWORD
GdipPathIterHasCurve PROTO :DWORD,:DWORD
;GdipPathIterIsValid  iterator:DWORD, valid:DWORD
GdipPathIterIsValid PROTO :DWORD,:DWORD
;GdipPathIterNextMarker  iterator:DWORD, resultCount:DWORD, startIndex:DWORD, endIndex:DWORD
GdipPathIterNextMarker PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipPathIterNextMarkerPath  iterator:DWORD, resultCount:DWORD, path:DWORD
GdipPathIterNextMarkerPath PROTO :DWORD,:DWORD,:DWORD
;GdipPathIterNextPathType  iterator:DWORD, resultCount:DWORD, pathType:Any, startIndex:DWORD, endIndex:DWORD
GdipPathIterNextPathType PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipPathIterNextSubpath  iterator:DWORD, resultCount:DWORD, startIndex:DWORD, endIndex:DWORD, isClosed:DWORD
GdipPathIterNextSubpath PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipPathIterNextSubpathPath  iterator:DWORD, resultCount:DWORD, path:DWORD, isClosed:DWORD
GdipPathIterNextSubpathPath PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipPathIterRewind  iterator:DWORD
GdipPathIterRewind PROTO :DWORD
;GdipPlayMetafileRecord  metafile:DWORD, recordType:EmfPlusRecordType, Flags:DWORD, dataSize:DWORD, byteData:Any
GdipPlayMetafileRecord PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipPrivateAddFontFile  fontCollection:DWORD, Filename:String
GdipPrivateAddFontFile PROTO :DWORD,:DWORD
;GdipPrivateAddMemoryFont  fontCollection:DWORD, memory:DWORD, Length:DWORD
GdipPrivateAddMemoryFont PROTO :DWORD,:DWORD,:DWORD
;GdipRecordMetafile  referenceHdc:DWORD, etype:EmfType, frameRect:RECTF, frameUnit:MetafileFrameUnit, description:String, metafile:DWORD
GdipRecordMetafile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipRecordMetafileFileName  Filename:String, referenceHdc:DWORD, etype:EmfType, frameRect:RECTF, frameUnit:MetafileFrameUnit, description:String, metafile:DWORD
GdipRecordMetafileFileName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipRecordMetafileFileNameI  Filename:String, referenceHdc:DWORD, etype:EmfType, frameRect:RECTL, frameUnit:MetafileFrameUnit, description:String, metafile:DWORD
GdipRecordMetafileFileNameI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipRecordMetafileI  referenceHdc:DWORD, etype:EmfType, frameRect:RECTL, frameUnit:MetafileFrameUnit, description:String, metafile:DWORD
GdipRecordMetafileI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipRecordMetafileStream  stream:IStream, referenceHdc:DWORD, etype:EmfType, frameRect:RECTF, frameUnit:MetafileFrameUnit, description:String, metafile:DWORD
GdipRecordMetafileStream PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipRecordMetafileStreamI  stream:IStream, referenceHdc:DWORD, etype:EmfType, frameRect:RECTL, frameUnit:MetafileFrameUnit, description:String, metafile:DWORD
GdipRecordMetafileStreamI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipReleaseDC  graphics:DWORD, hdc:DWORD
GdipReleaseDC PROTO :DWORD,:DWORD

GdipRemoveImageCodec PROTO :DWORD
;GdipRemovePropertyItem  image:DWORD, propId:DWORD
GdipRemovePropertyItem PROTO :DWORD,:DWORD
;GdipResetClip  graphics:DWORD
GdipResetClip PROTO :DWORD
;GdipResetImageAttributes  imageattr:DWORD, ClrAdjType:ColorAdjustType
GdipResetImageAttributes PROTO :DWORD,:DWORD
;GdipResetLineTransform  brush:DWORD
GdipResetLineTransform PROTO :DWORD
;GdipResetPageTransform  graphics:DWORD
GdipResetPageTransform PROTO :DWORD
;GdipResetPath  path:DWORD
GdipResetPath PROTO :DWORD
;GdipResetPathGradientTransform  brush:DWORD
GdipResetPathGradientTransform PROTO :DWORD
;GdipResetPenTransform  pen:DWORD
GdipResetPenTransform PROTO :DWORD
;GdipResetTextureTransform  brush:DWORD
GdipResetTextureTransform PROTO :DWORD
;GdipResetWorldTransform  graphics:DWORD
GdipResetWorldTransform PROTO :DWORD
;GdipRestoreGraphics  graphics:DWORD, State:DWORD
GdipRestoreGraphics PROTO :DWORD,:DWORD
;GdipReversePath  path:DWORD
GdipReversePath PROTO :DWORD
;GdipRotateLineTransform  brush:DWORD, angle:REAL4, order:MatrixOrder
GdipRotateLineTransform PROTO :DWORD,:DWORD,:DWORD
;GdipRotateMatrix  matrix:DWORD, angle:REAL4, order:MatrixOrder
GdipRotateMatrix PROTO :DWORD,:DWORD,:DWORD
;GdipRotatePathGradientTransform  brush:DWORD, angle:REAL4, order:MatrixOrder
GdipRotatePathGradientTransform PROTO :DWORD,:DWORD,:DWORD
;GdipRotatePenTransform  pen:DWORD, angle:REAL4, order:MatrixOrder
GdipRotatePenTransform PROTO :DWORD,:DWORD,:DWORD
;GdipRotateTextureTransform  brush:DWORD, angle:REAL4, order:MatrixOrder
GdipRotateTextureTransform PROTO :DWORD,:DWORD,:DWORD
;GdipRotateWorldTransform  graphics:DWORD, angle:REAL4, order:MatrixOrder
GdipRotateWorldTransform PROTO :DWORD,:DWORD,:DWORD
;GdipSaveAdd  image:DWORD, encoderParams:EncoderParameters
GdipSaveAdd PROTO :DWORD,:DWORD
;GdipSaveAddImage  image:DWORD, newImage:DWORD, encoderParams:EncoderParameters
GdipSaveAddImage PROTO :DWORD,:DWORD,:DWORD
;GdipSaveGraphics  graphics:DWORD, State:DWORD
GdipSaveGraphics PROTO :DWORD,:DWORD
;GdipSaveImageToFile  image:DWORD, Filename:String, clsidEncoder:CLSID, encoderParams:Any
GdipSaveImageToFile PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipSaveImageToStream  image:DWORD, stream:IStream, clsidEncoder:CLSID, encoderParams:Any
GdipSaveImageToStream PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipScaleLineTransform  brush:DWORD, sx:REAL4, sy:REAL4, order:MatrixOrder
GdipScaleLineTransform PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipScaleMatrix  matrix:DWORD, scaleX:REAL4, scaleY:REAL4, order:MatrixOrder
GdipScaleMatrix PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipScalePathGradientTransform  brush:DWORD, sx:REAL4, sy:REAL4, order:MatrixOrder
GdipScalePathGradientTransform PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipScalePenTransform  pen:DWORD, sx:REAL4, sy:REAL4, order:MatrixOrder
GdipScalePenTransform PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipScaleTextureTransform  brush:DWORD, sx:REAL4, sy:REAL4, order:MatrixOrder
GdipScaleTextureTransform PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipScaleWorldTransform  graphics:DWORD, sx:REAL4, sy:REAL4, order:MatrixOrder
GdipScaleWorldTransform PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipSetAdjustableArrowCapFillState  cap:DWORD, bFillState:DWORD
GdipSetAdjustableArrowCapFillState PROTO :DWORD,:DWORD
;GdipSetAdjustableArrowCapHeight  cap:DWORD, Height:REAL4
GdipSetAdjustableArrowCapHeight PROTO :DWORD,:DWORD
;GdipSetAdjustableArrowCapMiddleInset  cap:DWORD, middleInset:REAL4
GdipSetAdjustableArrowCapMiddleInset PROTO :DWORD,:DWORD
;GdipSetAdjustableArrowCapWidth  cap:DWORD, Width:REAL4
GdipSetAdjustableArrowCapWidth PROTO :DWORD,:DWORD
;GdipSetClipGraphics  graphics:DWORD, srcgraphics:DWORD, CombineMd:CombineMode
GdipSetClipGraphics PROTO :DWORD,:DWORD,:DWORD
;GdipSetClipHrgn  graphics:DWORD, hRgn:DWORD, CombineMd:CombineMode
GdipSetClipHrgn PROTO :DWORD,:DWORD,:DWORD
;GdipSetClipPath  graphics:DWORD, path:DWORD, CombineMd:CombineMode
GdipSetClipPath PROTO :DWORD,:DWORD,:DWORD
;GdipSetClipRect  graphics:DWORD, x:REAL4, Y:REAL4, Width:REAL4, Height:REAL4, CombineMd:CombineMode
GdipSetClipRect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipSetClipRectI  graphics:DWORD, x:DWORD, Y:DWORD, Width:DWORD, Height:DWORD, CombineMd:CombineMode
GdipSetClipRectI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipSetClipRegion  graphics:DWORD, region:DWORD, CombineMd:CombineMode
GdipSetClipRegion PROTO :DWORD,:DWORD,:DWORD
;GdipSetCompositingMode  graphics:DWORD, CompositingMd:CompositingMode
GdipSetCompositingMode PROTO :DWORD,:DWORD
;GdipSetCompositingQuality  graphics:DWORD, CompositingQlty:CompositingQuality
GdipSetCompositingQuality PROTO :DWORD,:DWORD
;GdipSetCustomLineCapBaseCap  customCap:DWORD, baseCap:LineCap
GdipSetCustomLineCapBaseCap PROTO :DWORD,:DWORD
;GdipSetCustomLineCapBaseInset  customCap:DWORD, inset:REAL4
GdipSetCustomLineCapBaseInset PROTO :DWORD,:DWORD
;GdipSetCustomLineCapStrokeCaps  customCap:DWORD, startCap:LineCap, endCap:LineCap
GdipSetCustomLineCapStrokeCaps PROTO :DWORD,:DWORD,:DWORD
;GdipSetCustomLineCapStrokeJoin  customCap:DWORD, LnJoin:LineJoin
GdipSetCustomLineCapStrokeJoin PROTO :DWORD,:DWORD
;GdipSetCustomLineCapWidthScale  customCap:DWORD, widthScale:REAL4
GdipSetCustomLineCapWidthScale PROTO :DWORD,:DWORD
;GdipSetEmpty  region:DWORD
GdipSetEmpty PROTO :DWORD

GdipSetGraphicsLayout PROTO :DWORD,:DWORD
GdipSetImageAttributesCachedBackground PROTO :DWORD,:DWORD
;GdipSetImageAttributesColorKeys  imageattr:DWORD, ClrAdjType:ColorAdjustType, enableFlag:DWORD, colorLow:DWORD, colorHigh:DWORD
GdipSetImageAttributesColorKeys PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipSetImageAttributesColorMatrix  imageattr:DWORD, ClrAdjType:ColorAdjustType, enableFlag:DWORD, colourMatrix:ColorMatrix, grayMatrix:Any, Flags:ColorMatrixFlags
GdipSetImageAttributesColorMatrix PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipSetImageAttributesGamma  imageattr:DWORD, ClrAdjType:ColorAdjustType, enableFlag:DWORD, gamma:REAL4
GdipSetImageAttributesGamma PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipSetImageAttributesICMMode  imageattr:DWORD, bOn:DWORD
;GdipSetImageAttributesNoOp  imageattr:DWORD, ClrAdjType:ColorAdjustType, enableFlag:DWORD
GdipSetImageAttributesNoOp PROTO :DWORD,:DWORD,:DWORD
;GdipSetImageAttributesOutputChannel  imageattr:DWORD, ClrAdjstType:ColorAdjustType, enableFlag:DWORD, channelFlags:ColorChannelFlags
GdipSetImageAttributesOutputChannel PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipSetImageAttributesOutputChannelColorProfile  imageattr:DWORD, ClrAdjType:ColorAdjustType, enableFlag:DWORD, colorProfileFilename:String
GdipSetImageAttributesOutputChannelColorProfile PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipSetImageAttributesRemapTable  imageattr:DWORD, ClrAdjType:ColorAdjustType, enableFlag:DWORD, mapSize:DWORD, map:ColorMap
GdipSetImageAttributesRemapTable PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipSetImageAttributesThreshold  imageattr:DWORD, ClrAdjType:ColorAdjustType, enableFlag:DWORD, threshold:REAL4
GdipSetImageAttributesThreshold PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipSetImageAttributesToIdentity  imageattr:DWORD, ClrAdjType:ColorAdjustType
GdipSetImageAttributesToIdentity PROTO :DWORD,:DWORD
;GdipSetImageAttributesWrapMode  imageattr:DWORD, wrap:WrapMode, argb:DWORD, bClamp:DWORD
GdipSetImageAttributesWrapMode PROTO :DWORD,:DWORD,:DWORD,:DWORD

GdipSetImageLayout PROTO :DWORD,:DWORD
;GdipSetImagePalette  image:DWORD, palette:ColorPalette
GdipSetImagePalette PROTO :DWORD,:DWORD
;GdipSetInfinite  region:DWORD
GdipSetInfinite PROTO :DWORD
;GdipSetInterpolationMode  graphics:DWORD, interpolation:InterpolationMode
GdipSetInterpolationMode PROTO :DWORD,:DWORD
;GdipSetLineBlend  brush:DWORD, blend:REAL4, positions:REAL4, count:DWORD
GdipSetLineBlend PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipSetLineColors  brush:DWORD, color1:DWORD, color2:DWORD
GdipSetLineColors PROTO :DWORD,:DWORD,:DWORD
;GdipSetLineGammaCorrection  brush:DWORD, useGammaCorrection:DWORD
GdipSetLineGammaCorrection PROTO :DWORD,:DWORD
;GdipSetLineLinearBlend  brush:DWORD, focus:REAL4, theScale:REAL4
GdipSetLineLinearBlend PROTO :DWORD,:DWORD,:DWORD
GdipSetLinePoints PROTO :DWORD,:DWORD,:DWORD
GdipSetLinePointsI PROTO :DWORD,:DWORD,:DWORD
;GdipSetLinePresetBlend  brush:DWORD, blend:DWORD, positions:REAL4, count:DWORD
GdipSetLinePresetBlend PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipSetLineSigmaBlend  brush:DWORD, focus:REAL4, theScale:REAL4
GdipSetLineSigmaBlend PROTO :DWORD,:DWORD,:DWORD
;GdipSetLineTransform  brush:DWORD, matrix:DWORD
GdipSetLineTransform PROTO :DWORD,:DWORD
;GdipSetLineWrapMode  brush:DWORD, WrapMd:WrapMode
GdipSetLineWrapMode PROTO :DWORD,:DWORD
;GdipSetMatrixElements  matrix:DWORD, m11:REAL4, m12:REAL4, m21:REAL4, m22:REAL4, dx:REAL4, dy:REAL4
GdipSetMatrixElements PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipSetMetafileDownLevelRasterizationLimit  metafile:DWORD, metafileRasterizationLimitDpi:DWORD
GdipSetMetafileDownLevelRasterizationLimit PROTO :DWORD,:DWORD
;GdipSetPageScale  graphics:DWORD, sscale:REAL4
GdipSetPageScale PROTO :DWORD,:DWORD
;GdipSetPageUnit  graphics:DWORD, unit:GpUnit
GdipSetPageUnit PROTO :DWORD,:DWORD
;GdipSetPathFillMode  path:DWORD, brushmode:FillMode
GdipSetPathFillMode PROTO :DWORD,:DWORD
;GdipSetPathGradientBlend  brush:DWORD, blend:REAL4, positions:REAL4, count:DWORD
GdipSetPathGradientBlend PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipSetPathGradientCenterColor  brush:DWORD, lColors:DWORD
GdipSetPathGradientCenterColor PROTO :DWORD,:DWORD
;GdipSetPathGradientCenterPoint  brush:DWORD, Points:POINTF
GdipSetPathGradientCenterPoint PROTO :DWORD,:DWORD
;GdipSetPathGradientCenterPointI  brush:DWORD, Points:POINTL
GdipSetPathGradientCenterPointI PROTO :DWORD,:DWORD
;GdipSetPathGradientFocusScales  brush:DWORD, xScale:REAL4, yScale:REAL4
GdipSetPathGradientFocusScales PROTO :DWORD,:DWORD,:DWORD
;GdipSetPathGradientGammaCorrection  brush:DWORD, useGammaCorrection:DWORD
GdipSetPathGradientGammaCorrection PROTO :DWORD,:DWORD
;GdipSetPathGradientLinearBlend  brush:DWORD, focus:REAL4, sscale:REAL4
GdipSetPathGradientLinearBlend PROTO :DWORD,:DWORD,:DWORD
;GdipSetPathGradientPath  brush:DWORD, path:DWORD
GdipSetPathGradientPath PROTO :DWORD,:DWORD
;GdipSetPathGradientPresetBlend  brush:DWORD, blend:DWORD, positions:REAL4, count:DWORD
GdipSetPathGradientPresetBlend PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipSetPathGradientSigmaBlend  brush:DWORD, focus:REAL4, sscale:REAL4
GdipSetPathGradientSigmaBlend PROTO :DWORD,:DWORD,:DWORD
;GdipSetPathGradientSurroundColorsWithCount  brush:DWORD, argb:DWORD, count:DWORD
GdipSetPathGradientSurroundColorsWithCount PROTO :DWORD,:DWORD,:DWORD
;GdipSetPathGradientTransform  brush:DWORD, matrix:DWORD
GdipSetPathGradientTransform PROTO :DWORD,:DWORD
;GdipSetPathGradientWrapMode  brush:DWORD, WrapMd:WrapMode
GdipSetPathGradientWrapMode PROTO :DWORD,:DWORD
;GdipSetPathMarker  path:DWORD
GdipSetPathMarker PROTO :DWORD
;GdipSetPenBrushFill  pen:DWORD, brush:DWORD
GdipSetPenBrushFill PROTO :DWORD,:DWORD
;GdipSetPenColor  pen:DWORD, argb:DWORD
GdipSetPenColor PROTO :DWORD,:DWORD
;GdipSetPenCompoundArray  pen:DWORD, dash:REAL4, count:DWORD
GdipSetPenCompoundArray PROTO :DWORD,:DWORD,:DWORD
;GdipSetPenCustomEndCap  pen:DWORD, customCap:DWORD
GdipSetPenCustomEndCap PROTO :DWORD,:DWORD
;GdipSetPenCustomStartCap  pen:DWORD, customCap:DWORD
GdipSetPenCustomStartCap PROTO :DWORD,:DWORD
;GdipSetPenDashArray  pen:DWORD, dash:REAL4, count:DWORD
GdipSetPenDashArray PROTO :DWORD,:DWORD,:DWORD
;GdipSetPenDashCap  pen:DWORD, dcap:DashCap
GdipSetPenDashCap197819 PROTO :DWORD,:DWORD
;GdipSetPenDashOffset  pen:DWORD, Offset:REAL4
GdipSetPenDashOffset PROTO :DWORD,:DWORD
;GdipSetPenDashStyle  pen:DWORD, dStyle:DashStyle
GdipSetPenDashStyle PROTO :DWORD,:DWORD
;GdipSetPenEndCap  pen:DWORD, endCap:LineCap
GdipSetPenEndCap PROTO :DWORD,:DWORD
;GdipSetPenLineCap  pen:DWORD, startCap:LineCap, endCap:LineCap, dcap:DashCap
GdipSetPenLineCap197819 PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipSetPenLineJoin  pen:DWORD, LnJoin:LineJoin
GdipSetPenLineJoin PROTO :DWORD,:DWORD
;GdipSetPenMiterLimit  pen:DWORD, miterLimit:REAL4
GdipSetPenMiterLimit PROTO :DWORD,:DWORD
;GdipSetPenMode  pen:DWORD, penMode:PenAlignment
GdipSetPenMode PROTO :DWORD,:DWORD
;GdipSetPenStartCap  pen:DWORD, startCap:LineCap
GdipSetPenStartCap PROTO :DWORD,:DWORD
;GdipSetPenTransform  pen:DWORD, matrix:DWORD
GdipSetPenTransform PROTO :DWORD,:DWORD
;GdipSetPenUnit  pen:DWORD, unit:GpUnit
GdipSetPenUnit PROTO :DWORD,:DWORD
;GdipSetPenWidth  pen:DWORD, Width:REAL4
GdipSetPenWidth PROTO :DWORD,:DWORD
;GdipSetPixelOffsetMode  graphics:DWORD, PixOffsetMode:PixelOffsetMode
GdipSetPixelOffsetMode PROTO :DWORD,:DWORD
;GdipSetPropertyItem  image:DWORD, item:PropertyItem
GdipSetPropertyItem PROTO :DWORD,:DWORD
;GdipSetRenderingOrigin  graphics:DWORD, x:DWORD, Y:DWORD
GdipSetRenderingOrigin PROTO :DWORD,:DWORD,:DWORD
;GdipSetSmoothingMode  graphics:DWORD, SmoothingMd:SmoothingMode
GdipSetSmoothingMode PROTO :DWORD,:DWORD
;GdipSetSolidFillColor  brush:DWORD, argb:DWORD
GdipSetSolidFillColor PROTO :DWORD,:DWORD
;GdipSetStringFormatAlign  StringFormat:DWORD, align:StringAlignment
GdipSetStringFormatAlign PROTO :DWORD,:DWORD
;GdipSetStringFormatDigitSubstitution  StringFormat:DWORD, language:Integer, substitute:StringDigitSubstitute
GdipSetStringFormatDigitSubstitution PROTO :DWORD,:DWORD,:DWORD
;GdipSetStringFormatFlags  StringFormat:DWORD, Flags:DWORD
GdipSetStringFormatFlags PROTO :DWORD,:DWORD
;GdipSetStringFormatHotkeyPrefix  StringFormat:DWORD, hkPrefix:HotkeyPrefix
GdipSetStringFormatHotkeyPrefix PROTO :DWORD,:DWORD
;GdipSetStringFormatLineAlign  StringFormat:DWORD, align:StringAlignment
GdipSetStringFormatLineAlign PROTO :DWORD,:DWORD
;GdipSetStringFormatMeasurableCharacterRanges  StringFormat:DWORD, rangeCount:DWORD, ranges:CharacterRange
GdipSetStringFormatMeasurableCharacterRanges PROTO :DWORD,:DWORD,:DWORD
;GdipSetStringFormatTabStops  StringFormat:DWORD, firstTabOffset:REAL4, count:DWORD, tabStops:REAL4
GdipSetStringFormatTabStops PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipSetStringFormatTrimming  StringFormat:DWORD, trimming:StringTrimming
GdipSetStringFormatTrimming PROTO :DWORD,:DWORD
;GdipSetTextContrast  graphics:DWORD, contrast:DWORD
GdipSetTextContrast PROTO :DWORD,:DWORD
;GdipSetTextRenderingHint  graphics:DWORD, Mode:TextRenderingHint
GdipSetTextRenderingHint PROTO :DWORD,:DWORD
;GdipSetTextureTransform  brush:DWORD, matrix:DWORD
GdipSetTextureTransform PROTO :DWORD,:DWORD
;GdipSetTextureWrapMode  brush:DWORD, WrapMd:WrapMode
GdipSetTextureWrapMode PROTO :DWORD,:DWORD
;GdipSetWorldTransform  graphics:DWORD, matrix:DWORD
GdipSetWorldTransform PROTO :DWORD,:DWORD
;GdipShearMatrix  matrix:DWORD, shearX:REAL4, shearY:REAL4, order:MatrixOrder
GdipShearMatrix PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipStartPathFigure  path:DWORD
GdipStartPathFigure PROTO :DWORD
;GdipStringFormatGetGenericDefault  StringFormat:DWORD
GdipStringFormatGetGenericDefault PROTO :DWORD
;GdipStringFormatGetGenericTypographic  StringFormat:DWORD
GdipStringFormatGetGenericTypographic PROTO :DWORD

GdipTestControl PROTO :DWORD,:DWORD
;GdipTransformMatrixPoints  matrix:DWORD, pts:POINTF, count:DWORD
GdipTransformMatrixPoints PROTO :DWORD,:DWORD,:DWORD
;GdipTransformMatrixPointsI  matrix:DWORD, pts:POINTL, count:DWORD
GdipTransformMatrixPointsI PROTO :DWORD,:DWORD,:DWORD
;GdipTransformPath  path:DWORD, matrix:DWORD
GdipTransformPath PROTO :DWORD,:DWORD
;GdipTransformPoints  graphics:DWORD, destSpace:CoordinateSpace, srcSpace:CoordinateSpace, Points:POINTF, count:DWORD
GdipTransformPoints PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipTransformPointsI  graphics:DWORD, destSpace:CoordinateSpace, srcSpace:CoordinateSpace, Points:POINTL, count:DWORD
GdipTransformPointsI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipTransformRegion  region:DWORD, matrix:DWORD
GdipTransformRegion PROTO :DWORD,:DWORD
;GdipTranslateClip  graphics:DWORD, dx:REAL4, dy:REAL4
GdipTranslateClip PROTO :DWORD,:DWORD,:DWORD
;GdipTranslateClipI  graphics:DWORD, dx:DWORD, dy:DWORD
GdipTranslateClipI PROTO :DWORD,:DWORD,:DWORD
;GdipTranslateLineTransform  brush:DWORD, dx:REAL4, dy:REAL4, order:MatrixOrder
GdipTranslateLineTransform PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipTranslateMatrix  matrix:DWORD, offsetX:REAL4, offsetY:REAL4, order:MatrixOrder
GdipTranslateMatrix PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipTranslatePathGradientTransform  brush:DWORD, dx:REAL4, dy:REAL4, order:MatrixOrder
GdipTranslatePathGradientTransform PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipTranslatePenTransform  pen:DWORD, dx:REAL4, dy:REAL4, order:MatrixOrder
GdipTranslatePenTransform PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipTranslateRegion  region:DWORD, dx:REAL4, dy:REAL4
GdipTranslateRegion PROTO :DWORD,:DWORD,:DWORD
;GdipTranslateRegionI  region:DWORD, dx:DWORD, dy:DWORD
GdipTranslateRegionI PROTO :DWORD,:DWORD,:DWORD
;GdipTranslateTextureTransform  brush:DWORD, dx:REAL4, dy:REAL4, order:MatrixOrder
GdipTranslateTextureTransform PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipTranslateWorldTransform  graphics:DWORD, dx:REAL4, dy:REAL4, order:MatrixOrder
GdipTranslateWorldTransform PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipVectorTransformMatrixPoints  matrix:DWORD, pts:POINTF, count:DWORD
GdipVectorTransformMatrixPoints PROTO :DWORD,:DWORD,:DWORD
;GdipVectorTransformMatrixPointsI  matrix:DWORD, pts:POINTL, count:DWORD
GdipVectorTransformMatrixPointsI PROTO :DWORD,:DWORD,:DWORD
;GdipWarpPath  path:DWORD, matrix:DWORD, Points:POINTF, count:DWORD, srcx:REAL4, srcy:REAL4, srcwidth:REAL4, srcheight:REAL4, WarpMd:WarpMode, flatness:REAL4
GdipWarpPath PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
;GdipWidenPath  nativePath:DWORD, pen:DWORD, matrix:DWORD, flatness:REAL4
GdipWidenPath PROTO :DWORD,:DWORD,:DWORD,:DWORD
;GdipWindingModeOutline  path:DWORD, matrix:DWORD, flatness:REAL4
GdipWindingModeOutline PROTO :DWORD,:DWORD,:DWORD
