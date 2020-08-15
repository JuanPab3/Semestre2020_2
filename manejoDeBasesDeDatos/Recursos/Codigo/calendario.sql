CREATE TABLE hor(
    id SERIAL PRIMARY KEY,
    asignatura VARCHAR(50) NOT NULL,
    dia INT NOT NULL,
    tipo VARCHAR(50) NOT NULL,
    inicia TIME NOT NULL,
    termina TIME NOT NULL
);
