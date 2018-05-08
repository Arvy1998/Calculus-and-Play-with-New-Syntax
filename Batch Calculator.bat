@echo off

:MENIU
cls
color F0
echo SVEIKI, PASIRINKITE, KURIA SKAICIUOKLE NORITE NAUDOTI (PRASOME VESTI TIK SKAICIUS).
echo                 ******************************************************
echo                 *                      MENIU                         *
echo                 ******************************************************
echo                 *              1) STANDARTINE SKAICIUOKLE            *
echo                 *              2) LOGINE SKAICIUOKLE                 *
echo                 *              3) NUSTATYMAI                         *
echo                 *              4) BAIGTI DARBA                       *
echo                 ******************************************************
choice /c 1234
if errorlevel 4 goto PABAIGA
if errorlevel 3 goto NUSTATYMAI
if errorlevel 2 goto LOGINE_SKAICIUOKLE
if errorlevel 1 goto STANDARTINE_SKAICIUOKLE

:STANDARTINE_SKAICIUOKLE
cls
echo PASIRINKITE NORIMA ATLIKTI VEIKSMA.
echo                  ******************************************************
echo                  *         MENIU / STANDARTINE SKAICIUOKLE            *
echo                  ******************************************************
echo                  *              1) SUDETIS                            *
echo                  *              2) ATIMTIS                            *
echo                  *              3) DAUGYBA                            *
echo                  *              4) DALYBA SU LIEKANA                  *
echo                  *              5) MODULIS                            *
echo                  *              6) FAKTORIALAS                        *
echo                  *              7) LAIPSNIS                           *
echo                  *              8) KVADRATINE SAKNIS                  *
echo                  *              9) GRIZTI I MENIU                     *
echo                  ******************************************************
choice /c 123456789 /t 60 /d 1
if errorlevel 9 goto MENIU
if errorlevel 8 goto SAKNIS
if errorlevel 7 goto LAIPSNIS
if errorlevel 6 goto FAKTORIALAS
if errorlevel 5 goto MODULIS
if errorlevel 4 goto LIEKANA
if errorlevel 3 goto DAUGYBA
if errorlevel 2 goto ATIMTIS
if errorlevel 1 goto SUDETIS

:SUDETIS
cls
echo IVESKITE DU NORIMUS SUDETI SKAICIUS:
echo PIRMASIS SKAICIUS:
set /p x=
echo ANTRASIS SKAICIUS:
set /p y=
set /a z=%x% + %y%
echo %z% ^= %x% ^+ %y%
time /t >> istorija.txt
echo Data: %date% >> istorija.txt
echo %z% ^= %x% ^+ %y% >> istorija.txt
echo ----------------------------- >> istorija.txt
goto KLAUSIMAS

:ATIMTIS
cls
echo IVESKITE DU NORIMUS ATIMTI SKAICIUS:
echo PIRMASIS SKAICIUS:
set /p x=
echo ANTRASIS SKAICIUS:
set /p y=
set /a z=%x% - %y%
echo %z% ^= %x% ^- %y%
time /t >> istorija.txt
echo Data: %date% >> istorija.txt
echo %z% ^= %x% ^- %y% >> istorija.txt
echo ----------------------------- >> istorija.txt
goto KLAUSIMAS

:DAUGYBA
cls
echo IVESKITE DU NORIMUS SUDAUGINTI SKAICIUS:
echo PIRMASIS SKAICIUS:
set /p x=
echo ANTRASIS SKAICIUS:
set /p y=
set /a z=%x% * %y%
if %z% GTR 100000000 goto KLAIDA5
echo %z% ^= %x% x %y%
time /t >> istorija.txt
echo Data: %date% >> istorija.txt
echo %z% ^= %x% x %y% >> istorija.txt
echo ----------------------------- >> istorija.txt
goto KLAUSIMAS

:LIEKANA
cls
echo IVESKITE DU NORIMUS SUDALINTI SKAICIUS IR GAUKITE LIEKANA:
echo PIRMASIS SKAICIUS:
set /p x=
echo ANTRASIS SKAICIUS:
set /p y=
if %y% EQU 0 goto KLAIDA1
if %x% LSS %y% goto KLAIDA6
set /a z=%x% %% %y%
set /a f=%x%/%y%
echo %f% ^= %x% ^/ %y% ir liekana ^= %z%
time /t >> istorija.txt
echo Data: %date% >> istorija.txt
echo %f% ^= %x% ^/ %y% ir liekana ^= %z% >> istorija.txt
echo ----------------------------- >> istorija.txt
goto KLAUSIMAS

