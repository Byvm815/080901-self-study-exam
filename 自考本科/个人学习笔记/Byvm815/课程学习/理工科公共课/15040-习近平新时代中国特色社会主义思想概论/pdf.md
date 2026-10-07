需要markdown-pdf插件。     需要手动设置插件使用的chromium的路径，在VSCode对应的插件设置里

输出pdf文件体积优化，需要使用Ghostscript
```
gs -sDEVICE=pdfwrite -dCompatibilityLevel=1.4    -dPDFSETTINGS=/prepress    -dNOPAUSE -dQUIET -dBATCH    -sOutputFile=./output.pdf ./input.pdf
```

pdf转图片，500是可调输出分辨率
```
gs -dNOPAUSE -dBATCH -dSAFER -sDEVICE=jpeg -r500 -dJPEGQ=90 -sOutputFile=output.jpg input.pdf
```