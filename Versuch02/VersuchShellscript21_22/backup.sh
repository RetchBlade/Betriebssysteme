#!/bin/bash
#Shebangzeile damit der Skript mit Bash ausgefuert wird

#Aufgabe erstelle einen Archiv mit tar
tar -czf /backup/backup_$(date +"%d-%m-%Y_%H-%M-%S").tar.hz -C/Home .
#-czf steht fuer:
# -c Fuer erstellung eines Archives
# -z Durch gzip komprimieren
# -f die Archiv Datei angeben
#Die Klammern fuegen den Zeitstempel dazu
# tag-monat-Jahr_Stunde-Minute-Sekunde
#-C /home wechselt zum Verzeichnis um dort das Archiv zu erstellen
#Der Punkt am ende sorgt dafuer, dass alle Dateien ins Archiv kopiert werden.

#Aufgabe Verschieben des Archivs
mv /backup/backup_*.tar.gz /backup/
#Sorgt fuer die Verschiebungs des Archives im angegebenen Verzeichniss /backup/

#Aufgabe Debugging
echo "Backup abgeschlossen um $(date +"%d-%m-%Y %H:%M_%S")"
#Gibt eine Meldung aus, dass das Backup fertig ist mit Zeitstempel