:MODULIS
cls
echo IVESKITE SKAICIU, KURIO MODULI NORITE SUZINOTI:
set /p x=
if %x% LSS 0 goto MAZ
if %x% GEQ 0 goto DAU
:MAZ
set /a z=0-%x%
goto PRINT
:DAU
set /a z=%x%-0
goto PRINT
:PRINT
echo ^|%x%^|^ = %z%
time /t >> istorija.txt
echo Data: %date% >> istorija.txt
echo ^|%x%^|^ = %z% >> istorija.txt
echo ----------------------------- >> istorija.txt
goto KLAUSIMAS

:FAKTORIALAS
cls
echo IVESKITE SKAICIU, KURIO FAKTORIALA NORITE SUZINOTI (MAX ^= 30):
set /p x=
set z=1
if %x% GTR 30 goto KLAIDA4
for /l %%a in (1, 1, %x%) do set /a z=z * %%a
echo %x%! ^= %z%
time /t >> istorija.txt
echo Data: %date% >> istorija.txt
echo %x%! ^= %z% >> istorija.txt
echo ----------------------------- >> istorija.txt
goto KLAUSIMAS

:LAIPSNIS
cls
echo IVESKITE DU SKAICIUS, PIRMASIS - LAIPSNIO PAGRINDAS, ANTRASIS - RODYKLIS:
echo IVESKITE LAIPSNIO PAGRINDA:
set /p x=
echo IVESKITE LAIPSNIO RODYKLI:
set /p y=
set /a z=1
set temp=%x%
set /a laik=1
if %y% LSS 0 goto KLAIDA2
if %y% EQU 0 goto VAR1
if %y% EQU 1 goto VAR2
:TIKR
if %y% GTR 1 goto LAIPS
if %y% EQU 1 goto PAB
:LAIPS
set /a z=%x% * %temp%
set temp=%z%
set /a y=y-1
set /a laik=laik+1
if %z% GTR 100000000 goto KLAIDA5
goto TIKR
:PAB
echo %x% pakelta laipsniu %laik% ^= %z%
time /t >> istorija.txt
echo Data: %date% >> istorija.txt
echo %x% pakelta laipsniu %laik% ^= %z% >> istorija.txt
echo ----------------------------- >> istorija.txt
goto KLAUSIMAS
:VAR2
set z=%x%
set laik=1
goto PAB
:VAR1
set z=1
set laik=0
goto PAB

:SAKNIS
cls
echo IVESKITE SKAICIU, IS KURIO NORITE ISTRAUKTI KVADRATINE SAKNI (MAX ^= 1000000):
set /p x=
set /a temp = 1
set /a laik = 1
if %x% GTR 1000000 goto KLAIDA4
if %x% EQU 0 goto NUL
if %x% LSS 0 goto KLAIDA
:TIKR1
set /a temp=laik * laik
if %temp% EQU %x% goto PAB1
set /a laik=laik + 1
if %x% LSS %temp% goto KLAIDA3
if %temp% NEQ %x% goto TIKR1
:PAB1
echo SAKNIS IS %x% ^= %laik%
time /t >> istorija.txt
echo Data: %date% >> istorija.txt
echo SAKNIS IS %x% ^= %laik% >> istorija.txt
echo ----------------------------- >> istorija.txt
goto KLAUSIMAS
:NUL
set laik=0
goto PAB1

:LOGINE_SKAICIUOKLE
cls
echo PASIRINKITE NORIMA ATLIKTI VEIKSMA.
echo                  ******************************************************
echo                  *            MENIU / LOGINE SKAICIUOKLE              *
echo                  ******************************************************
echo                  *              1) KONJUNKCIJA                        *
echo                  *              2) SILPNOJI DISJUNKCIJA               *
echo                  *              3) GRIEZTOJI DISJUNKCIJA              *
echo                  *              4) NEIGIMAS                           *
echo                  *              5) EKVIVALENTUMAS                     *
echo                  *              6) IMPLIKACIJA                        *
echo                  *              7) PYRSO RODYKLE                      *
echo                  *              8) SEFERIO BRUKSNYS                   *
echo                  *              9) GRIZTI I MENIU                     *
echo                  ******************************************************
choice /c 123456789 /t 60 /d 1
if errorlevel 9 goto MENIU
if errorlevel 8 goto SEFERIS
if errorlevel 7 goto PYRSAS
if errorlevel 6 goto IMPLIKACIJA
if errorlevel 5 goto EKVIVALENTAS
if errorlevel 4 goto NEIGINYS
if errorlevel 3 goto GRIEZTOJI
if errorlevel 2 goto DISJUNK
if errorlevel 1 goto KONJUNK

