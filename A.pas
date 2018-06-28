var s:string;
m,m1:array of integer;
m2,m3:array[0..10]of integer;
n,sum:int64;
begin
readln(n);
setlength(m,n);
setlength(m1,n);
for var i:=0 to n-1 do
  begin
  readln(s);
  if s='M' then m[i]:=1;
  if s='S' then m[i]:=2;
  if s='L' then m[i]:=3;
  if s='XS' then m[i]:=4;
  if s='XL' then m[i]:=5;
  if s='XXS' then m[i]:=6;
  if s='XXL' then m[i]:=7;
  if s='XXXS' then m[i]:=8;
  if s='XXXL' then m[i]:=9;
  end;
for var i:=0 to n-1 do
  begin
  readln(s);
  if s='M' then m1[i]:=1;
  if s='S' then m1[i]:=2;
  if s='L' then m1[i]:=3;
  if s='XS' then m1[i]:=4;
  if s='XL' then m1[i]:=5;
  if s='XXS' then m1[i]:=6;
  if s='XXL' then m1[i]:=7;
  if s='XXXS' then m1[i]:=8;
  if s='XXXL' then m1[i]:=9;
  end;
for var i:=0 to n-1 do
      begin
      m2[m[i]]+=1;
      m3[m1[i]]+=1;
      end;
for var i:=1 to 9 do
  m2[i]:=abs(m2[i]-m3[i]);
for var i:=1 to 9 do
  sum+=m2[i];
writeln(sum div 2);
end.