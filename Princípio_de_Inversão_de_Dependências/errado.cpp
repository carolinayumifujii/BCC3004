#include <iostream>
#include <string>

class EmailService {
public:
    void sendEmail(const std::string& recipient, const std::string& message) {
        std::cout << "Sending email to " << recipient << ": " << message << std::endl;
    }
};

class SMSService {
public:
    void sendSMS(const std::string& phoneNumber, const std::string& message) {
        std::cout << "Sending SMS to " << phoneNumber << ": " << message << std::endl;
    }
};


//Errado
/*Este exemplo viola o principio porque a classe NotificationService
 está diretamente ligada às implementações concretas EmailService e SMSService. */
class NotificationService {
private:
    EmailService emailService;
    SMSService smsService;
public:
    void sendNotification(const std::string& recipient, const std::string& message, bool isEmail) {
        if (isEmail) {
            emailService.sendEmail(recipient, message);
        } else {
            smsService.sendSMS(recipient, message);
        }
    }
};
