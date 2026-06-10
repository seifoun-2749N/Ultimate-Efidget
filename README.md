# Ultimate-Editget

<img width="1920" height="1080" alt="Affiche" src="https://github.com/user-attachments/assets/82d670b7-1e60-46e6-beec-d691aecbf0d3" />

# Overview :

A custom Efidget made by following the PATHFINDER efidget starter project on Stasis HackClub YSWS event.
Made by love and creativity, includes hard combination to pass it. Requires high IQ level (just kidding)

I chose this project since It's fun to make and be creative so I wanted to give it a shot then testing my friends. Also it feels amazing to see people play with something you made and get stuck sometimes until you help them. Since It's not the first PCB I made so I already know how to make It but by making this DIY game I got more experience dealing with PCB and KiCad pecisely and got better also in making beautiful PCBs.

It comes with 4 LEDs, 4 switches and a buzzer. Your goal is to find out how can you make the 4 leds work at the same time.

### Here is how it works (Don't read this if you don't want to know the solution) :
- Button 1 activates the LED3 if you tapped on the button n times such that n is an even number. If n was an odd number, that means that LED3 and LED4 will be inactivated.
- Button 2 activated LED1 and a timer of 10 seconds (with a buzzer signal) : To activate LED2 you should press button3 3 times before the timer ends or the LEDs will be inactivated
- Button 4 simply turn LED4 on and off by pressing it, nothing special (It's so easy that It could trick the player)

The buzzer will play a quick win song if the players wins


---

# 3D Overview :
## Front View
<img width="1317" height="745" alt="image" src="https://github.com/user-attachments/assets/3ef109b9-8abb-4ea7-be71-098e04aa0f8a" />

## Back View
<img width="1440" height="858" alt="image" src="https://github.com/user-attachments/assets/179fe4b7-fb3f-4275-ac42-668b5413db12" />

## Schematics
<img width="793" height="691" alt="image" src="https://github.com/user-attachments/assets/08157e8f-5f2f-4b65-bfde-d76492d7381e" />

## PCB Design
<img width="786" height="630" alt="image" src="https://github.com/user-attachments/assets/edb2c007-1d3d-42df-bf64-e31c0f506b2d" />

---

# BOM :
| Id | Designator | Footprint | Qty | Designation | Reference | Total Cost (USD) |
|----|------------|------------|-----|-------------|-----------|------------------|
| 1 | SW2, SW1, SW4, SW3 | SW_Cherry_MX_1.00u_PCB | 4 | SW_Push | [AliExpress](https://ar.aliexpress.com/item/1005006091988869.html?spm=a2g0o.productlist.main.4.2872xBzIxBzIE6&algo_pvid=d44246cc-77cb-43e4-8068-2f2bc8c97c57&aem_p4p_detail=202606091639448252744772420080000779202&algo_exp_id=d44246cc-77cb-43e4-8068-2f2bc8c97c57-3&pdp_ext_f=%7B%22order%22%3A%221335%22%2C%22spu_best_type%22%3A%22price%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%214.64%213.67%21%21%2131.30%2124.73%21%40213ba8cc17810483843314481ef6ab%2112000035698597715%21sea%21TN%217442585653%21X%211%210%21n_tag%3A-29911%3Bd%3A60442e28%3Bm03_new_user%3A-29895&curPageLogUid=IL7W9u5bs8j8&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005006091988869%7C_p_origin_prod%3A&search_p4p_id=202606091639448252744772420080000779202_1) | $3.67 |
| 2 | D3, D1, D4, D2 | LEDRD254W57D500H1070 | 4 | L08R5000Q1 | [LitteSon (Local Shop)](https://little-son.tn/accueil/761-123-diode-led-5mm.html#/8-couleur-blanc) | $0.12 |
| 3 | R1, R4, R3, R2 | R_Axial_DIN0204_L3.6mm_D1.6mm_P5.08mm_Horizontal | 4 | R | [LitteSon (Local Shop)](https://little-son.tn/accueil/876-resistance-220ohm-14w.html) | $0.14 |
| 4 | U1 | XIAO-Generic-Hybrid-14P-2.54-21X17.8MM | 1 | MODULE-SEEEDUINO-XIAO | [AliExpress](https://ar.aliexpress.com/item/1005004459618789.html) | $4.85 |
| 5 | BZ1 | Buzzer_12x9.5RM7.6 | 1 | Buzzer | [LittleSon (Local Shop)](https://little-son.tn/accueil/423-buzzer-passif-5v.html) | $0.35 |
