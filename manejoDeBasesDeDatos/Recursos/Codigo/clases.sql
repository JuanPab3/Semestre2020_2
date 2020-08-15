INSERT INTO hor (id,asignatura,dia,tipo,inicia,termina)
VALUES
('1','cálculo 3',3,'monitoria','13:00','15:00'),
('2','cálculo 3',5,'clase','13:00','15:00'),
('3','teoría de grafos',2,'clase','15:00','16:30'),
('4','teoría de grafos',4,'clase','13:00','14:30'),
('5','cornerstone project',5,'clase','09:00','10:30'),
('6','teoría de la computación',2,'clase','11:00','12:30'),
('7','teoría de la computación',4,'clase','11:00','12:30'),
('8','manejo de bases de datos',2,'clase','13:00','15:00'),
('9','manejo de bases de datos',3,'clase','15:00','18:00'),
('10','probabilidad y estadistica 1',1,'clase','09:00','10:30'),
('11','probabilidad y estadistica 1',3,'clase','09:00','10:30'),
('12','probabilidad y estadistica 1',4,'clase','09:00','11:00'),
('13','constitución políta e instrucción cívica',5,'clase','07:00','09:00');

-- Clases de un día de la semana
/*
SELECT asignatura,tipo,dia,inicia,termina
FROM hor
WHERE dia=3;
*/

-- Ciertas clases especificas
/*
SELECT asignatura,tipo,inicia,termina
FROM hor
WHERE asignatura='cálculo 3';
*/

-- Clases entre dos marcos de tiempo
/*
SELECT asignatura,dia,inicia,termina
FROM hor
WHERE inicia>='11:00',termina<='15:00';
*/

-- Clase inicia más temprano
/*
SELECT asignatura,dia,inicia,termina
FROM hor
ORDER BY inicia
LIMIT 1;
*/

-- Clase que termina más tarde

SELECT asignatura,dia,inicia,termina
FROM hor
ORDER BY termina DESC
LIMIT 1;
