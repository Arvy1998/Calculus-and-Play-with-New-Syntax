yi = [0.71 0.72 0.78 0.8 0.61 0.68 0.65 0.62 0.499 0.48 0.45 0.43 0.42 0.39 0.38 0.37 0.35 0.34 0.33 0.30];
x = 4.25;
N = 19;
tikra_reiksme = 0.76;

for m=1:N
    for i=1:m
        L = 0;
        for k=1:i+1
            c = 1;
            for j=1:i+1
                if k ~= j
                    c = c * (x - xi(j))/(xi(k) - xi(j));
                end
            end
            L = L + c * yi(k);
        end
    end
    daugianariai(m) = L;
end

for ite=1:N
   realios_paklaidos(ite) = tikra_reiksme - daugianariai(ite);
end

for itr=1:N - 1
   paklaidos_ivertis(itr + 1) = abs(daugianariai(itr) - daugianariai(itr + 1)); 
end

fprintf('****************************************************\n');
fprintf('*Palukanu artiniai*Reali paklaida*Paklaidos ivertis*\n');
fprintf('****************************************************\n');
for M=1:N
    fprintf('*      ');
    formatSpec = '%.4f';
    fprintf(formatSpec, daugianariai(M));
    fprintf('     *    ');
    formatSpec = '%.4f';
    fprintf(formatSpec, realios_paklaidos(M));
    fprintf('    *    ')
    formatSpec = '%.8f';
    if M <= N
        if M == 1
            fprintf('    -        *\n');
        elseif M == 7
            fprintf(formatSpec, paklaidos_ivertis(7));
            fprintf('   *\n');
        else
            fprintf(formatSpec, paklaidos_ivertis(M));
            fprintf('   *\n');
        end
    end
end
fprintf('****************************************************\n');
