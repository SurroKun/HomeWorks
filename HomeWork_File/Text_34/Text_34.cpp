// Text_34.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

uses crt;

const shirina : integer = 50;

var f1, f2: text;
name1, name2: string;
str: string;
i: integer;


begin clrscr;
write('Imea faila dlea chtenia: '); readln(name1);
write('Imea faila dlea zapisi:  '); readln(name2);
assign(f1, name1); reset(f1);
assign(f2, name2); rewrite(f2);

while not eof(f1) do
begin
readln(f1, str);
for i: = 1 to shirina - length(str) do write(f2, ' ');
writeln(f2, str);
end;

close(f1); close(f2);
writeln('Text byl perepisan v ', name2);
readkey; end.