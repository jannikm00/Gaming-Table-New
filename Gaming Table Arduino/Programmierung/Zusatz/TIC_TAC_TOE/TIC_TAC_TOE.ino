/TIC TAC TOE FUNKTIONEN//
void check_no_winner() {
  if (count_no_winner >= 9 && !player_x_win && !player_o_win) {
    no_winner = true;
  }
}
void check_win_tic_tac_toe() {
  //PLAYER X
  if (a1_used1 && a2_used1 && a3_used1) {
    player_x_win = true;
  }
  if (b1_used1 && b2_used1 && b3_used1) {
    player_x_win = true;
  }
  if (c1_used1 && c2_used1 && c3_used1) {
    player_x_win = true;
  }
  if (a1_used1 && b1_used1 && c1_used1) {
    player_x_win = true;
  }
  if (a2_used1 && b2_used1 && c2_used1) {
    player_x_win = true;
  }
  if (a3_used1 && b3_used1 && c3_used1) {
    player_x_win = true;
  }
  if (a1_used1 && b2_used1 && c3_used1) {
    player_x_win = true;
  }
  if (a3_used1 && b2_used1 && c1_used1) {
    player_x_win = true;
  }
  //PLAYER O
  if (a1_used2 && a2_used2 && a3_used2) {
    player_o_win = true;
  }
  if (b1_used2 && b2_used2 && b3_used2) {
    player_o_win = true;
  }
  if (c1_used2 && c2_used2 && c3_used2) {
    player_o_win = true;
  }
  if (a1_used2 && b1_used2 && c1_used2) {
    player_o_win = true;
  }
  if (a2_used2 && b2_used2 && c2_used2) {
    player_o_win = true;
  }
  if (a3_used2 && b3_used2 && c3_used2) {
    player_o_win = true;
  }
  if (a1_used2 && b2_used2 && c3_used2) {
    player_o_win = true;
  }
  if (a3_used2 && b2_used2 && c1_used2) {
    player_o_win = true;
  }
  check_no_winner();
  if (player_x_win) {
    delay(500);
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(0, 0, 0));
    }
    for (int i = 0; i < MAXLED; i++) {
      if (i == 1519 || i == 1470 || i == 1421 || i == 1372 || i == 1323 || i == 1274 || i == 1225 || i == 1176 || i == 1127 || i == 1078 || i == 1029 || i == 980 || i == 931 || i == 882 || i == 833 || i == 1223 || i == 1270 || i == 1317 || i == 1364 || i == 1411 || i == 1458 || i == 1505 || i == 1129 || i == 1082 || i == 1035 || i == 988 || i == 941 || i == 894 || i == 847) {
        led.setPixelColor(i, led.Color(255, 0, 0));
      }
    }
    led.show();
    player_x_win = false;
    ttt_start = 0;
    count_no_winner = 0;
    a1_used1 = false;
    a2_used1 = false;
    a3_used1 = false;
    b1_used1 = false;
    b2_used1 = false;
    b3_used1 = false;
    c1_used1 = false;
    c2_used1 = false;
    c3_used1 = false;
    a1_used2 = false;
    a2_used2 = false;
    a3_used2 = false;
    b1_used2 = false;
    b2_used2 = false;
    b3_used2 = false;
    c1_used2 = false;
    c2_used2 = false;
    c3_used2 = false;
    delay(2000);
  }
  if (player_o_win) {
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(0, 0, 0));
    }
    for (int i = 0; i < MAXLED; i++) {
      if (i == 1410 || i == 1362 || i == 1314 || i == 1266 || i == 1218 || i == 1170 || i == 1122 || i == 1074 || i == 1026 || i == 978 || i == 930 || i == 1469 || i == 1468 || i == 1467 || i == 1466 || i == 1465 || i == 1464 || i == 1463 || i == 1462 || i == 1461 || i == 1460 || i == 1459 || i == 1422 || i == 1374 || i == 1326 || i == 1278 || i == 1230 || i == 1182 || i == 1134 || i == 1086 || i == 1038 || i == 990 || i == 942 || i == 893 || i == 892 || i == 891 || i == 890 || i == 889 || i == 888 || i == 887 || i == 886 || i == 885 || i == 884 || i == 883) {
        led.setPixelColor(i, led.Color(0, 0, 255));
      }
    }
    led.show();
    player_o_win = false;
    ttt_start = 0;
    count_no_winner = 0;
    a1_used1 = false;
    a2_used1 = false;
    a3_used1 = false;
    b1_used1 = false;
    b2_used1 = false;
    b3_used1 = false;
    c1_used1 = false;
    c2_used1 = false;
    c3_used1 = false;
    a1_used2 = false;
    a2_used2 = false;
    a3_used2 = false;
    b1_used2 = false;
    b2_used2 = false;
    b3_used2 = false;
    c1_used2 = false;
    c2_used2 = false;
    c3_used2 = false;
    delay(2000);
  }
  if (no_winner) {
    delay(500);
    for (int i = 0; i < MAXLED; i++) {
      led.setPixelColor(i, led.Color(0, 0, 0));
    }
    for (int i = 0; i < MAXLED; i++) {
      if (i == 1519 || i == 1470 || i == 1421 || i == 1372 || i == 1323 || i == 1274 || i == 1225 || i == 1176 || i == 1127 || i == 1078 || i == 1029 || i == 980 || i == 931 || i == 882 || i == 833 || i == 1223 || i == 1270 || i == 1317 || i == 1364 || i == 1411 || i == 1458 || i == 1505 || i == 1129 || i == 1082 || i == 1035 || i == 988 || i == 941 || i == 894 || i == 847) {
        led.setPixelColor(i, led.Color(255, 0, 0));
      }
      if (i == 1410 || i == 1362 || i == 1314 || i == 1266 || i == 1218 || i == 1170 || i == 1122 || i == 1074 || i == 1026 || i == 978 || i == 930 || i == 1469 || i == 1468 || i == 1467 || i == 1466 || i == 1465 || i == 1464 || i == 1463 || i == 1462 || i == 1461 || i == 1460 || i == 1459 || i == 1422 || i == 1374 || i == 1326 || i == 1278 || i == 1230 || i == 1182 || i == 1134 || i == 1086 || i == 1038 || i == 990 || i == 942 || i == 893 || i == 892 || i == 891 || i == 890 || i == 889 || i == 888 || i == 887 || i == 886 || i == 885 || i == 884 || i == 883) {
        led.setPixelColor(i, led.Color(0, 0, 255));
      }
    }
    led.show();
    no_winner = false;
    count_no_winner = 0;
    ttt_start = 0;
    a1_used1 = false;
    a2_used1 = false;
    a3_used1 = false;
    b1_used1 = false;
    b2_used1 = false;
    b3_used1 = false;
    c1_used1 = false;
    c2_used1 = false;
    c3_used1 = false;
    a1_used2 = false;
    a2_used2 = false;
    a3_used2 = false;
    b1_used2 = false;
    b2_used2 = false;
    b3_used2 = false;
    c1_used2 = false;
    c2_used2 = false;
    c3_used2 = false;
    delay(2000);
  }
}
void select_field() {
  if (!beginner) {
    x_achse = analogRead(player_x_one);
    y_achse = analogRead(player_y_one);
  }
  if (beginner) {
    x_achse = analogRead(player_x_two);
    y_achse = analogRead(player_y_two);
  }
  if (x_achse >= 950) {
    x--;
    if (x <= 0) {
      x = 0;
    }
  }
  if (x_achse <= 150) {
    x++;
    if (x >= 2) {
      x = 2;
    }
  }
  if (y_achse >= 950) {
    y--;
    if (y <= 0) {
      y = 0;
    }
  }
  if (y_achse <= 150) {
    y++;
    if (y >= 2) {
      y = 2;
    }
  }
  //B2//
  if (x == 1 && y == 1) {
    status = 1;
  }
  //A2//
  if (x == 0 && y == 1) {
    status = 2;
  }
  //A3//
  if (x == 0 && y == 0) {
    status = 3;
  }
  //A1//
  if (x == 0 && y == 2) {
    status = 4;
  }
  //B3//
  if (x == 1 && y == 0) {
    status = 5;
  }
  //B1//
  if (x == 1 && y == 2) {
    status = 6;
  }
  //C2//
  if (x == 2 && y == 1) {
    status = 7;
  }
  //C3//
  if (x == 2 && y == 0) {
    status = 8;
  }
  //C1//
  if (x == 2 && y == 2) {
    status = 9;
  }
}
void draw_grid() {
  for (int i = 0; i < MAXLED; i++) {
    led.setPixelColor(i, led.Color(0, 0, 0));
  }
  for (int i = 16; i < MAXLED; i += 48) {
    led.setPixelColor(i, led.Color(255, 255, 255));
  }
  for (int i = 32; i < MAXLED; i += 48) {
    led.setPixelColor(i, led.Color(255, 255, 255));
  }
  for (int i = 768; i < 815; i++) {
    led.setPixelColor(i, led.Color(255, 255, 255));
  }
  for (int i = 1536; i < 1583; i++) {
    led.setPixelColor(i, led.Color(255, 255, 255));
  }

  if (a1_used1) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 2303 || i == 2254 || i == 2205 || i == 2156 || i == 2107 || i == 2058 || i == 2009 || i == 1960 || i == 1911 || i == 1862 || i == 1813 || i == 1764 || i == 1715 || i == 1666 || i == 1617 || i == 2007 || i == 2054 || i == 2101 || i == 2148 || i == 2195 || i == 2242 || i == 2289 || i == 1913 || i == 1866 || i == 1819 || i == 1772 || i == 1725 || i == 1678 || i == 1631) {
        led.setPixelColor(i, led.Color(255, 0, 0));
      }
    }
  }
  if (a2_used1) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 1535 || i == 1486 || i == 1437 || i == 1388 || i == 1339 || i == 1290 || i == 1241 || i == 1192 || i == 1143 || i == 1094 || i == 1045 || i == 996 || i == 947 || i == 898 || i == 849 || i == 1239 || i == 1286 || i == 1333 || i == 1380 || i == 1427 || i == 1474 || i == 1521 || i == 1145 || i == 1098 || i == 1051 || i == 1004 || i == 957 || i == 910 || i == 863) {
        led.setPixelColor(i, led.Color(255, 0, 0));
      }
    }
  }
  if (a3_used1) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 767 || i == 718 || i == 669 || i == 620 || i == 571 || i == 522 || i == 473 || i == 424 || i == 375 || i == 326 || i == 277 || i == 228 || i == 179 || i == 130 || i == 81 || i == 471 || i == 518 || i == 565 || i == 612 || i == 659 || i == 706 || i == 753 || i == 377 || i == 330 || i == 283 || i == 236 || i == 189 || i == 142 || i == 95) {
        led.setPixelColor(i, led.Color(255, 0, 0));
      }
    }
  }
  if (b1_used1) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 1601 || i == 2287 || i == 2238 || i == 2189 || i == 2140 || i == 2091 || i == 2042 || i == 1993 || i == 1944 | i == 1895 || i == 1846 || i == 1797 || i == 1748 || i == 1699 || i == 1650 || i == 1991 || i == 2038 || i == 2085 || i == 2132 || i == 2179 || i == 2226 || i == 2273 || i == 1897 || i == 1850 || i == 1803 || i == 1756 || i == 1709 || i == 1662 || i == 1615) {
        led.setPixelColor(i, led.Color(255, 0, 0));
      }
    }
  }
  if (b2_used1) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 1519 || i == 1470 || i == 1421 || i == 1372 || i == 1323 || i == 1274 || i == 1225 || i == 1176 || i == 1127 || i == 1078 || i == 1029 || i == 980 || i == 931 || i == 882 || i == 833 || i == 1223 || i == 1270 || i == 1317 || i == 1364 || i == 1411 || i == 1458 || i == 1505 || i == 1129 || i == 1082 || i == 1035 || i == 988 || i == 941 || i == 894 || i == 847) {
        led.setPixelColor(i, led.Color(255, 0, 0));
      }
    }
  }
  if (b3_used1) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 751 || i == 702 || i == 653 || i == 604 || i == 555 || i == 506 || i == 457 || i == 408 || i == 359 || i == 310 || i == 261 || i == 212 || i == 163 || i == 114 || i == 65 || i == 455 || i == 502 || i == 549 || i == 596 || i == 643 || i == 690 || i == 737 || i == 361 || i == 314 || i == 267 || i == 220 || i == 173 || i == 126 || i == 79) {
        led.setPixelColor(i, led.Color(255, 0, 0));
      }
    }
  }
  if (c1_used1) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 1585 || i == 2271 || i == 2222 || i == 2173 || i == 2124 || i == 2075 || i == 2026 || i == 1977 || i == 1928 || i == 1879 || i == 1830 || i == 1781 || i == 1732 || i == 1683 || i == 1634 || i == 1975 || i == 2022 || i == 2069 || i == 2116 || i == 2163 || i == 2210 || i == 2257 || i == 1881 || i == 1834 || i == 1787 || i == 1740 || i == 1693 || i == 1646 || i == 1599) {
        led.setPixelColor(i, led.Color(255, 0, 0));
      }
    }
  }
  if (c2_used1) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 1503 || i == 1454 || i == 1405 || i == 1356 || i == 1307 || i == 1258 || i == 1209 || i == 1160 || i == 1111 || i == 1062 || i == 1013 || i == 964 || i == 915 || i == 866 || i == 817 || i == 1207 || i == 1254 || i == 1301 || i == 1348 || i == 1395 || i == 1442 || i == 1489 || i == 1113 || i == 1066 || i == 1019 || i == 972 || i == 925 || i == 878 || i == 831) {
        led.setPixelColor(i, led.Color(255, 0, 0));
      }
    }
  }
  if (c3_used1) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 735 || i == 686 || i == 637 || i == 588 || i == 539 || i == 490 || i == 441 || i == 392 || i == 343 || i == 294 || i == 245 || i == 196 || i == 147 || i == 98 || i == 49 || i == 439 || i == 486 || i == 533 || i == 580 || i == 627 || i == 674 || i == 721 || i == 345 || i == 298 || i == 251 || i == 204 || i == 157 || i == 110 || i == 63) {
        led.setPixelColor(i, led.Color(255, 0, 0));
      }
    }
  }
  if (a1_used2) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 2194 || i == 2146 || i == 2098 || i == 2050 || i == 2002 || i == 1954 || i == 1906 || i == 1858 || i == 1810 || i == 1762 || i == 1714 || i == 2253 || i == 2252 || i == 2251 || i == 2250 || i == 2249 || i == 2248 || i == 2247 || i == 2246 || i == 2245 || i == 2244 || i == 2243 || i == 2206 || i == 2158 || i == 2110 || i == 2062 || i == 2014 || i == 1966 || i == 1918 || i == 1870 || i == 1822 || i == 1774 || i == 1726 || i == 1677 || i == 1676 || i == 1675 || i == 1674 || i == 1673 || i == 1672 || i == 1671 || i == 1670 || i == 1669 || i == 1668 || i == 1667) {
        led.setPixelColor(i, led.Color(0, 0, 255));
      }
    }
  }
  if (a2_used2) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 1426 || i == 1378 || i == 1330 || i == 1282 || i == 1234 || i == 1186 || i == 1138 || i == 1090 || i == 1042 || i == 994 || i == 946 || i == 1485 || i == 1484 || i == 1483 || i == 1482 || i == 1481 || i == 1480 || i == 1479 || i == 1478 || i == 1477 || i == 1476 || i == 1475 || i == 1438 || i == 1390 || i == 1342 || i == 1294 || i == 1246 || i == 1198 || i == 1150 || i == 1102 || i == 1054 || i == 1006 || i == 958 || i == 909 || i == 908 || i == 907 || i == 906 || i == 905 || i == 904 || i == 903 || i == 902 || i == 901 || i == 900 || i == 899) {
        led.setPixelColor(i, led.Color(0, 0, 255));
      }
    }
  }
  if (a3_used2) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 658 || i == 610 || i == 562 || i == 514 || i == 466 || i == 418 || i == 370 || i == 322 || i == 274 || i == 226 || i == 178 || i == 717 || i == 716 || i == 715 || i == 714 || i == 713 || i == 712 || i == 711 || i == 710 || i == 709 || i == 708 || i == 707 || i == 670 || i == 622 || i == 574 || i == 526 || i == 478 || i == 430 || i == 382 || i == 334 || i == 286 || i == 238 || i == 190 || i == 141 || i == 140 || i == 139 || i == 138 || i == 137 || i == 136 || i == 135 || i == 134 || i == 133 || i == 132 || i == 131) {
        led.setPixelColor(i, led.Color(0, 0, 255));
      }
    }
  }
  if (b1_used2) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 2178 || i == 2130 || i == 2082 || i == 2034 || i == 1986 || i == 1938 || i == 1890 || i == 1842 || i == 1794 || i == 1746 || i == 1698 || i == 2237 || i == 2236 || i == 2235 || i == 2234 || i == 2233 || i == 2232 || i == 2231 || i == 2230 || i == 2229 || i == 2228 || i == 2227 || i == 2190 || i == 2142 || i == 2094 || i == 2046 || i == 1998 || i == 1950 || i == 1902 || i == 1854 || i == 1806 || i == 1758 || i == 1710 || i == 1661 || i == 1660 || i == 1659 || i == 1658 || i == 1657 || i == 1656 || i == 1655 || i == 1654 || i == 1653 || i == 1652 || i == 1651) {
        led.setPixelColor(i, led.Color(0, 0, 255));
      }
    }
  }
  if (b2_used2) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 1410 || i == 1362 || i == 1314 || i == 1266 || i == 1218 || i == 1170 || i == 1122 || i == 1074 || i == 1026 || i == 978 || i == 930 || i == 1469 || i == 1468 || i == 1467 || i == 1466 || i == 1465 || i == 1464 || i == 1463 || i == 1462 || i == 1461 || i == 1460 || i == 1459 || i == 1422 || i == 1374 || i == 1326 || i == 1278 || i == 1230 || i == 1182 || i == 1134 || i == 1086 || i == 1038 || i == 990 || i == 942 || i == 893 || i == 892 || i == 891 || i == 890 || i == 889 || i == 888 || i == 887 || i == 886 || i == 885 || i == 884 || i == 883) {
        led.setPixelColor(i, led.Color(0, 0, 255));
      }
    }
  }
  if (b3_used2) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 642 || i == 594 || i == 546 || i == 498 || i == 450 || i == 402 || i == 354 || i == 306 || i == 258 || i == 210 || i == 162 || i == 701 || i == 700 || i == 699 || i == 698 || i == 697 || i == 696 || i == 695 || i == 694 || i == 693 || i == 692 || i == 691 || i == 654 || i == 606 || i == 558 || i == 510 || i == 462 || i == 414 || i == 366 || i == 318 || i == 270 || i == 222 || i == 174 || i == 125 || i == 124 || i == 123 || i == 122 || i == 121 || i == 120 || i == 119 || i == 118 || i == 117 || i == 116 || i == 115) {
        led.setPixelColor(i, led.Color(0, 0, 255));
      }
    }
  }
  if (c1_used2) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 1682 || i == 2221 || i == 2220 || i == 2162 || i == 2114 || i == 2066 || i == 2018 || i == 1970 || i == 1922 || i == 1874 || i == 1826 || i == 1778 || i == 1730 || i == 2219 || i == 2218 || i == 2217 || i == 2216 || i == 2215 || i == 2214 || i == 2213 || i == 2212 || i == 2211 || i == 2174 || i == 2126 || i == 2078 || i == 2030 || i == 1982 || i == 1934 || i == 1886 || i == 1838 || i == 1790 || i == 1742 || i == 1694 || i == 1645 || i == 1644 || i == 1643 || i == 1642 || i == 1641 || i == 1640 || i == 1639 || i == 1638 || i == 1637 || i == 1636 || i == 1635) {
        led.setPixelColor(i, led.Color(0, 0, 255));
      }
    }
  }
  if (c2_used2) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 1394 || i == 1346 || i == 1298 || i == 1250 || i == 1202 || i == 1154 || i == 1106 || i == 1058 || i == 1010 || i == 962 || i == 914 || i == 1453 || i == 1452 || i == 1451 || i == 1450 || i == 1449 || i == 1448 || i == 1447 || i == 1446 || i == 1445 || i == 1444 || i == 1443 || i == 1406 || i == 1358 || i == 1310 || i == 1262 || i == 1214 || i == 1166 || i == 1118 || i == 1070 || i == 1022 || i == 974 || i == 926 || i == 877 || i == 876 || i == 875 || i == 874 || i == 873 || i == 872 || i == 871 || i == 870 || i == 869 || i == 868 || i == 867) {
        led.setPixelColor(i, led.Color(0, 0, 255));
      }
    }
  }
  if (c3_used2) {
    for (int i = 0; i < MAXLED; i++) {
      if (i == 626 || i == 578 || i == 530 || i == 482 || i == 434 || i == 386 || i == 338 || i == 290 || i == 242 || i == 194 || i == 146 || i == 685 || i == 684 || i == 683 || i == 682 || i == 681 || i == 680 || i == 679 || i == 678 || i == 677 || i == 676 || i == 675 || i == 638 || i == 590 || i == 542 || i == 494 || i == 446 || i == 398 || i == 350 || i == 302 || i == 254 || i == 206 || i == 158 || i == 109 || i == 108 || i == 107 || i == 106 || i == 105 || i == 104 || i == 103 || i == 102 || i == 101 || i == 100 || i == 99) {
        led.setPixelColor(i, led.Color(0, 0, 255));
      }
    }
  }
  led.show();
}
//

