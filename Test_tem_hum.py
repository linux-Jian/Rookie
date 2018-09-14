import math

sensor = 4

blue = 0
white = 1

while True:
    try:
	if math.isnan(sensor) == False and math.isnan(white) == False:
	    print("temp = %.02f C humidity =%.02%%"%(math.isnan(sensor),math.isnan(white)))

    except IOError:
	print ('Error')
