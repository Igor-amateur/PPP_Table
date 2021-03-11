#include "stdafx.h"
#include "Table_E.h"
#include"density.h"
#include"temperature.h"

using density::KgMC;
using temperature::DgCs;

const table::ThisTable DATA_E1{
	{
		{ KgMC(6500),{ { 1533 },{ 1540 },{ 1548 },{ 1555 },{ 1562 },{ 1570 },{ 1577 },{ 1584 },{ 1591 },{ 1599 },{ 1606 },{ 1613 },{ 1620 },{ 1627 },{ 1634 },{ 1641 },{ 1648 },{ 1655 },{ 1662 },{ 1669 },{ 1676 },{ 1683 },{ 1690 },{ 1697 },{ 1704 },{ 1711 },{ 1717 },{ 1724 },{ 1731 },{ 1738 },{ 1744 },{ 1751 },{ 1758 },{ 1764 },{ 1771 },{ 1777 },{ 1784 },{ 1791 },{ 1797 },{ 1804 },{ 1810 },{ 1816 },{ 1823 },{ 1829 },{ 1836 },{ 1842 },{ 1848 },{ 1855 },{ 1861 },{ 1867 },{ 1873 },{ 1880 },{ 1886 },{ 1892 },{ 1898 },{ 1904 },{ 1911 },{ 1917 },{ 1923 },{ 1929 },{ 1935 },{ 1941 },{ 1947 },{ 1953 },{ 1959 },{ 1965 } } },
		{ KgMC(6600),{ { 1432 },{ 1439 },{ 1446 },{ 1453 },{ 1460 },{ 1467 },{ 1474 },{ 1481 },{ 1487 },{ 1494 },{ 1501 },{ 1508 },{ 1514 },{ 1521 },{ 1528 },{ 1534 },{ 1541 },{ 1547 },{ 1554 },{ 1561 },{ 1567 },{ 1574 },{ 1580 },{ 1587 },{ 1593 },{ 1599 },{ 1606 },{ 1612 },{ 1619 },{ 1625 },{ 1631 },{ 1638 },{ 1644 },{ 1650 },{ 1656 },{ 1663 },{ 1669 },{ 1675 },{ 1681 },{ 1687 },{ 1694 },{ 1700 },{ 1706 },{ 1712 },{ 1718 },{ 1724 },{ 1730 },{ 1736 },{ 1742 },{ 1748 },{ 1754 },{ 1760 },{ 1766 },{ 1772 },{ 1777 },{ 1783 },{ 1789 },{ 1795 },{ 1801 },{ 1807 },{ 1812 },{ 1818 },{ 1824 },{ 1829 },{ 1835 },{ 1841 } } },
		{ KgMC(6700),{ { 1343 },{ 1350 },{ 1356 },{ 1362 },{ 1369 },{ 1375 },{ 1382 },{ 1388 },{ 1395 },{ 1401 },{ 1407 },{ 1414 },{ 1420 },{ 1426 },{ 1432 },{ 1439 },{ 1445 },{ 1451 },{ 1457 },{ 1464 },{ 1470 },{ 1476 },{ 1482 },{ 1488 },{ 1494 },{ 1500 },{ 1506 },{ 1512 },{ 1518 },{ 1524 },{ 1530 },{ 1536 },{ 1542 },{ 1548 },{ 1554 },{ 1560 },{ 1566 },{ 1572 },{ 1578 },{ 1583 },{ 1589 },{ 1595 },{ 1601 },{ 1607 },{ 1612 },{ 1618 },{ 1624 },{ 1630 },{ 1635 },{ 1641 },{ 1647 },{ 1652 },{ 1658 },{ 1663 },{ 1669 },{ 1675 },{ 1680 },{ 1686 },{ 1691 },{ 1697 },{ 1702 },{ 1708 },{ 1713 },{ 1719 },{ 1724 },{ 1729 } } },
		{ KgMC(6800),{ { 1263 },{ 1269 },{ 1275 },{ 1281 },{ 1288 },{ 1294 },{ 1300 },{ 1306 },{ 1312 },{ 1318 },{ 1324 },{ 1330 },{ 1335 },{ 1341 },{ 1347 },{ 1353 },{ 1359 },{ 1365 },{ 1371 },{ 1377 },{ 1382 },{ 1388 },{ 1394 },{ 1400 },{ 1406 },{ 1411 },{ 1417 },{ 1423 },{ 1428 },{ 1434 },{ 1440 },{ 1445 },{ 1451 },{ 1457 },{ 1462 },{ 1468 },{ 1473 },{ 1479 },{ 1485 },{ 1490 },{ 1496 },{ 1501 },{ 1507 },{ 1512 },{ 1518 },{ 1523 },{ 1528 },{ 1534 },{ 1539 },{ 1545 },{ 1550 },{ 1555 },{ 1561 },{ 1566 },{ 1571 },{ 1577 },{ 1582 },{ 1587 },{ 1592 },{ 1598 },{ 1603 },{ 1608 },{ 1613 },{ 1619 },{ 1624 },{ 1629 } } },
		{ KgMC(6900),{ { 1192 },{ 1197 },{ 1203 },{ 1209 },{ 1214 },{ 1220 },{ 1226 },{ 1231 },{ 1237 },{ 1243 },{ 1248 },{ 1254 },{ 1260 },{ 1265 },{ 1271 },{ 1276 },{ 1282 },{ 1287 },{ 1293 },{ 1298 },{ 1304 },{ 1309 },{ 1315 },{ 1320 },{ 1326 },{ 1331 },{ 1337 },{ 1342 },{ 1347 },{ 1353 },{ 1358 },{ 1364 },{ 1369 },{ 1374 },{ 1380 },{ 1385 },{ 1390 },{ 1395 },{ 1401 },{ 1406 },{ 1411 },{ 1416 },{ 1422 },{ 1427 },{ 1432 },{ 1437 },{ 1442 },{ 1447 },{ 1453 },{ 1458 },{ 1463 },{ 1468 },{ 1473 },{ 1478 },{ 1483 },{ 1488 },{ 1493 },{ 1498 },{ 1503 },{ 1508 },{ 1513 },{ 1518 },{ 1523 },{ 1528 },{ 1533 },{ 1538 } } },
		{ KgMC(7000),{ { 1127 },{ 1132 },{ 1138 },{ 1143 },{ 1149 },{ 1154 },{ 1159 },{ 1165 },{ 1170 },{ 1175 },{ 1181 },{ 1186 },{ 1191 },{ 1197 },{ 1202 },{ 1207 },{ 1212 },{ 1218 },{ 1223 },{ 1228 },{ 1233 },{ 1238 },{ 1244 },{ 1249 },{ 1254 },{ 1259 },{ 1264 },{ 1269 },{ 1274 },{ 1279 },{ 1285 },{ 1290 },{ 1295 },{ 1300 },{ 1305 },{ 1310 },{ 1315 },{ 1320 },{ 1325 },{ 1330 },{ 1335 },{ 1340 },{ 1345 },{ 1350 },{ 1355 },{ 1359 },{ 1364 },{ 1369 },{ 1374 },{ 1379 },{ 1384 },{ 1389 },{ 1394 },{ 1398 },{ 1403 },{ 1408 },{ 1413 },{ 1418 },{ 1422 },{ 1427 },{ 1432 },{ 1437 },{ 1441 },{ 1446 },{ 1451 },{ 1455 } } },
		{ KgMC(7100),{ { 1069 },{ 1074 },{ 1079 },{ 1084 },{ 1089 },{ 1094 },{ 1099 },{ 1104 },{ 1109 },{ 1114 },{ 1119 },{ 1124 },{ 1129 },{ 1134 },{ 1139 },{ 1144 },{ 1149 },{ 1154 },{ 1159 },{ 1164 },{ 1169 },{ 1174 },{ 1179 },{ 1184 },{ 1189 },{ 1194 },{ 1198 },{ 1203 },{ 1208 },{ 1213 },{ 1218 },{ 1223 },{ 1227 },{ 1232 },{ 1237 },{ 1242 },{ 1247 },{ 1251 },{ 1256 },{ 1261 },{ 1265 },{ 1270 },{ 1275 },{ 1280 },{ 1284 },{ 1289 },{ 1294 },{ 1298 },{ 1303 },{ 1308 },{ 1312 },{ 1317 },{ 1321 },{ 1326 },{ 1331 },{ 1335 },{ 1340 },{ 1344 },{ 1349 },{ 1353 },{ 1358 },{ 1362 },{ 1367 },{ 1371 },{ 1376 },{ 1380 } } },
		{ KgMC(7200),{ { 1016 },{ 1020 },{ 1026 },{ 1031 },{ 1035 },{ 1040 },{ 1045 },{ 1050 },{ 1054 },{ 1059 },{ 1064 },{ 1069 },{ 1073 },{ 1078 },{ 1083 },{ 1088 },{ 1092 },{ 1097 },{ 1102 },{ 1106 },{ 1111 },{ 1116 },{ 1120 },{ 1125 },{ 1130 },{ 1134 },{ 1139 },{ 1143 },{ 1148 },{ 1153 },{ 1157 },{ 1162 },{ 1166 },{ 1171 },{ 1175 },{ 1180 },{ 1184 },{ 1189 },{ 1193 },{ 1198 },{ 1202 },{ 1207 },{ 1211 },{ 1216 },{ 1220 },{ 1225 },{ 1229 },{ 1234 },{ 1238 },{ 1242 },{ 1247 },{ 1251 },{ 1256 },{ 1260 },{ 1264 },{ 1269 },{ 1273 },{ 1277 },{ 1282 },{ 1286 },{ 1290 },{ 1295 },{ 1299 },{ 1303 },{ 1308 },{ 1312 } } },
		{ KgMC(7300),{ { 968 },{ 973 },{ 977 },{ 982 },{ 986 },{ 991 },{ 995 },{ 1000 },{ 1004 },{ 1008 },{ 1012 },{ 1018 },{ 1022 },{ 1027 },{ 1031 },{ 1036 },{ 1040 },{ 1045 },{ 1049 },{ 1054 },{ 1058 },{ 1062 },{ 1067 },{ 1071 },{ 1076 },{ 1080 },{ 1084 },{ 1089 },{ 1093 },{ 1097 },{ 1102 },{ 1106 },{ 1110 },{ 1115 },{ 1119 },{ 1123 },{ 1128 },{ 1132 },{ 1136 },{ 1141 },{ 1145 },{ 1149 },{ 1153 },{ 1158 },{ 1162 },{ 1166 },{ 1170 },{ 1175 },{ 1179 },{ 1183 },{ 1187 },{ 1191 },{ 1196 },{ 1200 },{ 1204 },{ 1208 },{ 1212 },{ 1216 },{ 1220 },{ 1225 },{ 1229 },{ 1233 },{ 1237 },{ 1241 },{ 1245 },{ 1249 } } },
		{ KgMC(7400),{ { 924 },{ 929 },{ 933 },{ 937 },{ 942 },{ 946 },{ 950 },{ 955 },{ 959 },{ 963 },{ 967 },{ 972 },{ 976 },{ 980 },{ 984 },{ 989 },{ 993 },{ 997 },{ 1000 },{ 1004 },{ 1010 },{ 1014 },{ 1018 },{ 1022 },{ 1026 },{ 1031 },{ 1035 },{ 1039 },{ 1043 },{ 1047 },{ 1051 },{ 1055 },{ 1060 },{ 1064 },{ 1068 },{ 1072 },{ 1076 },{ 1080 },{ 1084 },{ 1088 },{ 1092 },{ 1096 },{ 1100 },{ 1104 },{ 1108 },{ 1112 },{ 1117 },{ 1121 },{ 1125 },{ 1129 },{ 1133 },{ 1137 },{ 1141 },{ 1145 },{ 1148 },{ 1152 },{ 1156 },{ 1160 },{ 1164 },{ 1168 },{ 1172 },{ 1176 },{ 1180 },{ 1184 },{ 1188 },{ 1192 } } },
		{ KgMC(7500),{ { 884 },{ 889 },{ 893 },{ 897 },{ 901 },{ 905 },{ 909 },{ 913 },{ 917 },{ 921 },{ 925 },{ 929 },{ 933 },{ 937 },{ 941 },{ 945 },{ 949 },{ 953 },{ 957 },{ 961 },{ 965 },{ 969 },{ 973 },{ 977 },{ 981 },{ 985 },{ 989 },{ 993 },{ 997 },{ 1000 },{ 1004 },{ 1008 },{ 1012 },{ 1016 },{ 1020 },{ 1025 },{ 1028 },{ 1032 },{ 1036 },{ 1040 },{ 1044 },{ 1048 },{ 1052 },{ 1056 },{ 1059 },{ 1063 },{ 1067 },{ 1071 },{ 1075 },{ 1079 },{ 1082 },{ 1086 },{ 1090 },{ 1094 },{ 1098 },{ 1101 },{ 1105 },{ 1109 },{ 1113 },{ 1116 },{ 1120 },{ 1124 },{ 1128 },{ 1131 },{ 1135 },{ 1139 } } },
		{ KgMC(7600),{ { 848 },{ 852 },{ 856 },{ 859 },{ 863 },{ 867 },{ 871 },{ 875 },{ 879 },{ 883 },{ 887 },{ 890 },{ 894 },{ 898 },{ 902 },{ 906 },{ 909 },{ 913 },{ 917 },{ 921 },{ 925 },{ 929 },{ 932 },{ 936 },{ 940 },{ 944 },{ 947 },{ 951 },{ 955 },{ 959 },{ 962 },{ 966 },{ 970 },{ 974 },{ 977 },{ 981 },{ 985 },{ 989 },{ 992 },{ 996 },{ 1000 },{ 1002 },{ 1006 },{ 1010 },{ 1014 },{ 1018 },{ 1022 },{ 1025 },{ 1029 },{ 1033 },{ 1036 },{ 1040 },{ 1044 },{ 1047 },{ 1051 },{ 1054 },{ 1058 },{ 1062 },{ 1065 },{ 1069 },{ 1072 },{ 1076 },{ 1080 },{ 1083 },{ 1087 },{ 1090 } } },
		{ KgMC(7700),{ { 814 },{ 818 },{ 822 },{ 825 },{ 829 },{ 833 },{ 836 },{ 840 },{ 844 },{ 847 },{ 851 },{ 855 },{ 858 },{ 862 },{ 866 },{ 869 },{ 873 },{ 876 },{ 880 },{ 884 },{ 887 },{ 891 },{ 895 },{ 898 },{ 902 },{ 905 },{ 909 },{ 913 },{ 916 },{ 920 },{ 923 },{ 927 },{ 930 },{ 934 },{ 938 },{ 941 },{ 945 },{ 948 },{ 952 },{ 955 },{ 959 },{ 962 },{ 966 },{ 969 },{ 973 },{ 976 },{ 980 },{ 983 },{ 987 },{ 990 },{ 994 },{ 997 },{ 1000 },{ 1004 },{ 1008 },{ 1010 },{ 1014 },{ 1018 },{ 1020 },{ 1025 },{ 1028 },{ 1032 },{ 1035 },{ 1039 },{ 1042 },{ 1045 } } },
		{ KgMC(7800),{ { 783 },{ 787 },{ 790 },{ 794 },{ 797 },{ 801 },{ 804 },{ 808 },{ 811 },{ 815 },{ 818 },{ 822 },{ 825 },{ 829 },{ 832 },{ 836 },{ 839 },{ 843 },{ 846 },{ 849 },{ 853 },{ 856 },{ 860 },{ 863 },{ 867 },{ 870 },{ 873 },{ 877 },{ 880 },{ 884 },{ 887 },{ 891 },{ 894 },{ 897 },{ 901 },{ 904 },{ 908 },{ 911 },{ 914 },{ 918 },{ 921 },{ 924 },{ 928 },{ 931 },{ 935 },{ 938 },{ 941 },{ 945 },{ 948 },{ 951 },{ 955 },{ 958 },{ 961 },{ 965 },{ 968 },{ 971 },{ 974 },{ 978 },{ 981 },{ 984 },{ 988 },{ 991 },{ 994 },{ 997 },{ 1000 },{ 1004 } } },
		{ KgMC(7900),{ { 755 },{ 758 },{ 761 },{ 765 },{ 768 },{ 771 },{ 775 },{ 778 },{ 781 },{ 785 },{ 788 },{ 791 },{ 795 },{ 798 },{ 801 },{ 805 },{ 808 },{ 811 },{ 814 },{ 818 },{ 821 },{ 824 },{ 828 },{ 831 },{ 834 },{ 837 },{ 841 },{ 844 },{ 847 },{ 851 },{ 854 },{ 857 },{ 860 },{ 864 },{ 867 },{ 870 },{ 873 },{ 876 },{ 880 },{ 883 },{ 886 },{ 889 },{ 893 },{ 896 },{ 899 },{ 902 },{ 905 },{ 909 },{ 912 },{ 915 },{ 918 },{ 921 },{ 925 },{ 928 },{ 931 },{ 934 },{ 937 },{ 940 },{ 944 },{ 947 },{ 950 },{ 953 },{ 956 },{ 959 },{ 962 },{ 966 } } },
		{ KgMC(8000),{ { 728 },{ 731 },{ 734 },{ 738 },{ 741 },{ 744 },{ 747 },{ 750 },{ 754 },{ 757 },{ 760 },{ 763 },{ 766 },{ 769 },{ 773 },{ 776 },{ 779 },{ 782 },{ 785 },{ 788 },{ 792 },{ 795 },{ 798 },{ 801 },{ 804 },{ 807 },{ 810 },{ 813 },{ 817 },{ 820 },{ 823 },{ 826 },{ 829 },{ 832 },{ 835 },{ 838 },{ 841 },{ 845 },{ 848 },{ 851 },{ 854 },{ 857 },{ 860 },{ 863 },{ 866 },{ 869 },{ 872 },{ 875 },{ 878 },{ 881 },{ 884 },{ 888 },{ 891 },{ 894 },{ 897 },{ 900 },{ 903 },{ 906 },{ 909 },{ 912 },{ 915 },{ 918 },{ 921 },{ 924 },{ 927 },{ 930 } } },
		{ KgMC(8100),{ { 704 },{ 707 },{ 710 },{ 713 },{ 716 },{ 719 },{ 722 },{ 725 },{ 728 },{ 731 },{ 734 },{ 737 },{ 740 },{ 743 },{ 746 },{ 749 },{ 752 },{ 755 },{ 758 },{ 761 },{ 764 },{ 767 },{ 770 },{ 773 },{ 776 },{ 779 },{ 782 },{ 785 },{ 788 },{ 791 },{ 794 },{ 797 },{ 800 },{ 803 },{ 806 },{ 809 },{ 812 },{ 815 },{ 818 },{ 821 },{ 824 },{ 827 },{ 830 },{ 833 },{ 836 },{ 839 },{ 841 },{ 844 },{ 847 },{ 850 },{ 853 },{ 856 },{ 859 },{ 862 },{ 865 },{ 868 },{ 871 },{ 874 },{ 876 },{ 879 },{ 882 },{ 885 },{ 888 },{ 891 },{ 894 },{ 897 } } },
		{ KgMC(8200),{ { 681 },{ 684 },{ 687 },{ 689 },{ 692 },{ 695 },{ 698 },{ 701 },{ 704 },{ 707 },{ 710 },{ 713 },{ 716 },{ 719 },{ 721 },{ 724 },{ 727 },{ 730 },{ 733 },{ 736 },{ 739 },{ 742 },{ 744 },{ 747 },{ 750 },{ 753 },{ 756 },{ 759 },{ 762 },{ 765 },{ 767 },{ 770 },{ 773 },{ 776 },{ 779 },{ 782 },{ 784 },{ 787 },{ 790 },{ 793 },{ 796 },{ 799 },{ 801 },{ 804 },{ 807 },{ 810 },{ 813 },{ 816 },{ 818 },{ 821 },{ 824 },{ 827 },{ 830 },{ 832 },{ 835 },{ 838 },{ 841 },{ 844 },{ 846 },{ 849 },{ 852 },{ 855 },{ 857 },{ 860 },{ 863 },{ 866 } } }
	}
};

