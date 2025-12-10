#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
  std::string firstName;
  std::string lastName;
  std::string nickname;
  std::string phoneNumber;
  std::string darknestSecret;
public:
  void  setContact(const std::string &fn, const std::string &ln, \
      const std::string &nn, const std::string &pn, const std::string &ds)
  {
    firstName = fn;
    lastName = ln;
    nickname = nn;
    phoneNumber = pn;
    darknestSecret = ds;
  }

  std::string getFirstName() const;
  std::string getLastName() const;
  std::string getNickName() const;
  std::string getPhoneNumber() const;
  std::string getDarknestSecret() const;
};

#endif
