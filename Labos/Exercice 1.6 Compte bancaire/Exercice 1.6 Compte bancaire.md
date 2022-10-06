# Exercice 1.6 compte bancaire (1)
Écrire (en pseudo-code) l'algorithme permettant de traiter le problème suivant :
Initialement un compte bancaire possède un solde de 10'000.-.
Le taux d'intérêt annuel de ce compte est de 6%. À la fin de chaque mois,
les intérêts sont capitalisés et un retrait de 500.- est effectué.
Au bout de combien de mois, le compte sera-t-il à découvert ?

Pseudo code:

entrées:
- Solde
- TauxAnnuel
- RetraitMensuel

méthode:
TauxMensuel = (1 + TauxAnnuel/100) à la puissance 1/12 -1
- Intérêts = Solde * TauxMensuel
- SoldeFinDeMois = Solde + Intérêts - RetraitMensuel
- Nombre de mois


boucle:
- Tant que solde > 0
  SoldeFinDeMois
  NombreDeMois += 1

sortie:
- Nombre de mois pour que le compte soit à 0


# Exercice bis Lapin vs Tortue
Une tortue à une distance de 50m avance à une vitesse de 5m/s
un lapin la rattrape à 10 m/s en partant d'une distance 0

Pseudo code:

entrées: 
- turtleSpeed
- rabbitSpeed
- turtleDistance
- turtleDistance
- time



while: turtleDistance >= rabbitDistance
  méthodes:
  - turtleDistance = turtleBaseDistance + turtleSpeed * time
  - rabbitDistance = rabbitBaseDistance + rabbitSpeed * time
  
  time++

sortie:
Afficher la distance à laquelle le lapin rattrape la tortue
