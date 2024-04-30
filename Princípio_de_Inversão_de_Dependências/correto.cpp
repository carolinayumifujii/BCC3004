#include <iostream>
#include <string>


//Correto
/*Define um contrato comum para todos os serviços de mensagem: */
class MessageService {
public:
    virtual void sendMessage(const std::string& recipient, const std::string& message) = 0;
    virtual ~MessageService() {} // Destructor virtual
};

class EmailService : public MessageService {
public:
    void sendMessage(const std::string& recipient, const std::string& message) override {
        std::cout << "Sending email to " << recipient << ": " << message << std::endl;
    }
};

class SMSService : public MessageService {
public:
    void sendMessage(const std::string& phoneNumber, const std::string& message) override {
        std::cout << "Sending SMS to " << phoneNumber << ": " << message << std::endl;
    }
};

class NotificationService {
private:
    MessageService& messageService;
public:
    NotificationService(MessageService& service) : messageService(service) {}

    void sendNotification(const std::string& recipient, const std::string& message) {
        messageService.sendMessage(recipient, message);
    }
};
