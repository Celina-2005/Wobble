# Develop

## Expert Interviews (February)
We spraken met verschillende pedagogische experten.

## Sensory Tests and Material Study (March)
### Doel
Het doel is onderzoeken hoe effectief een ademhalingsbeweging of ademhalingshulp in de vorm van geluid kinderen tussen de 2 en 6 jaar kan helpen om sneller tot rust te komen.

Er wordt een mechanisch ademhalingsritme gerealiseerd en gebruik gemaakt van constante geluiden om de ademhaling te begeleiden.

Daarnaast worden ook verschillende stoffen haptisch getest om af te toetsen hoe aangenaam kleuters deze stoffen vinden. Zo kunnen we nagaan of er een algemene voorkeur is.


### Opbouw prototype
Er werd een modulair prototype gemaakt zodat de verschillende stoffen op eenzelfde prototype geplaatst konden worden.
Er werd een box gelasercut, de bovenste plaat werd verschillende keren gelasercut (1 plaatje per stof).

De box bevatte initieel:
 - Arduino Uno
 - H-bridge L298N
 - 12V battery holder
 - Motor*

**De initiële motor die gebruikt werd was een DC motor, deze was niet zwaar genoeg om de geconnecteerde plaatjes rond te laten draaien. hierna werd een TT motor gebruikt. Deze was ook niet sterk genoeg. Uiteindelijk werd de 12V jgy-370 DC motor gebruikt.* 

Alles behalve de motor werd met kleine bouten en moeren bevestigd aan de houten platen.

<p align="center">
  <img src="../img/Prototype1.jpeg" width="500">
  <br>
  Figure 2. Plaatjes adembeweging
</p>

Om de beweging te verkrijgen werden halve cirkels gelasercut. Deze vorm kon zowel boven de doos uitsteken en de stof naar boven duwen, als onder de stof blijven zodat de hand van de testpersoon omlaag gaat.
<p align="center">
  <img src="../img/plaatjes.png" width="500">
  <br>
  Figure 2. Plaatjes adembeweging
</p>


### Testverloop
1. Het kind werd geblinddoekt naar een tafel gebracht waar hij of zij 1 voor 1 de verschillende stoffen mocht aanvoelen. (geblinddoekt zodat het kleur of patroon geen invloed had) Er werd steeds gevraagd of de stof leuker of minder leuk aanvoelde dan de vorige, zo kon de precieze plek van een stof bepaald worden. 
2. De favoriet werd op het prototype geplaatst.