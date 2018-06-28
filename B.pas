var max,neww,n,m,sum,sumch,sumnh:int64;
mas,otr:array of int64;
begin
readln(n,m);
setlength(mas,n+2);
setlength(otr,n+3);
mas[0]:=0;
mas[n+1]:=m;
for var i:=1 to n do
  read(mas[i]);
for var i:=1 to n+1 do
  otr[i]:=mas[i]-mas[i-1];
sumch:=0;
sumnh:=0;
for var i:=1 to n+1 do
  if i mod 2 = 0 then sumch+=otr[i]
    else sumnh+=otr[i];
max:=sumnh;
sum:=0;
neww:=0;
for var i:=1 to n+1 do
  begin
  if i mod 2 = 0 then sumch-=otr[i]
    else sum+=otr[i];
  neww:=sum+sumch-1;
  if max<neww then max:=neww;
  end;
writeln(max);
end.