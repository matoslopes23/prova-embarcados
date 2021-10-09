-- Curso: Engenharia de Software
-- Disciplina: Sistemas Embarcados
-- Professor: Vandermi Joao da Silva
-- Autor: Lucas Weslen Lopes de Matos
-- Data: 09/10/2021



-- Entidade
library IEEE;
use IEEE.std_logic_1164.all;

entity porta is
    port(
        a , b : in std_logic; -- Entradas
        x : out std_logic -- Saída
    );
end porta;

-- Arquitetura
architecture master of porta is
begin
  process(a, b) is
  begin
    x <= not(a and b);
  end process;
end master;
-- Fim