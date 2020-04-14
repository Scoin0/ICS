# Homework 7a Assignment
---

# Binary Data in GIF

GIF is a file format to store image data. It has a long history and it dates back to the late 1980's, where there was extreme needs to compress file data due to the limited machine power. For this situation, GIF employs a variety of ways to store image data. One of them is use of "color table," or a color palette. First, you define an index for each color you will use, e.g., 0 for white, 1 for black, 2 for blue, and so on. Based on this table, you can encode each pixel with the corresponding color index. If the number of colors is small, this approach is efficient in terms of data size since the size of index can be much smaller than that of pixel data. For example, if you have only two colors, one single bit can represent each pixel.    
Here is a sample GIF image:    
![sample1.gif](http://www2.hawaii.edu/~tidota/ics212s2020/hw/hw7b/sample1.gif)    
You can see actual binary data in the file by "xxd" command on Unix or other binary viewers/editors.    
1. Bytes 0-5: Signature
    - This part is always "GIF89a" indicating this file is a GIF file.
2. Bytes 6-7: Width
    - The image width is stored in two bytes of space. The first byte represents the lower bits, and the second one is for the higher bits. For exmaple, if the width of an image is 1500 (```05DC```) pixels, you see ```DC```, and it is followed by ```05```.
3. Bytes 8-9: Height
    - Like the width, the image height is stored in two bytes of space.
4. Bytes 10-12: Descriptor
    - Information describing how this gif file is organized. We don't need the details for this.
5. Bytes 13-24: Color Table
    - Every three bytes represent a color based on the RGB color model. The first byte is the red, second is green, and third is blue. 
6. Bytes 25-end: Image Data
    - The rest of the file is pixel data encoded by the color table. We don't need to know the details of this.
    
## Instructions:    
1. Write code to apply the following items to each of the files given below:
    - Read a gif file, and store the data into an unsigned char array ```unsigned char [4000]``` and the data size in an ```int``` variable.
    - Print the width and height, and color table data in the format described below.
    - Modify the color table based on the rules listed below.
    - Do the second line again to show the changes.
    - Write the data to a new file.
2. Input Files.
    - I grabbed these files from the course website.
    image1.gif | image2.gif | image3.gif
    -----------|------------|-----------
    ![image1.gif](http://www2.hawaii.edu/~tidota/ics212s2020/hw/hw7b/image1.gif) | ![image2.gif](http://www2.hawaii.edu/~tidota/ics212s2020/hw/hw7b/image2.gif) | ![image3.gif](http://www2.hawaii.edu/~tidota/ics212s2020/hw/hw7b/image3.gif)
3. Output Files.
    - The resulted file will have the modified color tables, but the other parts must be identical to those in the original file. The file names MUST be result1.gif, result2.gif and so on.
4. The code must have the following functions. All functions must be called in main.
    - ```void printinfor(unsigned char []);``` which prints the required information.
    - ```void modify(unsigned char []);``` modify the color palette.
    - ```int readFile(unsigned char [], int*, char []);``` reads a gif file and stores data into an array.
    - ```int writeFile(unsigned char [], int, char []);``` writes image data from an array into a file.
---

## Comments after submission:

```    

1. Testing
    - With 0?
2. Coding Style
    - Multiple return statements
    
```
