# Vier-Gewinnt Konsolenanwendung in C
Dieses Projekt wurde entwickelt, um Mechatronikern im Informatik 1 Kurs der Hochschule Mannheim die Verwendung von Doxygen zur Dokumentation von C-Code beizubringen. Die Anwendung implementiert das klassische Vier-Gewinnt-Spiel in einer Konsolenumgebung.

## Inhalt des Projekts
- main.c: Die Haupt-C-Datei, die die Funktionalität des Spiels enthält.
- Doxyfile: Die Konfigurationsdatei für Doxygen, um die Dokumentation zu generieren.
- README.md: Diese Datei, die eine Übersicht über das Projekt bietet.

## Anwendung starten
Um das Spiel zu starten, führen Sie die folgenden Schritte aus:

Öffnen Sie die Konsole.
1. Navigieren Sie zum Projektverzeichnis.
2. Kompilieren Sie die C-Datei
```bash
gcc main.c -o connect_four
``` 
4. Führen Sie das erstellte Programm aus:
```bash
./connect_four
```

   
## Spielregeln
1. Das Spielfeld hat 6 Reihen und 7 Spalten.
2. Spieler X und Spieler O wechseln sich ab, ein Spielstück in eine Spalte zu setzen.
3. Das Ziel ist es, vier Spielstücke horizontal, vertikal oder diagonal zu platzieren.

## Doxygen-Dokumentation
Die Doxygen-Dokumentation für den C-Code kann leicht generiert werden. Stellen Sie sicher, dass Doxygen auf Ihrem System installiert ist, und führen Sie dann den folgenden Befehl aus:
```bash
doxygen -g
```
Dies hat die Konfigurationsdatei erstellt.
Jetzt kann Doxygen mit folgendem Befehl ausgeführt werden:
```bash
doxygen Doxyfile
```

Die generierte Dokumentation befindet sich im html-Verzeichnis. Öffnen Sie die index.html-Datei, um die Dokumentation im Webbrowser anzuzeigen.

## Hilfe für Mechatroniker im Informatik 1 Kurs
Dieses Projekt dient als Beispiel dafür, wie Doxygen für die Dokumentation von C-Code verwendet werden kann. Die Kommentare im Code sind entsprechend strukturiert, um die automatische Generierung einer übersichtlichen Dokumentation zu ermöglichen.

Viel Spaß beim Lernen und viel Erfolg im Informatik 1 Kurs!
