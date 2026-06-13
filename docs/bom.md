# Technical Description

Based on the findings from the second semester, Wobble evolved from a collection of separate interaction mechanisms into an integrated emotional support product. The technical concept combines haptic breathing guidance, emotional communication, and attention-triggering feedback within a single device.

The validation studies demonstrated that the calming effect of Wobble relies primarily on physical interaction. Children naturally engaged with touching, holding, and interacting with Wobble while following its breathing rhythm. Visual and auditory feedback were found to be less effective as standalone communication channels, but proved valuable for attracting attention and initiating interaction.

Consequently, the technical architecture prioritizes haptic interaction as the core functionality, while visual and auditory feedback serve supporting roles.



## System Architecture

| Function                      | Components / Technical Realisation                                                                        | Complexity | Priority  |
| ----------------------------- | --------------------------------------------------------------------------------------------------------- | ---------- | --------- |
| Haptic breathing guidance     | Motor-driven breathing mechanism, expandable upper surface, soft silicone shell, removable textile jacket | High       | Very High |
| Tactile interaction           | Silicone outer shell, soft textile cover, deformable surface structure                                    | Low-Medium | Very High |
| Emotional communication       | Integrated display system (LED matrix, LCD, OLED, or projection-based display) for facial expressions     | Medium     | High      |
| Visual attention trigger      | RGB LEDs integrated into the housing                                                                      | Low        | Medium    |
| Audio attention trigger       | Miniature speaker, amplifier, sound module                                                                | Low        | Medium    |
| Power supply                  | Rechargeable battery, wireless charging receiver, charging dock                                           | Medium     | Medium    |
| Repairability and maintenance | Removable underbase providing access to electronics and battery                                           | Low        | Medium    |

### Justification for Priority

The prioritization of technical functions was continuously refined throughout the development process and is directly linked to findings from the Discovery, Definition, and Develop phases.

Haptic interaction received the highest priority following the findings of Develop 1 and Develop 2. The literature review, expert interviews, and sensory validation tests consistently highlighted the importance of physical interaction in emotional regulation. During the breathing tests in Develop 2, movement-based feedback proved significantly more effective than auditory guidance alone. Children naturally focused on the moving surface and synchronized their behaviour with the breathing rhythm.

These findings were further confirmed during the All-round Interaction Test in Develop 3. Children consistently interacted with Wobble through touch, holding, and physical cooperation rather than simply following instructions. The calming interaction therefore emerged primarily from the combination of touch and movement.

Emotional communication through facial expressions was identified as the second most important interaction layer. Previous emotion recognition studies conducted during the Definition Phase already demonstrated that children interpret facial expressions more consistently than abstract colour cues. This was confirmed during the Develop 3 interaction tests, where children immediately recognised Wobble's emotional states.

Lighting and audio received a lower priority. Earlier testing indicated that colours alone contribute little to emotional communication. However, during the final interaction tests, colour changes proved highly effective in redirecting children's attention towards Wobble. Similarly, audio cues showed limited value as standalone calming mechanisms but remain useful as supplementary attention triggers and interaction feedback.

Finally, repairability and maintenance became increasingly important as the concept matured from a prototype towards a potential product. Customer Journey testing demonstrated that parents expect durable products with straightforward maintenance and long-term usability.




## Proposed Technical Architecture

| Subsystem                      | Description                                                                                             | Components                                                                    |
| ------------------------------ | ------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------- |
| Upper Interaction Surface      | Soft deformable surface that physically moves during breathing exercises and invites touch interaction. | Silicone membrane, textile jacket, internal support structure                 |
| Haptic Breathing Module        | Generates rhythmic expansion and contraction of the upper surface.                                      | DC motor, cam mechanism or contractile arm structure, gearbox, linkage system |
| Emotional Communication Module | Displays Wobble's emotional states through facial expressions.                                          | LED display, LCD display, OLED display, or projection system                  |
| Lighting Module                | Provides attention-triggering colour feedback.                                                          | RGB LEDs, light diffuser                                                      |
| Audio Module                   | Provides optional sound cues and breathing guidance.                                                    | Miniature speaker, audio amplifier                                            |
| Electronics Compartment        | Controls all electronic functions.                                                                      | ESP32 or equivalent microcontroller, motor driver, power management board     |
| Power System                   | Supplies energy and enables charging.                                                                   | Rechargeable battery, wireless charging receiver                              |
| Base Housing                   | Structural support for all technical components.                                                        | Injection moulded housing or 3D-printed enclosure                             |
| Underbase                      | Removable service hatch for maintenance and repairs.                                                    | Threaded or bayonet locking mechanism                                         |
| Protective Jacket              | Washable and customizable outer layer.                                                                  | Removable fleece or textile cover                                             |

### Product Structure

1. The base housing contains the battery, control electronics, speaker, LEDs, and breathing mechanism.
2. The emotional communication module is integrated into the upper section and projects Wobble's facial expressions.
3. The breathing mechanism drives the movement of the upper interaction surface.
4. The silicone outer ring protects the electronics and allows easy cleaning.
5. A removable textile jacket can be installed for personalization and machine washing.
6. The underbase can be unscrewed to replace the battery or repair internal components.
7. During normal operation, charging occurs wirelessly through the docking station.

<p align="center">
  <img src="Schermafbeelding 2026-06-13 211627.png" height="350"/>
  <br>
  Figure 1. Exploded assembly view of a possible Wobble Prototype
</p>


