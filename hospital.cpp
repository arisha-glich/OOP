#include <iostream>
#include <string>

using namespace std;

const int MAX_DOCTORS = 5;
const int MAX_PATIENTS = 10;
const int MAX_APPOINTMENTS = 10;

class Doctor {
private:
    string name;
    string specialization;

public:
    // Default constructor
    Doctor() : name(""), specialization("") {}

    Doctor(const string& name, const string& specialization)
        : name(name), specialization(specialization) {}

    string getName() const {
        return name;
    }

    string getSpecialization() const {
        return specialization;
    }
};


class Patient {
private:
    string name;
    int age;
    string medicalHistory;

public:
    // Default constructor
    Patient() : name(""), age(0), medicalHistory("") {}

    Patient(const string& name, int age, const string& medicalHistory)
        : name(name), age(age), medicalHistory(medicalHistory) {}

    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    string getMedicalHistory() const {
        return medicalHistory;
    }
};


class Appointment {
private:
    Doctor doctor;
    Patient patient;
    string date;

public:
    // Default constructor
    Appointment() : doctor(), patient(), date("") {}

    Appointment(const Doctor& doctor, const Patient& patient, const string& date)
        : doctor(doctor), patient(patient), date(date) {}

    void displayDetails() const {
        cout << "Appointment Details:\n";
        cout << "Date: " << date << endl;
        cout << "Doctor: " << doctor.getName() << " (" << doctor.getSpecialization() << ")\n";
        cout << "Patient: " << patient.getName() << " (Age: " << patient.getAge() << ")\n";
        cout << "Medical History: " << patient.getMedicalHistory() << endl;
        cout << "----------------------\n";
    }
};


class Hospital {
private:
    Doctor doctors[MAX_DOCTORS];
    Patient patients[MAX_PATIENTS];
    Appointment appointments[MAX_APPOINTMENTS];
    int doctorCount;
    int patientCount;
    int appointmentCount;

public:
    Hospital() : doctorCount(0), patientCount(0), appointmentCount(0) {}

    void addDoctor(const Doctor& doctor) {
        if (doctorCount < MAX_DOCTORS) {
            doctors[doctorCount++] = doctor;
        }
    }

    void addPatient(const Patient& patient) {
        if (patientCount < MAX_PATIENTS) {
            patients[patientCount++] = patient;
        }
    }

    void scheduleAppointment(const Doctor& doctor, const Patient& patient, const string& date) {
        if (appointmentCount < MAX_APPOINTMENTS) {
            appointments[appointmentCount++] = Appointment(doctor, patient, date);
        }
    }

    void displayAppointments() const {
        cout << "Scheduled Appointments:\n";
        for (int i = 0; i < appointmentCount; ++i) {
            appointments[i].displayDetails();
        }
    }
};

int main() {
    // Create instances of Hospital, Doctor, and Patient
    Hospital hospital;

    // Add doctors and patients to the hospital
    Doctor doctor1("Dr. Smith", "Cardiologist");
    Doctor doctor2("Dr. Johnson", "Orthopedic Surgeon");

    Patient patient1("Alice", 30, "None");
    Patient patient2("Bob", 45, "Hypertension");

    hospital.addDoctor(doctor1);
    hospital.addDoctor(doctor2);

    hospital.addPatient(patient1);
    hospital.addPatient(patient2);

    // Schedule appointments
    hospital.scheduleAppointment(doctor1, patient1, "2023-01-10");
    hospital.scheduleAppointment(doctor2, patient2, "2023-01-15");

    // Display scheduled appointments
    hospital.displayAppointments();

    return 0;
}