:KONJUNK
cls
echo SUZINOKITE KONJUNKCIJOS REZULTATA IVEDE DVI LOGINES REIKSMES:
echo IVESKITE PIRMAJA LOGINE REIKSME:
set /p x=
if %x% LSS 0 goto KLAIDA7
if %x% GTR 1 goto KLAIDA7
echo IVESKITE ANTRAJA LOGINE REIKSME:
set /p y=
if %y% LSS 0 goto KLAIDA7
if %y% GTR 1 goto KLAIDA7
set /a "z=%x%&%y%"
echo %z%^=%x% AND %y%
time /t >> istorija.txt
echo Data: %date% >> istorija.txt
echo %z%^=%x% AND %y% >> istorija.txt
echo ----------------------------- >> istorija.txt
goto KLAUSIMAS

:DISJUNK
cls
echo SUZINOKITE DISJUNKCIJOS REZULTATA IVEDE DVI LOGINES REIKSMES:
echo IVESKITE PIRMAJA LOGINE REIKSME:
set /p x=
if %x% LSS 0 goto KLAIDA7
if %x% GTR 1 goto KLAIDA7
echo IVESKITE ANTRAJA LOGINE REIKSME:
set /p y=
if %y% LSS 0 goto KLAIDA7
if %y% GTR 1 goto KLAIDA7
set /a "z=%x%|%y%"
echo %z%^=%x% OR %y%
time /t >> istorija.txt
echo Data: %date% >> istorija.txt
echo %z%^=%x% OR %y% >> istorija.txt
echo ----------------------------- >> istorija.txt
goto KLAUSIMAS

:GRIEZTOJI
cls
echo SUZINOKITE GRIEZTOSIOS DISJUNKCIJOS REZULTATA IVEDE DVI LOGINES REIKSMES:
echo IVESKITE PIRMAJA LOGINE REIKSME:
set /p x=
if %x% LSS 0 goto KLAIDA7
if %x% GTR 1 goto KLAIDA7
echo IVESKITE ANTRAJA LOGINE REIKSME:
set /p y=
if %y% LSS 0 goto KLAIDA7
if %y% GTR 1 goto KLAIDA7
set /a "z=%x%^%y%"
echo %z% ^= %x% XOR %y%
time /t >> istorija.txt
echo Data: %date% >> istorija.txt
echo %z% ^= %x% XOR %y% >> istorija.txt
echo ----------------------------- >> istorija.txt
goto KLAUSIMAS

:NEIGINYS
cls
echo IVESKITE LOGINE REIKSME IR SUZINOKITE JO NEIGINIO REZULTATA:
set /p x=
if %x% LSS 0 goto KLAIDA7
if %x% GTR 1 goto KLAIDA7
if %x% EQU 0 set /a z=1
if %x% EQU 1 set /a z=0
echo NOT %x% ^= %z%
time /t >> istorija.txt
echo Data: %date% >> istorija.txt
echo NOT %x% ^= %z% >> istorija.txt
echo ----------------------------- >> istorija.txt
goto KLAUSIMAS

:EKVIVALENTAS
cls
echo SUZINOKITE EKVIVALENTO REZULTATA IVEDE DVI LOGINES REIKSMES:
echo IVESKITE PIRMAJA LOGINE REIKSME:
set /p x=
if %x% LSS 0 goto KLAIDA7
if %x% GTR 1 goto KLAIDA7
echo IVESKITE ANTRAJA LOGINE REIKSME:
set /p y=
if %y% LSS 0 goto KLAIDA7
if %y% GTR 1 goto KLAIDA7
if %x% NEQ %y% set /a z=0
if %x% EQU %y% set /a z=1
echo %z% ^= %x% NXOR %y%
time /t >> istorija.txt
echo Data: %date% >> istorija.txt
echo %z% ^= %x% NXOR %y% >> istorija.txt
echo ----------------------------- >> istorija.txt
goto KLAUSIMAS

:IMPLIKACIJA
cls
echo SUZINOKITE IMPLIKACIJOS REZULTATA IVEDE DVI LOGINES REIKSMES:
echo IVESKITE PIRMAJA LOGINE REIKSME:
set /p x=
if %x% LSS 0 goto KLAIDA7
if %x% GTR 1 goto KLAIDA7
echo IVESKITE ANTRAJA LOGINE REIKSME:
set /p y=
if %y% LSS 0 goto KLAIDA7
if %y% GTR 1 goto KLAIDA7
if %x% EQU 0 if %y% EQU 0 set /a z=1
if %x% EQU 0 if %y% EQU 1 set /a z=1
if %x% EQU 1 if %y% EQU 0 set /a z=0
if %x% EQU 1 if %y% EQU 1 set /a z=1
echo %z% ^= %x% ^=^> %y%
time /t >> istorija.txt
echo Data: %date% >> istorija.txt
echo %z% ^= %x% ^=^> %y% >> istorija.txt
echo ----------------------------- >> istorija.txt
goto KLAUSIMAS

