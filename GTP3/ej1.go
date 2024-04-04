package main

import (
	"fmt"
	"os"
	"strconv"
)

type Fecha struct {
	dia, mes, anio int
}

func (f *Fecha) GetDia() int {
	return f.dia
}

func (f *Fecha) GetMes() int {
	return f.mes
}

func (f *Fecha) GetAnio() int {
	return f.anio
}

func (f *Fecha) SetDia(d int) {
	f.dia = d
}

func (f *Fecha) SetMes(m int) {
	f.mes = m
}

func (f *Fecha) SetAnio(a int) {
	f.anio = a
}

// go no admite sobrecarga de operadores :(
func (f *Fecha) Opp() {
	f.sumar_dias(1)
}

func (f *Fecha) Omm() {
	f.restar_dias(1)
}

func (f *Fecha) Op(d int) {
	f.sumar_dias(d)
}

func (f *Fecha) Om(d int) {
	f.restar_dias(d)
}

func (f *Fecha) sumar_dias(d int) {
	f.dia += d

	for f.dia > f.dias_en_mes(f.mes) {
		f.dia -= f.dias_en_mes(f.mes)
		f.mes++
		if f.mes > 12 {
			f.anio++
			f.mes = 1
		}
	}
}

func (f *Fecha) restar_dias(d int) {
	f.dia -= d

	for f.dia < 1 {
		f.dia += f.dias_en_mes(f.mes - 1)
		f.mes--
		if f.mes < 1 {
			f.anio--
			f.mes = 12
		}
	}
}

func (f *Fecha) dias_en_mes(m int) int {
	switch m {
	case 1:
		return 31
	case 3:
		return 31
	case 5:
		return 31
	case 7:
		return 31
	case 8:
		return 31
	case 10:
		return 31
	case 12:
		return 31
	case 4:
		return 30
	case 6:
		return 30
	case 9:
		return 30
	case 11:
		return 30
	case 2:
		if f.es_bisiesto(f.anio) {
			return 29
		}
		return 28
	default:
		return 0
	}
}

func (f *Fecha) es_bisiesto(a int) bool {
	return (a%4 == 0 && a%100 != 0) || (a%400 == 0)
}

func main() {
	if len(os.Args) != 4 {
		fmt.Printf("Uso: %s DIA MES AÑO\n", os.Args[0])
		os.Exit(1)
	}

	dia, _ := strconv.ParseInt(os.Args[1], 10, 64)
	mes, _ := strconv.ParseInt(os.Args[2], 10, 64)
	anio, _ := strconv.ParseInt(os.Args[3], 10, 64)

	var f Fecha = Fecha{int(dia), int(mes), int(anio)}

	fmt.Printf("%+v\n", f)

	f.Opp()
	fmt.Printf("%+v\n", f)

	f.Omm()
	fmt.Printf("%+v\n", f)

	f.Op(8458)
	fmt.Printf("%+v\n", f)

	f.Om(23)
	fmt.Printf("%+v\n", f)
}