namespace table
{
	CTable_E1::CTable_E1() : CompresTable(DATA_E1)
	{
	}

	void * CTable_E1::operator new (std::size_t aSize)
	{
		return malloc(aSize);
	}

	void CTable_E1::operator delete(void* obj)
	{
		free(obj);
	}

	void * CTable_E1::operator new[](std::size_t aSize)
	{
		return malloc(aSize);
	}

		void CTable_E1::operator delete[](void* obj)
	{
		free(obj);
	}

}

const table::ThisTable DATA_E2{};
/*
* If you have any questions,
* please contact the author of the project: popov.i2017cpp@gmail.com
*/
namespace table
{
	CTable_E2::CTable_E2() : CompresTable(DATA_E2)
	{
	}

	void * CTable_E2::operator new (std::size_t aSize)
	{
		return malloc(aSize);
	}

	void CTable_E2::operator delete(void* obj)
	{
		free(obj);
	}

	void * CTable_E2::operator new[](std::size_t aSize)
	{
		return malloc(aSize);
	}

		void CTable_E2::operator delete[](void* obj)
	{
		free(obj);
	}

}

const table::ThisTable DATA_E3{};
/*
* If you have any questions,
* please contact the author of the project: popov.i2017cpp@gmail.com
*/
namespace table
{
	CTable_E3::CTable_E3() : CompresTable(DATA_E3)
	{
	}

	void * CTable_E3::operator new (std::size_t aSize)
	{
		return malloc(aSize);
	}

	void CTable_E3::operator delete(void* obj)
	{
		free(obj);
	}

	void * CTable_E3::operator new[](std::size_t aSize)
	{
		return malloc(aSize);
	}

		void CTable_E3::operator delete[](void* obj)
	{
		free(obj);
	}

}