:PYRSAS
cls
echo SUZINOKITE PYRSO RODYKLES REZULTATA IVEDE DVI LOGINES REIKSMES:
echo IVESKITE PIRMAJA LOGINE REIKSME:
set /p x=
if %x% LSS 0 goto KLAIDA7
if %x% GTR 1 goto KLAIDA7
echo IVESKITE ANTRAJA LOGINE REIKSME:
set /p y=
if %y% LSS 0 goto KLAIDA7
if %y% GTR 1 goto KLAIDA7
if %x% EQU 0 if %y% EQU 0 set /a z=1
if %x% EQU 0 if %y% EQU 1 set /a z=0
if %x% EQU 1 if %y% EQU 0 set /a z=0
if %x% EQU 1 if %y% EQU 1 set /a z=0
echo %z% ^= %x% NOR %y%
time /t >> istorija.txt
echo Data: %date% >> istorija.txt
echo %z% ^= %x% NOR %y% >> istorija.txt
echo ----------------------------- >> istorija.txt
goto KLAUSIMAS

:SEFERIS
cls
echo SUZINOKITE SEFERIO BRUKSNIO REZULTATA IVEDE DVI LOGINES REIKSMES:
echo IVESKITE PIRMAJA LOGINE REIKSME:
set /p x=
if %x% LSS 0 goto KLAIDA7
if %x% GTR 1 goto KLAIDA7
echo IVESKITE ANTRAJA LOGINE REIKSME:
set /p y=
if %y% LSS 0 goto KLAIDA7
if %y% GTR 1 goto KLAIDA7
if %x% EQU 0 if %y% EQU 0 set /a z=1
if %x% EQU 0 if %y% EQU 1 set /a z=1
if %x% EQU 1 if %y% EQU 0 set /a z=1
if %x% EQU 1 if %y% EQU 1 set /a z=0
echo %z% ^= %x% NAND %y%
time /t >> istorija.txt
echo Data: %date% >> istorija.txt
echo %z% ^= %x% NAND %y% >> istorija.txt
echo ----------------------------- >> istorija.txt
goto KLAUSIMAS

:NUSTATYMAI
cls
echo PASIRINKITE NORIMA ATLIKTI VEIKSMA.
echo                  ******************************************************
echo                  *                  MENIU / NUSTATYMAI                *
echo                  ******************************************************
echo                  *              1) TRINTI ISTORIJA                    *
echo                  *              2) KURTI ISTORIJOS KOPIJA             *
echo                  *              3) INFORMACIJA                        *
echo                  *              4) APIE                               *
echo                  *              5) GRIZTI I MENIU                     *
echo                  ******************************************************
choice /c 12345 /t 60 /d 5
if errorlevel 5 goto MENIU
if errorlevel 4 goto ABOUT
if errorlevel 3 goto INFO
if errorlevel 2 goto CREATE
if errorlevel 1 goto DELETE

:DELETE
cls
if not exist istorija.txt goto KLAIDA8
echo > istorija.txt
echo ISTORIJA SEKMINGAI ISTRINTA.
goto KLAUSIMAS

:CREATE
cls
if not exist istorija.txt goto KLAIDA8
echo IVESKITE NAUJO FAILO VARDA:
set /p name=
if exist %name%.txt goto KLAIDA10
copy istorija.txt %name%.txt
if not exist %name%.txt goto KLAIDA9
echo ISTORIJA SEKMINGAI NUKOPIJUOTA I ATSARGINI FAILA.
goto KLAUSIMAS

