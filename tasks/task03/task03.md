# Задание №3

## Результат

Измерения проводились программой [задания 2](https://github.com/DimaCrafter/rts-spring-2025/blob/master/tasks/task02/task02.ino) для сравнения работы программы [задания 1](https://github.com/DimaCrafter/rts-spring-2025/blob/master/tasks/task01/task01.ino).

<table>
	<thead>
		<tr>
			<th rowspan="2">Задаваемый период</th>
			<th colspan="2">Arduino Uno</th>
			<th colspan="2">Arduino Uno R4</th>
		</tr>
		<tr>
			<th>Мат. ожидание</th>
			<th>Ср. кв. отклонение</th>
			<th>Мат. ожидание</th>
			<th>Ср. кв. отклонение</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>10 ms</td>
			<td>10.012 ms</td>
			<td>0.07 ms²</td>
			<td>10.009 ms</td>
			<td>0.068 ms²</td>
		</tr>
		<tr>
			<td>1 ms</td>
			<td>1.007 ms</td>
			<td>0.07 ms²</td>
			<td>1.002 ms</td>
			<td>0.069 ms²</td>
		</tr>
		<tr>
			<td>500 us</td>
			<td>509 us</td>
			<td>77 us²</td>
			<td>501 us</td>
			<td>77 us²</td>
		</tr>
		<tr>
			<td>100 us</td>
			<td>109 us</td>
			<td>79 us²</td>
			<td>102 us</td>
			<td>76 us²</td>
		</tr>
		<tr>
			<td>50 us</td>
			<td>58 us</td>
			<td>78 us²</td>
			<td>52 us</td>
			<td>71 us²</td>
		</tr>
	</tbody>
</table>

На R4 "дребезг" меньше, но всё равно ощутимый на бальших частотах.
