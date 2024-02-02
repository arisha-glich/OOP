*/The provided C++ code defines a simple hospital management system using classes to represent `Doctor`, `Patient`, `Appointment`, and `Hospital`. The system allows doctors and patients to be added to the hospital, and appointments can be scheduled between doctors and patients. Below is a description of the main components of the code:
1. **Doctor Class:**
   - Represents a doctor with attributes `name` and `specialization`.
   - Provides a default constructor and a parameterized constructor to initialize the attributes.
   - Getter methods `getName()` and `getSpecialization()`.

2. **Patient Class:**
   - Represents a patient with attributes `name`, `age`, and `medicalHistory`.
   - Provides a default constructor and a parameterized constructor to initialize the attributes.
   - Getter methods `getName()`, `getAge()`, and `getMedicalHistory()`.

3. **Appointment Class:**
   - Represents an appointment with attributes `doctor` (of type `Doctor`), `patient` (of type `Patient`), and `date`.
   - Provides a default constructor and a parameterized constructor to initialize the attributes.
   - Method `displayDetails()` prints the details of the appointment, including the date, doctor's information, patient's information, and medical history.

4. **Hospital Class:**
   - Manages the hospital, storing arrays of doctors, patients, and appointments.
   - Provides methods to add doctors and patients to the hospital.
   - Method `scheduleAppointment()` allows scheduling appointments by creating an `Appointment` object and adding it to the list.
   - Method `displayAppointments()` prints details of all scheduled appointments.

5. **Main Function:**
   - Creates an instance of the `Hospital` class.
   - Creates instances of doctors (`doctor1` and `doctor2`) and patients (`patient1` and `patient2`).
   - Adds doctors and patients to the hospital.
   - Schedules appointments between doctors and patients.
   - Displays details of all scheduled appointments.

This hospital management system demonstrates the concept of object-oriented programming by encapsulating related attributes and behaviors within classes. The main function serves as a sample scenario, showing how doctors, patients, and appointments can be managed within a hospital system.#include <iostream>
/*
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