:INFO
cls
color F8
echo SKAICIUOKLES FUNKCIJA - ATLIKTI PAPRASTUS ARITMETINIUS VEIKSMUS KOMANDINIAME REZIME,
echo ITRAUKIANT NE TIK SUDETI, ATIMTI, DAUGYBA AR DALYBA, TACIAU IR LAIPSNI, SAKNIES FUNK-
echo CIJA, MODULI, FAKTORIALA AR ISSKIRTI DALYBOS LIEKANA. SI SKAICIUOKLE NEAPSIRIBOJA VIEN
echo ARITMETINIAIS VEIKSMAIS, JI TAIP PAT GEBA ATLIKTI LOGINIUS VEIKSMUS SU OPERANDAIS PASI-
echo RINKUS LOGINE SKAICIUOKLE. YRA GALIMYBE RINKTIS DAUGYBE DISKRECIOJOJE MATEMATIKOJE SU-
echo TINKAMU VEIKSMU. PROGRAMA IRASO JUSU VEIKLOS ISTORIJA, SU KURIOS FAILA GALIMA ISTUSTINTI
echo ARBA SUKURTI JO KOPIJA NAUJU VARDU. SKAICIUOKLE NEATLIEKA VEIKSMU SU ITIN DIDELIAIS SKAI-
echo CIAIS IR TRUPMENOMIS, KADANGI KOMANDINIS REZIMAS JU NEPALAIKO.
echo SEKMES NAUDOJANTIS SIA SKAICIUOKLE IR ACIU, KAD JA NAUDOJATE!
echo SPAUSKITE BET KURI KLAVISA, KAD TESTUMETE!
pause
goto KLAUSIMAS

:ABOUT
cls
color F8
echo PROGRAMA KURE: ARVYDAS BARANAUSKAS
echo GRUPE: PRIF-17/2
echo PROGRAMOS SUKURIMO METAI: 2017
echo SPAUSKITE BET KURI KLAVISA, KAD TESTUMETE!
pause
goto KLAUSIMAS

:KLAUSIMAS
echo AR NORITE GRIZTI I PAGRINDINI MENIU? (1 - TAIP / 2 - NE)
choice /c 12 /t 10 /d 2
if errorlevel 2 goto PABAIGA
if errorlevel 1 goto MENIU

:KLAIDA
color 4F
echo PO SAKNIMI NEGALI BUTI SKAICIUS, MAZESNIS UZ NULI, BANDYKITE DAR KARTA!
echo SPAUSKITE BET KURI KLAVISA, KAD TESTUMETE!
pause
goto MENIU

:KLAIDA1
color 4F
echo DALYBA IS NULIO NEGALIMA, BANDYKITE DAR KARTA!
echo SPAUSKITE BET KURI KLAVISA, KAD TESTUMETE!
pause
goto MENIU

:KLAIDA2
color 4F
echo SKAICIUOTUVAS SKAICIUS KELIA TIK SVEIKUOJU TEIGIAMU LAIPSNIU, BANDYKITE DAR KARTA!
echo SPAUSKITE BET KURI KLAVISA, KAD TESTUMETE!
pause
goto MENIU

:KLAIDA3
color 4F
echo SAKNIS NESITRAUKIA, BANDYKITE DAR KARTA!
echo SPAUSKITE BET KURI KLAVISA, KAD TESTUMETE!
pause
goto MENIU

:KLAIDA4
color 4F
echo IVEDETE SKAICIU, KURIS VIRSIJA LIMITA, BANDYKITE DAR KARTA!
echo SPAUSKITE BET KURI KLAVISA, KAD TESTUMETE!
pause
goto MENIU

:KLAIDA5
color 4F
echo GAUTAS ATSAKYMAS YRA PER DIDELIS, BANDYKITE DAR KARTA!
echo SPAUSKITE BET KURI KLAVISA, KAD TESTUMETE!
pause
goto MENIU

:KLAIDA6
color 4F
echo TRUPMENINIAI SKAICIAI NEPALAIKOMI, BANDYKITE DAR KARTA!
echo SPAUSKITE BET KURI KLAVISA, KAD TESTUMETE!
pause
goto MENIU

:KLAIDA7
color 4F
echo IVESTAS SKAITMUO NEATITINKA LOGINES REIKSMES, BANDYKITE DAR KARTA!
echo SPAUSKITE BET KURI KLAVISA, KAD TESTUMETE!
pause
goto MENIU

:KLAIDA8
color 4F
echo FAILAS NERASTAS, PRASOME ISSPRESTI PROBLEMA IR BANDYTI DAR KARTA!
echo SPAUSKITE BET KURI KLAVISA, KAD TESTUMETE!
pause
goto MENIU

:KLAIDA9
color 4F
echo FAILO SUKURTI NEPAVYKO, PRASOME ISSPRESTI PROBLEMA IR BANDYTI DAR KARTA!
echo SPAUSKITE BET KURI KLAVISA, KAD TESTUMETE!
pause
goto MENIU

:KLAIDA10
color 4F
echo FAILAS TOKIU PACIU VARDU JAU EGZISTUOJA, PRASOME ISSPRESTI PROBLEMA IR BANDYTI DAR KARTA!
echo SPAUSKITE BET KURI KLAVISA, KAD TESTUMETE!
pause
goto MENIU

:PABAIGA
