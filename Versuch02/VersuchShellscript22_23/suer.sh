#!/bin/bash
# Die Shebang-Zeile gibt an, dass das Skript mit Bash ausgeführt werden soll.

# Durchlaufe alle Dateien mit der Erweiterung ".tex" im Verzeichnis "/home/vmretchblade/Arbeitsverzeichnis/".
for file in /home/vmretchblade/Arbeitsverzeichnis/*.tex
do
    # Gib eine Meldung aus, dass die aktuelle Datei bearbeitet wird.
    echo "Bearbeite $file..."

    # Erstelle eine Sicherungskopie der aktuellen Datei mit der Erweiterung ".bak".
    cp "$file" "$file.bak"

    # Führe den 'sed'-Befehl aus, um die in der Datei "/home/vmretchblade/Arbeitsverzeichnis/sedfile.txt" angegebenen Ersetzungen in der aktuellen Datei vorzunehmen.
    sed -i -f /home/vmretchblade/Arbeitsverzeichnis/sedfile.txt "$file"

    # Gib eine Meldung aus, dass die Bearbeitung der aktuellen Datei abgeschlossen ist.
    echo "fertig mit $file"
done

# Dieses mal ChatGpt erklaeren gelassen.