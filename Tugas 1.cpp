#include <iostream>
using namespace std;

int hitung_gaji_perweek(int max_hour_perweek, int working_hours){
	int salary_perhour = 15000;
	int salary = 0;
	int total_salary;

	total_salary = salary_perhour * working_hours;
	return total_salary;
}

int hitung_gaji_perweek_overtime(int max_hour_perweek, int working_hours){
	int salary_perhour = 15000;
	int salary = 0;
	int overtime_hours;	
	int overtime_salary = 0;
	int total_salary;
	
	//Hitung Gaji Lembur
	overtime_hours = working_hours - max_hour_perweek;
	overtime_salary = 1.5 * salary_perhour * overtime_hours;
	
	salary = salary_perhour * max_hour_perweek;
	
	total_salary = overtime_salary + salary;
	return total_salary;
}

void display(string name, int total_salary, int pengeluaran){
	
	if(total_salary>pengeluaran){
		cout<<name<<" bisa menabung "<<total_salary-pengeluaran;
	}else if(total_salary==pengeluaran){
		cout<<name<<" tidak bisa menabung";
	}else{
		cout<<name<<" harus cari tambahan";
	}
	
}

int main(){
	system("color 2");
	int max_hour_perweek = 40;
	// Variable input
	int working_hours;
	int pengeluaran;
	string name;
	
	cout<<"\t\t======================="<<endl;
	cout<<"\t\tProgram Menghitung Gaji"<<endl;
	cout<<"\t\t======================="<<endl<<endl;
	
	cout<<"Nama Pegawai : ";
	getline(cin, name);
	
	cout<<"Pengeluaran : ";
	cin>>pengeluaran;
	
	cout<<"Total Jam Kerja : ";
	cin>>working_hours;
	
	if(working_hours > max_hour_perweek){
		cout<<endl<<name<<" Berkerja selama "<<working_hours<<" Jam"<<endl;
		cout<<"Total gaji :"<<hitung_gaji_perweek_overtime(max_hour_perweek, working_hours)<<endl;
		display(name, hitung_gaji_perweek_overtime(max_hour_perweek, working_hours), pengeluaran);
	}else{
		cout<<endl<<name<<" Berkerja selama "<<working_hours<<" Jam"<<endl;
		cout<<"Total gaji :"<<hitung_gaji_perweek(max_hour_perweek, working_hours)<<endl;
		display(name, hitung_gaji_perweek_overtime(max_hour_perweek, working_hours), pengeluaran);
	}
	
}





