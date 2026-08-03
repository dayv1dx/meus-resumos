# Data e Hora

O módulo `datetime` é usado para lidar com datas e horas. Ele possui várias classes úteis como `date`, `time` e `timedelta`.

```python
from datetime import date, datetime, time

data = date(2023, 7, 10)
print(data) # 2023-07-10
print(date.today()) # 2026-05-07


data_hora = datetime(2023, 7, 10, 10, 20,30)
print(data_hora) # 2023-07-10 10:20:30
print(datetime.today()) # 2026-05-07 17:39:34

hora = time(10, 20, 0)
print(hora)
```

## timedelta

O objeto `timedelta` representa uma duração, a diferença entre duas instâncias `datetime` ou `date`.
~~~ py
print(date.today() - timedelta(days=1)) # 2026-05-06

resultado = datetime(2023, 7, 25, 10, 19, 20) - timedelta(hours=1)
print(resultado.time()) # 09:19:20

print(datetime.now().date()) # 2026-05-07
~~~

## Formantando e convertendo data e hora

```python
from datetime import datetime

data_hora_atual = datetime.now()
data_hora_str = "2023-10-20 10:20"
mascara_ptbr = "%d/%m/%Y %a"
mascara_en = "%Y-%m-%d %H:%M"

print(data_hora_atual.strftime(mascara_ptbr)) # 20/10/2023

data_convertida = datetime.strptime(data_hora_str, mascara_en)
print(data_convertida) # 2023-10-20 10:20
print(type(data_convertida)) # <class, datetime.datetime>
```

## Fuso Horário

```python
from datetime import datetime

import pytz

data = datetime.now(pytz.timezone("Europe/Oslo"))
data2 = datetime.now(pytz.timezone("America/Sao_Paulo"))

print(data)
print(data2)
```