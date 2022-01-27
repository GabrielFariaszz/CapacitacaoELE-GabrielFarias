def ver_precos():
    prateleira=['arduino','servoMotor','potenciometro','LEDverm','LEDverd','resistor1','resistor100k']
    precoPrat=[75,5,1.9,1,1,0.1,0.5]
    comprados=['resistor100k','resistor100k','servoMotor','arduino','arduino','potenciometro','resistor1',
    'LEDverm','LEDverm','LEDverm','LEDverd','LEDverd']
    precoPago=[0.7,1,5,100,74,2.5,0.1,1,1,2,2,1]
    
    i=0
    for j in range(len(comprados)):
        x=list.index(prateleira,comprados[j])
        if precoPrat[x]!=precoPago[j]:
            i=i+1
        else:
            i=i
    print (str.format('O número de erros na compra foi de {}',i))