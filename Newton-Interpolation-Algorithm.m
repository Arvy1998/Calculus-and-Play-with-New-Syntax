clear all
x=[1 1.2 1.3 1.4 1.5 1.6 1.7 1.8 1.9 2 2.1 2.2 2.3 2.4 2.5 2.6 2.7 2.8 2.9 3];
y=[1.33	0.98	0.82	0.68	0.57	0.47	0.39	0.32 0.27 0.22 0.19 0.13 0.11 0.09 0.08 0.07 0.06 0.06 0.05 0.04];
M=length(x); %x(i) kiekis.  Zinoma galima ir tiesiogiai nurodyti.
N=M-1;  %Daugianario eile.

for k=1:M
   f{k,1}=y(k); 
end 
for j=1:N
    for i=j:N
        f{i+1,j+1}=(f{i,j}-f{i+1,j})/(x(i+1-j)-x(i+1));  
    end
end

 for i=1:M
     for j=i:N
 f{i,j+1}='-'; 
     end 
 end
Skirtumupav=[{'y'} 'f1' 'f2' 'f3' 'f4' 'f5' 'f6' 'f7' 'f8' 'f9' 'f10' 'f11' 'f12' 'f13' 'f14' 'f15' 'f16' 'f17' 'f18' 'f19' ];
Skirtumulent=[Skirtumupav; f]
X=1.1;
Y=0;
% Visu eiliu Daugianariu sudarymas:
LL(1)=y(1); %Sumavimui
     p=1;  %Daugybai     
 for i=1:N
  p=p*(X-x(i));
  LL(i+1)=LL(i)+f{i+1,i+1}*p;
  L{i,1}=LL(i+1);
  rpakl{i,1}=0;
   Eilnr{i,1}=i;
 end 
 pakliv{1,1}='-';
for i=1:N-1
    pakliv{i+1,1}=abs(L{i,1}-L{i+1,1});

end
Atspav=[{'Eil.'} 'Artinys' 'Reali paklaida' 'Paklaidos ivertis'];
Lentelei=[Atspav; Eilnr L rpakl pakliv]

