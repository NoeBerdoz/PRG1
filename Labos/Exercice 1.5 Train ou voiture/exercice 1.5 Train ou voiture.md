# Exercice 1.5 Train ou voiture ?
*Ecrire (en pseudo-code) l'algorithme permettant de traiter le problème suivant : Vous souhaitez déterminer s'il est plus intéressant (du point de vue coût) de vous rendre de chez vous à votre lieu de travail en voiture ou en train. Les informations connues sont :
• la distance en km séparant votre domicile de votre lieu de travail
• le coût du billet de train simple course
• la consommation (litres aux100 km) de la voiture
• le prix du litre d'essence
• les coûts d'amortissement (Frs par km) de la voiture*

entrées:
- Distance
- CoutBilletTrain
- ConsoVoiture
- PrixLitre
- CoutAmortissement

sortie:
- Décision voiture ou train

méthodes:
- CoutTrain = CoutBilletTrain
- CoutVoitureTotal = CoutConsommation + CoutAmortissementTotal
- CoutConsommation = Distance * CoutKm
- CoutKm = ConsoVoiture / 100 * PrixLitre
- CoutAmortissementTotal = coutAmortissement * Distance

conditions:
si coutTrain > coutVoitureTotal
    Afficher "Voiture"
sinon
    Afficher "Train"
