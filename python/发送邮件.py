import smtplib
from email.message import EmailMessage

email = EmailMessage()
email['from'] = 'Your Name'
email['to'] = 'receiver@example.com'
email['subject'] = 'Test Subject'
email.set_content("This is the body of the email.")

# SMTP connection setup
with smtplib.SMTP(host='smtp.gmail.com', port=587) as smtp:
    smtp.ehlo()             # Identify yourself with the server
    smtp.starttls()         # Secure the connection
    smtp.login("your_email@gmail.com", "your_app_password")
    smtp.send_message(email)

print("Email sent successfully!")