void game_TWO_TIC_TAC_TOE() {
  if (select == 2) {
    if (ttt_start == 0) {
      draw_grid();
      select_beginner = random(10);
      if (select_beginner <= 5) {
        beginner = false;
      }
      if (select_beginner >= 6) {
        beginner = true;
      }
      ttt_start = 1;
    }
    if (ttt_start == 1) {
      draw_grid();
      select_field();
      easter_counter = 0;
      if (!beginner) {
        status_pressed = digitalRead(player_one);
        check_win_tic_tac_toe();
        if (status == 1) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 1519 || i == 1470 || i == 1421 || i == 1372 || i == 1323 || i == 1274 || i == 1225 || i == 1176 || i == 1127 || i == 1078 || i == 1029 || i == 980 || i == 931 || i == 882 || i == 833 || i == 1223 || i == 1270 || i == 1317 || i == 1364 || i == 1411 || i == 1458 || i == 1505 || i == 1129 || i == 1082 || i == 1035 || i == 988 || i == 941 || i == 894 || i == 847) {
              led.setPixelColor(i, led.Color(255, 0, 0));
            }
          }
          led.show();
          if (status_pressed == 1 && !b2_used1 && !b2_used2) {
            b2_used1 = true;
            beginner = true;
            count_no_winner += 1;
          }
        }
        if (status == 2) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 1535 || i == 1486 || i == 1437 || i == 1388 || i == 1339 || i == 1290 || i == 1241 || i == 1192 || i == 1143 || i == 1094 || i == 1045 || i == 996 || i == 947 || i == 898 || i == 849 || i == 1239 || i == 1286 || i == 1333 || i == 1380 || i == 1427 || i == 1474 || i == 1521 || i == 1145 || i == 1098 || i == 1051 || i == 1004 || i == 957 || i == 910 || i == 863) {
              led.setPixelColor(i, led.Color(255, 0, 0));
            }
          }
          led.show();
          if (status_pressed == 1 && !a2_used1 && !a2_used2) {
            a2_used1 = true;
            beginner = true;
            count_no_winner += 1;
          }
        }
        if (status == 3) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 767 || i == 718 || i == 669 || i == 620 || i == 571 || i == 522 || i == 473 || i == 424 || i == 375 || i == 326 || i == 277 || i == 228 || i == 179 || i == 130 || i == 81 || i == 471 || i == 518 || i == 565 || i == 612 || i == 659 || i == 706 || i == 753 || i == 377 || i == 330 || i == 283 || i == 236 || i == 189 || i == 142 || i == 95) {
              led.setPixelColor(i, led.Color(255, 0, 0));
            }
          }
          led.show();
          if (status_pressed == 1 && !a3_used1 && !a3_used2) {
            a3_used1 = true;
            beginner = true;
            count_no_winner += 1;
          }
        }
        if (status == 4) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 2303 || i == 2254 || i == 2205 || i == 2156 || i == 2107 || i == 2058 || i == 2009 || i == 1960 || i == 1911 || i == 1862 || i == 1813 || i == 1764 || i == 1715 || i == 1666 || i == 1617 || i == 2007 || i == 2054 || i == 2101 || i == 2148 || i == 2195 || i == 2242 || i == 2289 || i == 1913 || i == 1866 || i == 1819 || i == 1772 || i == 1725 || i == 1678 || i == 1631) {
              led.setPixelColor(i, led.Color(255, 0, 0));
            }
          }
          led.show();
          if (status_pressed == 1 && !a1_used1 && !a1_used2) {
            a1_used1 = true;
            beginner = true;
            count_no_winner += 1;
          }
        }
        if (status == 5) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 751 || i == 702 || i == 653 || i == 604 || i == 555 || i == 506 || i == 457 || i == 408 || i == 359 || i == 310 || i == 261 || i == 212 || i == 163 || i == 114 || i == 65 || i == 455 || i == 502 || i == 549 || i == 596 || i == 643 || i == 690 || i == 737 || i == 361 || i == 314 || i == 267 || i == 220 || i == 173 || i == 126 || i == 79) {
              led.setPixelColor(i, led.Color(255, 0, 0));
            }
          }
          led.show();
          if (status_pressed == 1 && !b3_used1 && !b3_used2) {
            b3_used1 = true;
            beginner = true;
            count_no_winner += 1;
          }
        }
        if (status == 6) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 2287 || i == 2238 || i == 2189 || i == 2140 || i == 2091 || i == 2042 || i == 1993 || i == 1944 | i == 1895 || i == 1846 || i == 1797 || i == 1748 || i == 1699 || i == 1650 || i == 1991 || i == 2038 || i == 2085 || i == 2132 || i == 2179 || i == 2226 || i == 2273 || i == 1897 || i == 1850 || i == 1803 || i == 1756 || i == 1709 || i == 1662 || i == 1615) {
              led.setPixelColor(i, led.Color(255, 0, 0));
            }
          }
          led.show();
          if (status_pressed == 1 && !b1_used1 && !b1_used2) {
            b1_used1 = true;
            beginner = true;
            count_no_winner += 1;
          }
        }
        if (status == 7) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 1503 || i == 1454 || i == 1405 || i == 1356 || i == 1307 || i == 1258 || i == 1209 || i == 1160 || i == 1111 || i == 1062 || i == 1013 || i == 964 || i == 915 || i == 866 || i == 817 || i == 1207 || i == 1254 || i == 1301 || i == 1348 || i == 1395 || i == 1442 || i == 1489 || i == 1113 || i == 1066 || i == 1019 || i == 972 || i == 925 || i == 878 || i == 831) {
              led.setPixelColor(i, led.Color(255, 0, 0));
            }
          }
          led.show();
          if (status_pressed == 1 && !c2_used1 && !c2_used2) {
            c2_used1 = true;
            beginner = true;
            count_no_winner += 1;
          }
        }
        if (status == 8) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 735 || i == 686 || i == 637 || i == 588 || i == 539 || i == 490 || i == 441 || i == 392 || i == 343 || i == 294 || i == 245 || i == 196 || i == 147 || i == 98 || i == 49 || i == 439 || i == 486 || i == 533 || i == 580 || i == 627 || i == 674 || i == 721 || i == 345 || i == 298 || i == 251 || i == 204 || i == 157 || i == 110 || i == 63) {
              led.setPixelColor(i, led.Color(255, 0, 0));
            }
          }
          led.show();
          if (status_pressed == 1 && !c3_used1 && !c3_used2) {
            c3_used1 = true;
            beginner = true;
            count_no_winner += 1;
          }
        }
        if (status == 9) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 1585 || i == 2271 || i == 2222 || i == 2173 || i == 2124 || i == 2075 || i == 2026 || i == 1977 || i == 1928 || i == 1879 || i == 1830 || i == 1781 || i == 1732 || i == 1683 || i == 1634 || i == 1975 || i == 2022 || i == 2069 || i == 2116 || i == 2163 || i == 2210 || i == 2257 || i == 1881 || i == 1834 || i == 1787 || i == 1740 || i == 1693 || i == 1646 || i == 1599) {
              led.setPixelColor(i, led.Color(255, 0, 0));
            }
          }
          led.show();
          if (status_pressed == 1 && !c1_used1 && !c1_used2) {
            c1_used1 = true;
            beginner = true;
            count_no_winner += 1;
          }
        }
      }
      if (beginner) {
        status_pressed1 = digitalRead(player_two);
        check_win_tic_tac_toe();
        if (status == 1) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 1410 || i == 1362 || i == 1314 || i == 1266 || i == 1218 || i == 1170 || i == 1122 || i == 1074 || i == 1026 || i == 978 || i == 930 || i == 1469 || i == 1468 || i == 1467 || i == 1466 || i == 1465 || i == 1464 || i == 1463 || i == 1462 || i == 1461 || i == 1460 || i == 1459 || i == 1422 || i == 1374 || i == 1326 || i == 1278 || i == 1230 || i == 1182 || i == 1134 || i == 1086 || i == 1038 || i == 990 || i == 942 || i == 893 || i == 892 || i == 891 || i == 890 || i == 889 || i == 888 || i == 887 || i == 886 || i == 885 || i == 884 || i == 883) {
              led.setPixelColor(i, led.Color(0, 0, 255));
            }
          }
          led.show();
          if (status_pressed1 == 1 && !b2_used1 && !b2_used2) {
            b2_used2 = true;
            beginner = false;
            count_no_winner += 1;
          }
        }
        if (status == 2) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 1426 || i == 1378 || i == 1330 || i == 1282 || i == 1234 || i == 1186 || i == 1138 || i == 1090 || i == 1042 || i == 994 || i == 946 || i == 1485 || i == 1484 || i == 1483 || i == 1482 || i == 1481 || i == 1480 || i == 1479 || i == 1478 || i == 1477 || i == 1476 || i == 1475 || i == 1438 || i == 1390 || i == 1342 || i == 1294 || i == 1246 || i == 1198 || i == 1150 || i == 1102 || i == 1054 || i == 1006 || i == 958 || i == 909 || i == 908 || i == 907 || i == 906 || i == 905 || i == 904 || i == 903 || i == 902 || i == 901 || i == 900 || i == 899) {
              led.setPixelColor(i, led.Color(0, 0, 255));
            }
          }
          led.show();
          if (status_pressed1 == 1 && !a2_used1 && !a2_used2) {
            a2_used2 = true;
            beginner = false;
            count_no_winner += 1;
          }
        }
        if (status == 3) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 658 || i == 610 || i == 562 || i == 514 || i == 466 || i == 418 || i == 370 || i == 322 || i == 274 || i == 226 || i == 178 || i == 717 || i == 716 || i == 715 || i == 714 || i == 713 || i == 712 || i == 711 || i == 710 || i == 709 || i == 708 || i == 707 || i == 670 || i == 622 || i == 574 || i == 526 || i == 478 || i == 430 || i == 382 || i == 334 || i == 286 || i == 238 || i == 190 || i == 141 || i == 140 || i == 139 || i == 138 || i == 137 || i == 136 || i == 135 || i == 134 || i == 133 || i == 132 || i == 131) {
              led.setPixelColor(i, led.Color(0, 0, 255));
            }
          }
          led.show();
          if (status_pressed1 == 1 && !a3_used1 && !a3_used2) {
            a3_used2 = true;
            beginner = false;
            count_no_winner += 1;
          }
        }
        if (status == 4) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 2194 || i == 2146 || i == 2098 || i == 2050 || i == 2002 || i == 1954 || i == 1906 || i == 1858 || i == 1810 || i == 1762 || i == 1714 || i == 2253 || i == 2252 || i == 2251 || i == 2250 || i == 2249 || i == 2248 || i == 2247 || i == 2246 || i == 2245 || i == 2244 || i == 2243 || i == 2206 || i == 2158 || i == 2110 || i == 2062 || i == 2014 || i == 1966 || i == 1918 || i == 1870 || i == 1822 || i == 1774 || i == 1726 || i == 1677 || i == 1676 || i == 1675 || i == 1674 || i == 1673 || i == 1672 || i == 1671 || i == 1670 || i == 1669 || i == 1668 || i == 1667) {
              led.setPixelColor(i, led.Color(0, 0, 255));
            }
          }
          led.show();
          if (status_pressed1 == 1 && !a1_used1 && !a1_used2) {
            a1_used2 = true;
            beginner = false;
            count_no_winner += 1;
          }
        }
        if (status == 5) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 642 || i == 594 || i == 546 || i == 498 || i == 450 || i == 402 || i == 354 || i == 306 || i == 258 || i == 210 || i == 162 || i == 701 || i == 700 || i == 699 || i == 698 || i == 697 || i == 696 || i == 695 || i == 694 || i == 693 || i == 692 || i == 691 || i == 654 || i == 606 || i == 558 || i == 510 || i == 462 || i == 414 || i == 366 || i == 318 || i == 270 || i == 222 || i == 174 || i == 125 || i == 124 || i == 123 || i == 122 || i == 121 || i == 120 || i == 119 || i == 118 || i == 117 || i == 116 || i == 115) {
              led.setPixelColor(i, led.Color(0, 0, 255));
            }
          }
          led.show();
          if (status_pressed1 == 1 && !b3_used1 && !b3_used2) {
            b3_used2 = true;
            beginner = false;
            count_no_winner += 1;
          }
        }
        if (status == 6) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 2178 || i == 2130 || i == 2082 || i == 2034 || i == 1986 || i == 1938 || i == 1890 || i == 1842 || i == 1794 || i == 1746 || i == 1698 || i == 2237 || i == 2236 || i == 2235 || i == 2234 || i == 2233 || i == 2232 || i == 2231 || i == 2230 || i == 2229 || i == 2228 || i == 2227 || i == 2190 || i == 2142 || i == 2094 || i == 2046 || i == 1998 || i == 1950 || i == 1902 || i == 1854 || i == 1806 || i == 1758 || i == 1710 || i == 1661 || i == 1660 || i == 1659 || i == 1658 || i == 1657 || i == 1656 || i == 1655 || i == 1654 || i == 1653 || i == 1652 || i == 1651) {
              led.setPixelColor(i, led.Color(0, 0, 255));
            }
          }
          led.show();
          if (status_pressed1 == 1 && !b1_used1 && !b1_used2) {
            b1_used2 = true;
            beginner = false;
            count_no_winner += 1;
          }
        }
        if (status == 7) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 1394 || i == 1346 || i == 1298 || i == 1250 || i == 1202 || i == 1154 || i == 1106 || i == 1058 || i == 1010 || i == 962 || i == 914 || i == 1453 || i == 1452 || i == 1451 || i == 1450 || i == 1449 || i == 1448 || i == 1447 || i == 1446 || i == 1445 || i == 1444 || i == 1443 || i == 1406 || i == 1358 || i == 1310 || i == 1262 || i == 1214 || i == 1166 || i == 1118 || i == 1070 || i == 1022 || i == 974 || i == 926 || i == 877 || i == 876 || i == 875 || i == 874 || i == 873 || i == 872 || i == 871 || i == 870 || i == 869 || i == 868 || i == 867) {
              led.setPixelColor(i, led.Color(0, 0, 255));
            }
          }
          led.show();
          if (status_pressed1 == 1 && !c2_used1 && !c2_used2) {
            c2_used2 = true;
            beginner = false;
            count_no_winner += 1;
          }
        }
        if (status == 8) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 626 || i == 578 || i == 530 || i == 482 || i == 434 || i == 386 || i == 338 || i == 290 || i == 242 || i == 194 || i == 146 || i == 685 || i == 684 || i == 683 || i == 682 || i == 681 || i == 680 || i == 679 || i == 678 || i == 677 || i == 676 || i == 675 || i == 638 || i == 590 || i == 542 || i == 494 || i == 446 || i == 398 || i == 350 || i == 302 || i == 254 || i == 206 || i == 158 || i == 109 || i == 108 || i == 107 || i == 106 || i == 105 || i == 104 || i == 103 || i == 102 || i == 101 || i == 100 || i == 99) {
              led.setPixelColor(i, led.Color(0, 0, 255));
            }
          }
          led.show();
          if (status_pressed1 == 1 && !c3_used1 && !c3_used2) {
            c3_used2 = true;
            beginner = false;
            count_no_winner += 1;
          }
        }
        if (status == 9) {
          for (int i = 0; i < MAXLED; i++) {
            if (i == 1682 || i == 2221 || i == 2220 || i == 2162 || i == 2114 || i == 2066 || i == 2018 || i == 1970 || i == 1922 || i == 1874 || i == 1826 || i == 1778 || i == 1730 || i == 2219 || i == 2218 || i == 2217 || i == 2216 || i == 2215 || i == 2214 || i == 2213 || i == 2212 || i == 2211 || i == 2174 || i == 2126 || i == 2078 || i == 2030 || i == 1982 || i == 1934 || i == 1886 || i == 1838 || i == 1790 || i == 1742 || i == 1694 || i == 1645 || i == 1644 || i == 1643 || i == 1642 || i == 1641 || i == 1640 || i == 1639 || i == 1638 || i == 1637 || i == 1636 || i == 1635) {
              led.setPixelColor(i, led.Color(0, 0, 255));
            }
          }
          led.show();
          if (status_pressed1 == 1 && !c1_used1 && !c1_used2) {
            c1_used2 = true;
            beginner = false;
            count_no_winner += 1;
          }
        }
      }
    }
  }
}
//
