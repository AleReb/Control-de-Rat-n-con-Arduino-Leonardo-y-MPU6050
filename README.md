# Control-de-Rat-n-con-Arduino-Leonardo-y-MPU6050
## Descripción General
Este proyecto utiliza un Arduino Leonardo junto con el sensor MPU6050 para crear un ratón controlado por gestos. Los movimientos detectados por el acelerómetro y el giroscopio del sensor se traducen en movimientos del cursor del ratón en una computadora.

## Componentes y Tecnologías
- **Arduino Leonardo**: Plataforma de microcontrolador que soporta emulación de ratón.
- **MPU6050**: Sensor de movimiento que incluye acelerómetro y giroscopio.
- **I2Cdev Library**: Biblioteca que facilita la comunicación I2C con el MPU6050.

## Instalación y Uso
- Conectar el MPU6050 al Arduino Leonardo usando conexiones I2C.
- Cargar el código en el Arduino Leonardo.
- Al mover el MPU6050, el cursor del ratón en la computadora debería responder a los gestos realizados.

## Ejemplos de Uso
- Creación de interfaces de usuario accesibles para personas con discapacidades motoras.
- Desarrollo de sistemas de control para presentaciones o dispositivos multimedia.
- Proyectos educativos para demostrar la integración de sensores y dispositivos de entrada.

## Contribuciones y Desarrollo Futuro
- Mejorar la precisión y sensibilidad del sensor para movimientos más finos.
- Añadir funciones adicionales como clics o desplazamientos basados en gestos específicos.
- Desarrollar una calibración automática del sensor para adaptarse a diferentes entornos y usuarios.
"""


