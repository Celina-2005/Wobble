# Develop

<p align="center">
    <img alt="zDevelop" src="https://github.com/user-attachments/assets/c3a790e2-7f02-466c-8356-36647c69647a" height = "200">
    <br>
    Figure 1. Develop Overview (placeholder Develop 1 & 2)
</p>




## Develop 1 – Expert Interviews (February)
We spraken met verschillende pedagogische experten.

## Develop 2 – Sensory Tests and Material Study (March)
### Goal
The aim is to investigate how effectively a breathing movement or breathing aid in the form of sound can help children aged 2 to 6 to calm down more quickly.
 
A mechanical breathing rhythm is established, and constant sounds are used to guide the breathing.
 
Additionally, various substances are haptically tested to determine how pleasant preschoolers find these substances. This allows us to ascertain whether there is a general preference.
 
### prototype assembly
A modular prototype was made so that the different fabrics could be placed on the same prototype.
A box was laser-cut; the top plate was laser-cut several times (1 plate per fabric).
 
The box initially contained:
- Arduino Uno
- H-bridge L298N
- 12V battery holder
- Motor*
 
**The initial motor used was a DC motor; it was not powerful enough to rotate the connected plates. Next, a TT motor was used. This was also not strong enough. Finally, the 12V JGY-370 DC motor was used.*
 
Everything except the motor was attached to the wooden plates with small bolts and nuts.

<p align="center">
  <img src="../img/Prototype1.jpeg" width="250"/>
  <img src="../img/Prototpye.jpeg" width="250"/>
  <br>
  Figure 1. Prototypeimg/Prototpye.jpeg
</p>

**Anthropometric Basis for Dimensioning**

The dimensions of the enclosure were derived from anthropometric data obtained from the DINBelg database, which provides measurements for children aged 3 to 6 years (mixed gender) :

> https://www.dinbelg.be/3jaartotaal.htm
> 
> https://www.dinbelg.be/4jaartotaal.htm
> 
> https://www.dinbelg.be/5jaartotaal.htm
> 
> https://www.dinbelg.be/6jaartotaal.htm

**Hand Length (mm)**
| Age     | P1  | P5  | Mean | P95 | P99 | SD  |
| ------- | --- | --- | ---- | --- | --- | --- |
| 3 years | 93  | 97  | 107  | 117 | 121 | 6.8 |
| 4 years | 99  | 104 | 115  | 126 | 131 | 7.3 |
| 5 years | 104 | 109 | 122  | 135 | 140 | 7.8 |
| 6 years | 110 | 115 | 128  | 141 | 146 | 7.9 |

**Hand Width (mm)**
| Age     | P1 | P5 | Mean | P95 | P99 | SD  |
| ------- | -- | -- | ---- | --- | --- | --- |
| 3 years | 41 | 43 | 47   | 52  | 54  | 3.5 |
| 4 years | 44 | 46 | 52   | 58  | 61  | 3.9 |
| 5 years | 47 | 50 | 57   | 64  | 67  | 4.3 |
| 6 years | 51 | 54 | 60   | 66  | 69  | 3.8 |

The prototype was primarily intended for third-year kindergarten children (ages 5–6). Therefore, the design was based on the mean hand dimensions of this age group.
Using these values, the enclosure was designed as a square with an internal side length of 125 mm (12.5 cm). This dimension provides a balance between ergonomic handling for the target age group and sufficient internal volume to accommodate the required electronic components.

**Motion Mechanism**

To achieve the movement, semicircles were laser-cut. This shape could either protrude above the box and push the fabric upwards, or remain below the fabric so that the test subject's hand moves downwards.
<p align="center">
  <img src="../img/plaatjes.png" width="500">
  <br>
  Figure 2. Drawing - Plates for breathing movement
</p>


### Test procedure
1. The child was blindfolded and led to a table where he or she was allowed to feel the different fabrics one by one. (blindfolded so that the color or pattern had no influence) After each use, they were asked if the fabric felt nicer or less nice than the previous one, so that the precise placement of a fabric could be determined. 
<p align="center">
  <img src="../img/Test_plaatjes.jpeg" width="500">
  <br>
  Figure 3. Fabrics - Least pleasant (upper left) to most pleasant (bottom right)
</p>

2. The favorite was placed on the prototype. The heart rate was measured and recorded. The child was allowed to touch the prototype so that they know something will move.
 
3. The child completed a short running course. This was timed to make it more competitive for the child.
 
4. After running, the heart rate was immediately measured and recorded. From now on, this will be done every 2 minutes.
 
5. The child goes to the prototype and places his or her hand on the top.

<p align="center">
  <img src="../img/Test1.jpg" width="250"/>
  <img src="../img/Test2.jpeg" width="250"/>
  <br>
  Figure 4. Testing the breathing mechanism
</p>

This sequence is followed for every child. After every child has had their turn, they may return one by one in the same order, and the next phase begins.
 
6. The heart rate is measured as an additional resting reference; subsequently, the walking test is timed and performed again.
 
7. The child sits on a chair and listens to the audio. Again, the heart rate is measured and recorded every two minutes.
 
At the end of each phase, they are asked if they know why I am having them do this. They do not know the purpose of the prototype or the audio. When it is mentioned that the intention is for them to breathe along with the movement or sound to calm down, a few children try to do this without me explicitly asking them.

### Conclusion
The test utilizing breathing movements was perceived best by the children. During the observation, it was also noted that the children were much better able to maintain their focus when they could focus haptically on something.
 
Breathing along with the rhythm was generally difficult; insufficient account had been taken of the fact that children generally breathe faster than adults (and therefore also at rest).

> [!Note]
> The full details of the test analysis and results can be found in the report.
> [C.2 Rapport_Calming_Test_De_Bleser_Axelle](https://ugentbe.sharepoint.com/:w:/t/Group.course1292872/IQDWQ2pbi02wS7uIMysw7qV0AVG_IiHluOfWckKgq9gauwY?e=6I5F7z)


> [!IMPORTANT]
> An overview of the product requirements can be found under [Design Requirements](./design_requirements.md).
