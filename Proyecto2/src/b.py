from PIL import Image, ImageDraw, ImageFont, ImageColor
import sys
#ejemplo de ejecucion: python b.py a.csv 500 500

#reader = open('~/NetBeansProjects/A-Star/out.txt',"r")
maxRow=int(sys.argv[2])
maxCol=int(sys.argv[3])
with open(sys.argv[1], 'r') as f:
	a=f.readline().strip()
	b=0
	c=0	
	while a !='@':
		if(a=='$'):
			c+=1
			out = Image.new("RGB",(int(sys.argv[2]),int(sys.argv[3])))#no tocar
			dout = ImageDraw.Draw(out)#salida que crea una imagen
			a=f.readline().strip()
			for i in range(0,maxRow):
				for j in range(0,maxCol):
					if(a[j]=="1" or a[j]=="2"):
						dout.point((j,i),(0,0,255))#pixel 0 y 1 pintar de color 2
					elif(a[j]=="4"):
						dout.point((j,i),(0,255,0))#pixel 0 y 1 pintar de color 2
					elif(a[j]=="3"):
						dout.point((j,i),(255,0,0))#pixel 0 y 1 pintar de color 2
					else:
						dout.point((j,i),(255,255,255))#pixel 0 y 1 pintar de color 2
				a=f.readline().strip()
				out.save("out"+ str(c)+".png" , "PNG")
