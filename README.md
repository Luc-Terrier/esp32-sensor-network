# Projet station météo

Réseau de capteurs connectés : des nœuds ESP32 mesurent leur environnement
et envoient leurs données à une passerelle C++ sous Linux, qui les stocke
et les affiche sur un tableau de bord web.

> 🚧 Projet en cours de développement — dernière mise à jour : 26/10/2026

## Objectifs
- Mettre en pratique l'informatique embarquée vue en cours (C/C++, communication, systèmes)
- Concevoir une architecture complète : capteur → passerelle → affichage
- Documenter et versionner le projet comme en milieu professionnel

## Architecture prévue
[Nœud ESP32 + capteurs] ➔ [Passerelle C++ (Linux)] ➔ [Tableau de bord web]

## Matériel
- ESP32
- Capteur BME280 (température, humidité, pression)
- Capteur BH1750 (luminosité)

## Avancement
- [x] Choix du matériel et commande
- [ ] Environnement de développement (PlatformIO)
- [ ] Lecture des capteurs en I²C
- [ ] Protocole de communication nœud → passerelle
- [ ] Passerelle C++
- [ ] Tableau de bord web

## Auteur
Luc Terrier — étudiant ingénieur GI, UTC