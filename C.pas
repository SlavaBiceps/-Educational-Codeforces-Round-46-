var m,m1,m2:array of int64;
n,tek,t,j,sum,kk:int64;

function Partition(a: array of int64; l,r: int64): int64;
begin
  var i := l - 1;
  var j := r + 1;
  var x := a[l];
  while True do
  begin
    repeat
      i += 1;
    until a[i]>=x;
    repeat
      j -= 1;
    until a[j]<=x;
    if i<j then
      begin
      Swap(a[i],a[j]);
      Swap(m1[i],m1[j])
      end
    else
    begin
      Result := j;
      exit;
    end;
  end;
end;
  
procedure QuickSort(a: array of int64; l,r: int64);
begin
  if l>=r then exit;
  var j := Partition(a,l,r);
  QuickSort(a,l,j);
  QuickSort(a,j+1,r);
end;

begin
readln(n);
setlength(m,n*2+2);
setlength(m1,n*2+2);
setlength(m2,n+2);
for var i:=1 to n do
  begin
  read(m[i*2],m[i*2+1]);
  m1[i*2]:=1;
  m1[i*2+1]:=2;
  end;
quicksort(m,2,n*2+1);
tek:=m[2];
t:=1;
for var i:=3 to n*2+1 do 
  begin
  if m1[i]=1 then 
    begin
    m2[t]:=m2[t]+m[i]-tek;
    t+=1;
    end
    else 
      begin
      m2[t]:=m2[t]+m[i]-tek+1;
      t-=1;
      end;
  tek:=m[i];
  end;
for var i:=1 to n do
  write(m2[i],' ');
end.