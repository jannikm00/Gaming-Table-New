//RACE GAME FUNKTIONEN//
void draw_car1(void) {
  for (int i = 0; i <= loop1; i++) {
    led.setPixelColor(((word)dist1 % MAXLED) + i, led.Color(255 - i * 20, 0, 0));
  }
}
void draw_car2(void) {
  for (int i = 0; i <= loop2; i++) {
    led.setPixelColor(((word)dist2 % MAXLED) + i, led.Color(0, 255 - i * 20, 0));
  }
}
void draw_car3(void) {
  for (int i = 0; i <= loop1; i++) {
    led.setPixelColor(((word)dist3 % MAXLED) + i, led.Color(0, 0, 255 - i * 20));
  }
}
void draw_car4(void) {
  for (int i = 0; i <= loop2; i++) {
    led.setPixelColor(((word)dist4 % MAXLED) + i, led.Color(255 - i * 20, 255, 255));
  }
}
//


void game_ONE_LED_RACE() {
  if (select == 1) {
    if (run == 0) {
      for (int i = 0; i < MAXLED; i++) {
        led.setPixelColor(i, led.Color(0, 0, 0));
      }
      for (int i = 0; i < MAXLED; i++) {
        if (i == 1851 || i == 1850 || i == 1849 || i == 1848 || i == 1847 || i == 1846 || i == 1803 || i == 1802 || i == 1801 || i == 1800 || i == 1799 || i == 1798 || i == 1797 || i == 1749 || i == 1748 || i == 1747 || i == 1700 || i == 1699 || i == 1652 || i == 1651 || i == 1604 || i == 1603 || i == 1556 || i == 1555 || i == 1508 || i == 1507 || i == 1460 || i == 1459 || i == 1412 || i == 1411 || i == 1364 || i == 1363 || i == 1316 || i == 1315 || i == 1268 || i == 1267 || i == 1221 || i == 1220 || i == 1219 || i == 1173 || i == 1131 || i == 1130 || i == 1129 || i == 1128 || i == 1127 || i == 1126 || i == 1083 || i == 1082 || i == 1081 || i == 1080 || i == 1079 || i == 1078 || i == 1029 || i == 981 || i == 980 || i == 979 || i == 932 || i == 931 || i == 884 || i == 883 || i == 836 || i == 835 || i == 788 || i == 787 || i == 740 || i == 739 || i == 692 || i == 691 || i == 644 || i == 643 || i == 596 || i == 595 || i == 548 || i == 547 || i == 500 || i == 499 || i == 453 || i == 452 || i == 451 || i == 411 || i == 410 || i == 409 || i == 408 || i == 407 || i == 406 || i == 405 || i == 363 || i == 362 || i == 361 || i == 360 || i == 359 || i == 358) {
          led.setPixelColor(i, led.Color(255, 0, 0));
        }
      }
      led.show();
      delay(1000);
      for (int i = 0; i < MAXLED; i++) {
        led.setPixelColor(i, led.Color(0, 0, 0));
      }
      for (int i = 0; i < MAXLED; i++) {
        if (i == 1660 || i == 1659 || i == 1708 || i == 1707 || i == 1755 || i == 1754 || i == 1802 || i == 1801 || i == 1849 || i == 1848 || i == 1847 || i == 1846 || i == 1845 || i == 1844 || i == 1843 || i == 1896 || i == 1895 || i == 1894 || i == 1893 || i == 1796 || i == 1795 || i == 1794 || i == 1746 || i == 1745 || i == 1697 || i == 1696 || i == 1649 || i == 1648 || i == 1601 || i == 1600 || i == 1553 || i == 1552 || i == 1505 || i == 1504 || i == 1457 || i == 1456 || i == 1409 || i == 1408 || i == 1361 || i == 1360 || i == 1313 || i == 1312 || i == 1266 || i == 1265 || i == 1218 || i == 1217 || i == 1171 || i == 1170 || i == 1123 || i == 1122 || i == 1076 || i == 1075 || i == 1028 || i == 1027 || i == 981 || i == 980 || i == 933 || i == 932 || i == 886 || i == 885 || i == 838 || i == 837 || i == 791 || i == 790 || i == 743 || i == 742 || i == 696 || i == 695 || i == 648 || i == 647 || i == 601 || i == 600 || i == 553 || i == 552 || i == 506 || i == 505 || i == 459 || i == 458 || i == 457 || i == 411 || i == 410 || i == 409 || i == 408 || i == 407 || i == 406 || i == 405 || i == 404 || i == 403 || i == 402 || i == 401 || i == 400 || i == 399 || i == 363 || i == 362 || i == 361 || i == 360 || i == 359 || i == 358 || i == 357 || i == 356 || i == 355 || i == 354 || i == 353 || i == 352 || i == 351) {
          led.setPixelColor(i, led.Color(255, 255, 0));
        }
      }
      led.show();
      delay(1000);
      for (int i = 0; i < MAXLED; i++) {
        led.setPixelColor(i, led.Color(0, 0, 0));
      }
      for (int i = 0; i < MAXLED; i++) {
        if (i == 1468 || i == 1516 || i == 1515 || i == 1563 || i == 1562 || i == 1610 || i == 1609 || i == 1657 || i == 1656 || i == 1704 || i == 1703 || i == 1751 || i == 1750 || i == 1798 || i == 1797 || i == 1845 || i == 1844 || i == 1843 || i == 1796 || i == 1795 || i == 1748 || i == 1747 || i == 1700 || i == 1699 || i == 1652 || i == 1651 || i == 1604 || i == 1603 || i == 1556 || i == 1555 || i == 1508 || i == 1507 || i == 1460 || i == 1459 || i == 1412 || i == 1411 || i == 1364 || i == 1363 || i == 1316 || i == 1315 || i == 1268 || i == 1267 || i == 1220 || i == 1219 || i == 1172 || i == 1171 || i == 1124 || i == 1123 || i == 1076 || i == 1075 || i == 1028 || i == 1027 || i == 980 || i == 979 || i == 932 || i == 931 || i == 884 || i == 883 || i == 836 || i == 835 || i == 788 || i == 787 || i == 740 || i == 739 || i == 692 || i == 691 || i == 644 || i == 643 || i == 596 || i == 595 || i == 548 || i == 547 || i == 500 || i == 499 || i == 452 || i == 451 || i == 404 || i == 403 || i == 356 || i == 355) {
          led.setPixelColor(i, led.Color(0, 255, 0));
        }
      }
      led.show();
      delay(1000);
      for (int i = 0; i < MAXLED; i++) {
        led.setPixelColor(i, led.Color(0, 0, 0));
      }
      for (int i = 0; i < MAXLED; i++) {
        if (i == 1591 || i == 1186 || i == 1185 || i == 1184 || i == 1183 || i == 1182 || i == 1181 || i == 1180 || i == 1179 || i == 1138 || i == 1137 || i == 1136 || i == 1135 || i == 1134 || i == 1133 || i == 1132 || i == 1131 || i == 1130 || i == 1082 || i == 1034 || i == 1033 || i == 985 || i == 937 || i == 889 || i == 842 || i == 841 || i == 794 || i == 758 || i == 757 || i == 756 || i == 755 || i == 754 || i == 753 || i == 752 || i == 751 || i == 750 || i == 749 || i == 748 || i == 747 || i == 746 || i == 709 || i == 708 || i == 707 || i == 706 || i == 705 || i == 704 || i == 703 || i == 702 || i == 701 || i == 700 || i == 699 || i == 807 || i == 806 || i == 855 || i == 904 || i == 903 || i == 953 || i == 952 || i == 1001 || i == 1000 || i == 1049 || i == 1048 || i == 1097 || i == 1096 || i == 1145 || i == 1144 || i == 1193 || i == 1192 || i == 1241 || i == 1240 || i == 1289 || i == 1288 || i == 1337 || i == 1336 || i == 1385 || i == 1384 || i == 1432 || i == 1431 || i == 1479 || i == 1527 || i == 1526 || i == 1574 || i == 1573 || i == 1621 || i == 1669 || i == 1668 || i == 1716 || i == 1715 || i == 1714 || i == 1713 || i == 1712 || i == 1711 || i == 1710 || i == 1709 || i == 1708 || i == 1707 || i == 1706 || i == 1763 || i == 1762 || i == 1761 || i == 1760 || i == 1759 || i == 1758 || i == 1757 || i == 1756 || i == 1755 || i == 1658 || i == 1610 || i == 1609 || i == 1561 || i == 1749 || i == 1748 || i == 1747 || i == 1746 || i == 1745 || i == 1744 || i == 1743 || i == 1742 || i == 1741 || i == 1740 || i == 1739 || i == 1738 || i == 1737 || i == 1736 || i == 1702 || i == 1701 || i == 1700 || i == 1699 || i == 1698 || i == 1697 || i == 1696 || i == 1695 || i == 1694 || i == 1693 || i == 1692 || i == 1691 || i == 1690 || i == 1689 || i == 1688 || i == 1687 || i == 1654 || i == 1639 || i == 1607 || i == 1606 || i == 1590 || i == 1559 || i == 1558 || i == 1543 || i == 1542 || i == 1511 || i == 1510 || i == 1495 || i == 1494 || i == 1463 || i == 1462 || i == 1447 || i == 1446 || i == 1415 || i == 1414 || i == 1367 || i == 1366 || i == 1319 || i == 1318 || i == 1271 || i == 1270 || i == 1223 || i == 1222 || i == 1175 || i == 1174 || i == 1127 || i == 1126 || i == 1079 || i == 1078 || i == 1031 || i == 1030 || i == 983 || i == 982 || i == 935 || i == 934 || i == 887 || i == 886 || i == 839 || i == 838 || i == 790 || i == 1399 || i == 1398 || i == 1351 || i == 1350 || i == 1303 || i == 1302 || i == 1255 || i == 1254 || i == 1207 || i == 1206 || i == 1159 || i == 1158 || i == 1111 || i == 1110 || i == 1063 || i == 1062 || i == 1015 || i == 1014 || i == 967 || i == 966 || i == 919 || i == 918 || i == 871 || i == 870 || i == 823 || i == 822 || i == 775 || i == 742 || i == 741 || i == 740 || i == 739 || i == 738 || i == 737 || i == 736 || i == 735 || i == 734 || i == 733 || i == 732 || i == 731 || i == 730 || i == 729 || i == 728 || i == 727 || i == 693 || i == 692 || i == 691 || i == 690 || i == 689 || i == 688 || i == 687 || i == 686 || i == 685 || i == 684 || i == 683 || i == 682 || i == 681 || i == 680) {
          led.setPixelColor(i, led.Color(255, 255, 255));
        }
      }
      led.show();
      delay(1000);
      for (int i = 0; i < MAXLED; i++) {
        led.setPixelColor(i, led.Color(0, 0, 0));
      }
      led.show();
      timestamp = 0;

      run = 1;
    }
    if (run == 1) {
      easter_counter = 0;
      for (int i = 0; i < MAXLED; i++) {
        led.setPixelColor(i, led.Color(0, 0, 0));
      }
      if ((flag_sw1 == 1) && (digitalRead(player_one) == 1)) {
        standby_Timer = 0;
        flag_sw1 = 0;
        speed1 += ACEL;
      }
      if ((flag_sw1 == 0) && (digitalRead(player_one) == 0)) {
        flag_sw1 = 1;
      }
      speed1 -= speed1 * kf;

      if ((flag_sw2 == 1) && (digitalRead(player_two) == 1)) {
        standby_Timer = 0;
        flag_sw2 = 0;
        speed2 += ACEL;
      }
      if ((flag_sw2 == 0) && (digitalRead(player_two) == 0)) {
        flag_sw2 = 1;
      }
      speed2 -= speed2 * kf;

      if ((flag_sw3 == 1) && (digitalRead(player_three) == 1)) {
        standby_Timer = 0;
        flag_sw3 = 0;
        speed3 += ACEL;
      }
      if ((flag_sw3 == 0) && (digitalRead(player_three) == 0)) {
        flag_sw3 = 1;
      }
      speed3 -= speed3 * kf;

      if ((flag_sw4 == 1) && (digitalRead(player_four) == 1)) {
        standby_Timer = 0;
        flag_sw4 = 0;
        speed4 += ACEL;
      }
      if ((flag_sw4 == 0) && (digitalRead(player_four) == 0)) {
        flag_sw4 = 1;
      }
      speed4 -= speed4 * kf;

      dist1 += speed1;
      dist2 += speed2;
      dist3 += speed3;
      dist4 += speed4;

      if (dist1 > dist2 && dist1 > dist3 && dist1 > dist4) {
        leader = 1;
      }
      if (dist2 > dist1 && dist2 > dist3 && dist2 > dist4) {
        leader = 2;
      }
      if (dist3 > dist1 && dist3 > dist2 && dist3 > dist4) {
        leader = 3;
      }
      if (dist4 > dist1 && dist4 > dist2 && dist4 > dist3) {
        leader = 4;
      }

      if (dist1 > MAXLED * loop1) {
        loop1++;
        tone(PIN_AUDIO, 600);
        TBEEP = 2;
      }
      if (dist2 > MAXLED * loop2) {
        loop2++;
        tone(PIN_AUDIO, 700);
        TBEEP = 2;
      }
      if (dist3 > MAXLED * loop3) {
        loop3++;
        tone(PIN_AUDIO, 800);
        TBEEP = 2;
      }
      if (dist4 > MAXLED * loop4) {
        loop4++;
        tone(PIN_AUDIO, 900);
        TBEEP = 2;
      }
      Serial.println(loop1);
      if (loop1 > loop_max) {
        for (int i = 0; i < MAXLED; i++) {
          led.setPixelColor(i, led.Color(255, 0, 0));
        }
        led.show();
        loop1 = 5;
        loop2 = 5;
        loop3 = 5;
        loop4 = 5;
        dist1 = 9216;
        dist2 = 9216;
        dist3 = 9216;
        dist4 = 9216;
        speed1 = 0;
        speed2 = 0;
        speed3 = 0;
        speed4 = 0;
        run = 0;
        timestamp = 0;
        delay(race_win_delay);
      }

      if (loop2 > loop_max) {
        for (int i = 0; i < MAXLED; i++) {
          led.setPixelColor(i, led.Color(0, 255, 0));
        }
        led.show();
        loop1 = 5;
        loop2 = 5;
        loop3 = 5;
        loop4 = 5;
        dist1 = 9216;
        dist2 = 9216;
        dist3 = 9216;
        dist4 = 9216;
        speed1 = 0;
        speed2 = 0;
        speed3 = 0;
        speed4 = 0;
        run = 0;
        timestamp = 0;
        delay(race_win_delay);
      }

      if (loop3 > loop_max) {
        for (int i = 0; i < MAXLED; i++) {
          led.setPixelColor(i, led.Color(0, 0, 255));
        }
        led.show();
        loop1 = 5;
        loop2 = 5;
        loop3 = 5;
        loop4 = 5;
        dist1 = 9216;
        dist2 = 9216;
        dist3 = 9216;
        dist4 = 9216;
        speed1 = 0;
        speed2 = 0;
        speed3 = 0;
        speed4 = 0;
        run = 0;
        timestamp = 0;
        delay(race_win_delay);
      }

      if (loop4 > loop_max) {
        for (int i = 0; i < MAXLED; i++) {
          led.setPixelColor(i, led.Color(255, 255, 255));
        }
        led.show();
        loop1 = 5;
        loop2 = 5;
        loop3 = 5;
        loop4 = 5;
        dist1 = 9216;
        dist2 = 9216;
        dist3 = 9216;
        dist4 = 9216;
        speed1 = 0;
        speed2 = 0;
        speed3 = 0;
        speed4 = 0;
        run = 0;
        timestamp = 0;
        delay(race_win_delay);
      }

      if ((millis() & 512) == (512 * draworder)) {
        if (draworder == 0) {
          draworder = 1;
        } else {
          draworder = 0;
        }
      }

      if (draworder == 0) {
        draw_car1();
        draw_car2();
        draw_car3();
        draw_car4();
      } else {
        draw_car4();
        draw_car3();
        draw_car2();
        draw_car1();
      }
      led.show();
      delay(tdelay);

      if (TBEEP > 0) {
        TBEEP -= 1;
        if (TBEEP == 0) {
          noTone(PIN_AUDIO);
        }
      }
    }
  }
}
//