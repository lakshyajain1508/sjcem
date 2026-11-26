# Cyber Security Viva Preparation Notes

> Simple-English revision notes with definitions, real-life examples,
> key differences, and viva-ready answers.

## Table of Contents

1.  [IP Addressing and Networking](#1-ip-addressing-and-networking)
    -   [Classful Addressing](#11-classful-addressing)
    -   [Classless Addressing (CIDR)](#12-classless-addressing-cidr)
    -   [Logical Addressing](#13-logical-addressing)
    -   [Subnetting](#14-subnetting)
    -   [Fragmentation](#15-fragmentation)
2.  [Information Security](#2-information-security)
    -   [CIA Triad](#21-elements-of-information-security-cia-triad)
    -   [Vulnerability](#22-vulnerability)
    -   [Classification of Attacks](#23-classification-of-attacks)
3.  [HTTP, HTTPS, SSL, TLS and
    Encryption](#3-http-https-ssl-tls-and-encryption)
4.  [Network Attacks](#4-network-attacks)
    -   [DoS and DDoS](#41-dos-and-ddos-attacks)
    -   [Session Hijacking](#42-session-hijacking)
    -   [Man-in-the-Middle](#43-man-in-the-middle-mitm-attack)
5.  [Ethical Hacking](#5-ethical-hacking)
    -   [Ethical Hacking](#51-ethical-hacking)
    -   [Ethical Hacking Framework](#52-ethical-hacking-framework)
6.  [Obfuscation](#6-obfuscation)
7.  [Malware and Its Types](#7-malware-and-its-types)
8.  [Important Differences](#8-important-differences)
9.  [Rapid-Fire Viva Questions](#9-rapid-fire-viva-questions)
10. [Last-Minute Revision](#10-last-minute-revision)

------------------------------------------------------------------------

# 1. IP Addressing and Networking

## 1.1 Classful Addressing

**Definition:** Classful addressing is an IPv4 addressing method in
which addresses are divided into five classes: A, B, C, D and E. Each
class has a predefined network and host portion.

  Class     First-octet range Default subnet mask   Purpose
  ------- ------------------- --------------------- -----------------------
  A                    1--126 255.0.0.0             Large networks
  B                  128--191 255.255.0.0           Medium-sized networks
  C                  192--223 255.255.255.0         Smaller networks
  D                  224--239 Not applicable        Multicasting
  E                  240--255 Not applicable        Experimental/reserved

**Note:** `127.0.0.0/8` is reserved for loopback. Class D and E do not
use the ordinary unicast default subnet masks shown for A, B and C.

**Real-life example:** A large organization, a college and a small
office have different network-size requirements. Traditional classful
addressing provided fixed address classes for different sizes.

**Viva answer:** Classful addressing divides IPv4 addresses into five
classes based on the first octet. Classes A, B and C are used for
unicast addressing, Class D for multicast and Class E is
reserved/experimental.

## 1.2 Classless Addressing (CIDR)

**Definition:** Classless addressing does not depend on fixed IP
classes. It uses variable-length network prefixes to allocate IP
addresses more flexibly.

CIDR means **Classless Inter-Domain Routing**.

Example: `192.168.1.0/24`

-   `192.168.1.0` is the network address.
-   `/24` means the first 24 bits represent the network portion.
-   The remaining 8 bits are available for host addressing.

**Real-life example:** If one department needs around 50 addresses and
another needs around 10, classless addressing allows networks of
different sizes instead of forcing both into the same fixed class.

**Advantages:** 1. Reduces IP address wastage. 2. Supports flexible
subnetting. 3. Allows route aggregation. 4. Uses network prefixes
instead of fixed classes.

### Classful vs Classless

  Classful                        Classless
  ------------------------------- -------------------------------------
  Uses fixed classes              Does not depend on fixed classes
  Uses default class masks        Uses variable-length prefixes
  Less flexible                   More flexible
  Can waste addresses             Uses address space more efficiently
  Uses Classes A, B, C, D and E   Uses CIDR prefix notation

**Viva answer:** Classful addressing uses fixed IP classes and default
subnet masks, whereas classless addressing uses variable-length prefixes
to allocate IP addresses more efficiently.

## 1.3 Logical Addressing

**Definition:** Logical addressing is the process of assigning IP
addresses to devices so that they can be identified and communicate
across networks.

An IP address is called a logical address because it can be assigned or
changed through network configuration.

Example: - Laptop: `192.168.1.10` - Mobile: `192.168.1.11` - Printer:
`192.168.1.12`

**Real-life example:** An IP address is like a postal address. A parcel
needs a destination address to reach the correct home. Similarly,
network devices use IP addresses to identify the source and destination
of data.

**Important points:** - IP address = Logical address (Network layer). -
MAC address = Hardware/physical address associated with a network
interface (Data Link layer).

**Viva answer:** An IP address is a logical address used to identify a
device and route data across networks. A MAC address identifies a
network interface at the Data Link layer.

## 1.4 Subnetting

**Definition:** Subnetting is the process of dividing one large IP
network into smaller networks called subnets.

**Why is subnetting needed?** 1. Better network management. 2. Reduces
unnecessary broadcast traffic within each subnet. 3. Improves network
organization and performance. 4. Helps separate departments and apply
security policies. 5. Uses IP address space more efficiently.

**Real-life example:** A college can have separate subnets for the
computer department, accounts department, library and administration.

**Basic formulas:**

If `n` bits are borrowed for subnetting:

`Number of subnets = 2^n`

If `h` host bits remain:

`Usable host addresses per conventional IPv4 subnet = 2^h - 2`

Example: In a `/24` network, 8 bits remain for hosts: - Total addresses
= `2^8 = 256` - Normally usable host addresses = `256 - 2 = 254`

The usual subtraction of two excludes the network and broadcast
addresses in a conventional IPv4 subnet. Special cases exist.

**Viva answer:** Subnetting divides a large IP network into smaller
logical networks to improve management, organization, performance and
security.

## 1.5 Fragmentation

**Definition:** IP fragmentation is the process of splitting a large IP
packet into smaller fragments so that it can travel across a network
with a smaller Maximum Transmission Unit (MTU), when fragmentation is
permitted.

**MTU:** Maximum Transmission Unit; the maximum packet size that a
particular network link can carry at its layer.

**Real-life example:** If a delivery vehicle cannot carry one large
parcel, the parcel may need to be divided into smaller boxes. Similarly,
a large IP packet can be split into smaller fragments.

**Important points:** - Each IPv4 fragment has its own IP header. -
Fragment identification and offset information help the destination
reassemble the packet. - The destination reassembles the fragments. - If
fragments are missing, the original packet cannot be fully reassembled
and is eventually discarded. - In IPv4, fragmentation may be performed
by the sender or by an intermediate router if allowed. - IPv6 routers do
not fragment packets; the source is responsible for fragmentation.

**Viva answer:** Fragmentation divides a large IP packet into smaller
pieces to meet a network link's MTU requirement.

------------------------------------------------------------------------

# 2. Information Security

## 2.1 Elements of Information Security (CIA Triad)

Information security means protecting information from unauthorized
access, modification, destruction or disclosure.

The three main elements are called the **CIA Triad**.

### 1. Confidentiality

**Definition:** Confidentiality means keeping information secret and
allowing only authorized people to access it.

**Example:** Only you and authorized bank staff should be able to access
your banking information.

**Security methods:** Passwords, encryption and access control.

### 2. Integrity

**Definition:** Integrity means keeping information accurate and
preventing unauthorized changes.

**Example:** If your bank balance is ₹10,000, nobody should change it
without authorization.

**Security methods:** Hashing, digital signatures and file-integrity
monitoring.

### 3. Availability

**Definition:** Availability means ensuring that information and
services are accessible whenever authorized users need them.

**Example:** You should be able to access your banking application when
you need it.

**Security methods:** Backups, redundant servers, disaster recovery and
protection against DoS attacks.

  Element           Remember it as
  ----------------- --------------------
  Confidentiality   Keep it secret
  Integrity         Keep it correct
  Availability      Keep it accessible

**Viva answer:** The three main elements of information security are
Confidentiality, Integrity and Availability. Together, they are called
the CIA Triad.

Other security goals include authentication, authorization,
accountability and non-repudiation.

## 2.2 Vulnerability

**Definition:** A vulnerability is a weakness or security gap in a
system, network, application or process that an attacker could exploit.

**Real-life example:** A house with a broken window has a weakness
through which a thief may enter. Similarly, outdated software may
contain a security weakness that an attacker can exploit.

### Types of vulnerabilities

1.  **Software vulnerability:** A weakness in application code.
2.  **Network vulnerability:** An insecure network configuration.
3.  **Hardware vulnerability:** A weakness in a physical device.
4.  **Human vulnerability:** A person being tricked through phishing or
    social engineering.
5.  **Configuration vulnerability:** Default passwords or unnecessary
    open ports.

### Related terms

  Term            Meaning
  --------------- -------------------------------------------------------
  Threat          Something that can cause harm
  Vulnerability   A weakness that can be exploited
  Exploit         A method or code used to take advantage of a weakness
  Risk            The possibility and impact of harm
  Attack          An attempt to compromise a system

**Example:** Outdated website software is a vulnerability. A malicious
actor is a threat actor. Exploiting the weakness is an attack.

**Viva answer:** A threat is a possible source of danger, while a
vulnerability is a weakness that a threat can exploit.

## 2.3 Classification of Attacks

**Definition:** Classification of attacks means dividing cyberattacks
into categories based on how they affect a computer system or network.

### A. Based on the nature of the attack

#### 1. Passive attack

**Definition:** An attacker secretly observes or monitors communication
without changing the data.

Examples: - Eavesdropping. - Network sniffing. - Traffic analysis.

**Real-life example:** Someone secretly listening to a private phone
conversation.

#### 2. Active attack

**Definition:** An attacker changes, modifies, deletes, inserts or
disrupts information or system operations.

Examples: - Denial of Service. - Data modification. - Message replay. -
Masquerading.

**Real-life example:** Someone intercepts a transaction and attempts to
change its payment amount.

### B. Based on security services affected

  Attack type    Meaning                              Example
  -------------- ------------------------------------ ------------------------
  Interruption   Makes a service unavailable          DoS
  Interception   Unauthorized access to information   Sniffing
  Modification   Changes original information         Altering a transaction
  Fabrication    Inserts fake information             Fake messages

**Viva answer:** Cyberattacks can be classified as passive and active
attacks. Passive attacks monitor information, whereas active attacks
modify, insert or disrupt information.

------------------------------------------------------------------------

# 3. HTTP, HTTPS, SSL, TLS and Encryption

## 3.1 HTTP

**Full form:** Hypertext Transfer Protocol.

**Definition:** HTTP is a communication protocol used to transfer web
pages and data between a browser and a web server.

**Example:** When you visit a website, your browser sends an HTTP
request and the server sends a response.

**Default port:** 80.

**Security issue:** HTTP does not encrypt communication by itself.
Someone who can intercept the traffic may be able to read its contents.

## 3.2 HTTPS

**Full form:** Hypertext Transfer Protocol Secure.

**Definition:** HTTPS is the secure version of HTTP. It uses TLS to
protect communication between a browser and a web server.

**Example:** When you open your bank's website using HTTPS, TLS helps
protect your password and banking information while it travels over the
network.

**Default port:** 443.

### HTTP vs HTTPS

  -----------------------------------------------------------------------
  HTTP                                HTTPS
  ----------------------------------- -----------------------------------
  Does not encrypt communication by   Uses TLS to protect communication
  itself                              

  Less secure for sensitive data      Provides encrypted communication

  Default port 80                     Default port 443

  Traffic may be readable if          Protects data from being read or
  intercepted                         altered in transit
  -----------------------------------------------------------------------

**Viva question: Is HTTPS completely safe?**

No. HTTPS protects communication between the browser and server, but it
does not guarantee that the website itself is trustworthy or free from
malware.

## 3.3 SSL and TLS

### SSL

**Full form:** Secure Sockets Layer.

**Definition:** SSL is an older security protocol designed to encrypt
communication between two systems over a network.

### TLS

**Full form:** Transport Layer Security.

**Definition:** TLS is the modern and more secure successor to SSL. It
protects data transmitted over a network.

**Example:** When you log in to a website, TLS helps protect
communication between your browser and the website's server.

### SSL vs TLS

  SSL                           TLS
  ----------------------------- --------------------------------
  Older protocol                Newer protocol
  Deprecated and insecure       Modern protocol in use
  Older cryptographic methods   Improved cryptographic methods

**Important:** SSL 2.0, SSL 3.0 and older TLS versions are obsolete.
Modern websites generally use TLS 1.2 or TLS 1.3.

### Simplified HTTPS connection process

1.  Browser connects to the web server.
2.  Server sends its digital certificate.
3.  Browser checks the certificate.
4.  Both sides establish shared encryption keys through the TLS
    handshake.
5.  Encrypted communication begins.

## 3.4 Encryption

**Definition:** Encryption is the process of converting readable
information (plaintext) into unreadable information (ciphertext) using
an encryption algorithm and a key.

**Real-life example:** You send a private message. Encryption converts
it into ciphertext so that someone intercepting it cannot easily
understand it.

### Types of encryption

#### 1. Symmetric encryption

Uses the same secret key for encryption and decryption.

Example: AES.

**Real-life example:** Two people use the same secret key to lock and
unlock a box.

#### 2. Asymmetric encryption

Uses two related keys: - Public key. - Private key.

Example: RSA.

**Real-life example:** Someone can use your public key to encrypt a
message for you, but the corresponding private key is used to decrypt
it.

**Viva question: What is the difference between encryption and
hashing?**

Encryption is reversible using the correct key, while hashing is
designed to be a one-way process.

------------------------------------------------------------------------

# 4. Network Attacks

## 4.1 DoS and DDoS Attacks

### DoS Attack

**Full form:** Denial of Service.

**Definition:** A DoS attack attempts to make a server or service
unavailable to legitimate users by overwhelming it or exhausting its
resources.

**Real-life example:** Imagine a restaurant with 10 seats. One person
repeatedly occupies all the seats through fake bookings. Genuine
customers cannot get seats.

Common types: 1. SYN Flood -- Sends many incomplete TCP connection
requests. 2. UDP Flood -- Sends excessive UDP packets. 3. ICMP Flood --
Sends excessive ICMP requests. 4. HTTP Flood -- Sends excessive HTTP
requests.

**Prevention:** Firewalls, rate limiting, traffic filtering and DoS
protection.

### DDoS Attack

**Full form:** Distributed Denial of Service.

**Definition:** A DDoS attack uses multiple compromised devices to send
large amounts of traffic to a target, making the service unavailable.

**Real-life example:** Imagine thousands of people making fake bookings
at one restaurant from different locations. Genuine customers cannot get
service.

### DoS vs DDoS

  -----------------------------------------------------------------------
  DoS                                 DDoS
  ----------------------------------- -----------------------------------
  Usually one attacking source        Multiple attacking sources

  Easier to identify the source       More difficult to identify all
                                      sources

  Comparatively easier to control     More difficult to mitigate

  Uses limited attack resources       Can use a large botnet
  -----------------------------------------------------------------------

**What is a botnet?**

A botnet is a group of compromised computers or devices controlled by an
attacker to perform malicious activities, such as DDoS attacks.

## 4.2 Session Hijacking

**Definition:** Session hijacking is a cyberattack in which an attacker
takes control of a user's active session by stealing or misusing their
session ID or session cookie.

**First understand a session:** When you log in to a website, it creates
a session to remember that you are authenticated. A session cookie or
token helps the website recognize your logged-in session.

### How it happens

1.  User logs in to a website.
2.  Website creates a session ID or token.
3.  Attacker steals or obtains the session token.
4.  Attacker reuses the token.
5.  Attacker may access the victim's account without knowing the
    password.

**Real-life example:** Someone steals your hotel room key card. They may
enter your room without knowing your original password or booking
details.

### Common forms

-   Cookie theft.
-   Session fixation.
-   Cross-site scripting (XSS)-based token theft.
-   Man-in-the-middle interception.
-   Predictable session IDs.

**Prevention:** 1. Always use HTTPS. 2. Use Secure and HttpOnly cookie
attributes. 3. Use SameSite cookie protection. 4. Regenerate session IDs
after login. 5. Set session expiration. 6. Log out from shared devices.

**Viva question: Can session hijacking happen without knowing the
password?**

Yes. If an attacker steals a valid session token, they may access an
authenticated session without knowing the user's password.

## 4.3 Man-in-the-Middle (MITM) Attack

**Full form:** Man-in-the-Middle Attack.

**Definition:** A MITM attack happens when an attacker secretly
positions themselves between two communicating parties and intercepts or
possibly modifies their communication.

**Real-life example:** You send a private message to your friend. An
attacker intercepts the message, reads it and forwards it. Neither
person may realize that someone is monitoring the communication.

### Common MITM techniques

1.  **ARP Spoofing:** Sends fake ARP messages to redirect local network
    traffic.
2.  **DNS Spoofing:** Provides false DNS information.
3.  **Evil Twin:** Creates a fake Wi-Fi access point that imitates a
    legitimate one.
4.  **HTTPS Downgrade / SSL Stripping:** Attempts to force insecure
    communication.
5.  **Rogue Wi-Fi:** An unauthorized access point may intercept traffic.

**Prevention:** - Use HTTPS. - Avoid untrusted public Wi-Fi. - Use a
trusted VPN when appropriate. - Validate digital certificates. - Use
secure Wi-Fi encryption.

### MITM vs Session Hijacking

  -----------------------------------------------------------------------
  MITM                                Session Hijacking
  ----------------------------------- -----------------------------------
  Intercepts communication            Takes over an active session

  Can read or modify traffic          Misuses session credentials

  Happens between communicating       Targets an authenticated session
  parties                             

  Example: ARP spoofing               Example: Cookie theft
  -----------------------------------------------------------------------

**Important:** MITM can be one method used to steal a session token, but
both attacks are not the same.

------------------------------------------------------------------------

# 5. Ethical Hacking

## 5.1 Ethical Hacking

**Definition:** Ethical hacking is the legal and authorized process of
testing a computer system, website or network to identify security
weaknesses before malicious hackers can exploit them.

An ethical hacker is also called a **White Hat Hacker**.

**Real-life example:** A bank hires a security professional to test its
website for vulnerabilities. The professional finds weaknesses and
reports them so that the bank can fix them.

### Types of hackers

  -----------------------------------------------------------------------
  Hacker                              Meaning
  ----------------------------------- -----------------------------------
  White Hat                           Ethical hacker who works with
                                      permission

  Black Hat                           Malicious hacker who attacks
                                      illegally

  Grey Hat                            Works without permission but may
                                      not have malicious intentions

  Script Kiddie                       Uses ready-made hacking tools
                                      without deep knowledge

  Hacktivist                          Hacks to promote a social or
                                      political cause

  State-sponsored                     Works on behalf of a government
  -----------------------------------------------------------------------

### Why is ethical hacking important?

1.  Identifies security weaknesses.
2.  Protects sensitive information.
3.  Helps prevent cyberattacks.
4.  Improves network security.
5.  Helps organizations follow security standards.

**Viva question: Is ethical hacking legal?**

Yes, ethical hacking is legal when performed with proper authorization
and within the agreed scope.

## 5.2 Ethical Hacking Framework

**Definition:** An ethical hacking framework is a structured set of
steps, methods and guidelines used to perform security testing
systematically.

### Five commonly taught phases

#### Phase 1: Reconnaissance

**Meaning:** Collecting information about the target before testing.

Example: Collecting publicly available information about a company's
website, domain and network.

#### Phase 2: Scanning

**Meaning:** Identifying active devices, open ports, services and
possible vulnerabilities.

Example: Checking which ports are open on an authorized test server.

#### Phase 3: Gaining Access

**Meaning:** Testing whether identified vulnerabilities can be exploited
to obtain access.

Example: Demonstrating that a vulnerable test application allows
unauthorized access.

#### Phase 4: Maintaining Access

**Meaning:** In an authorized assessment, checking whether access could
persist and what impact that would have.

Example: Testing whether weak session management allows continued
unauthorized access.

#### Phase 5: Clearing Tracks

**Meaning:** In traditional hacker terminology, this refers to removing
evidence of an intrusion. In ethical hacking, testers should preserve
logs and evidence and document their activities. They must not secretly
erase organizational records.

### PTES -- Penetration Testing Execution Standard

PTES is another structured penetration-testing methodology. Its stages
include:

1.  Pre-engagement interactions.
2.  Intelligence gathering.
3.  Threat modeling.
4.  Vulnerability analysis.
5.  Exploitation.
6.  Post-exploitation.
7.  Reporting.

**OWASP** is another important security project, particularly for web
application security.

**Viva answer:** The five traditional phases are reconnaissance,
scanning, gaining access, maintaining access and covering tracks. In
ethical testing, all actions must remain authorized and evidence must be
preserved.

------------------------------------------------------------------------

# 6. Obfuscation

**Definition:** Obfuscation is the process of making source code or
program instructions difficult to understand without changing the
intended functionality of the program.

**Example:**

Normal JavaScript:

``` javascript
let studentName = "Student";
let marks = 90;
```

Obfuscated-style code:

``` javascript
let a = "Student";
let b = 90;
```

The program can still work, but understanding the original code becomes
more difficult.

In malware, attackers use obfuscation to make malicious code harder for
security tools and analysts to detect or understand.

### Common obfuscation techniques

1.  Renaming variables.
2.  Encoding strings.
3.  Code packing.
4.  Junk code insertion.
5.  Polymorphic code.
6.  Metamorphic code.
7.  Anti-VM and anti-debugging checks.

### Obfuscation vs Encryption

  -----------------------------------------------------------------------
  Obfuscation                         Encryption
  ----------------------------------- -----------------------------------
  Makes code difficult to understand  Makes data unreadable

  Mainly hides program logic          Protects information

  Does not necessarily use a secret   Uses cryptographic keys
  key                                 

  Often reversible through analysis   Requires the appropriate decryption
  or deobfuscation                    key

  Used in code protection and malware Used in secure communication and
  evasion                             data protection
  -----------------------------------------------------------------------

**Viva answer:** Obfuscation hides the meaning or structure of code,
whereas encryption converts readable data into ciphertext using a
cryptographic algorithm and key.

------------------------------------------------------------------------

# 7. Malware and Its Types

**Full form:** Malicious Software.

**Definition:** Malware is any software or program intentionally
designed to damage, disrupt, steal information from or gain unauthorized
access to a computer system.

**Real-life example:** You download an application from an unknown
website. It looks normal but secretly steals your personal information.
That application may contain malware.

## Types of Malware

### 1. Virus

**Definition:** A virus is malware that attaches itself to a legitimate
file or program and spreads when the infected file is executed.

**Example:** You download an infected file and run it. The virus infects
other files.

**Key point:** Usually requires user action to spread.

### 2. Worm

**Definition:** A worm is malware that can automatically replicate and
spread across networks without requiring a user to execute an infected
host file each time.

**Example:** WannaCry ransomware used worm-like spreading behavior.

**Key point:** Self-replicating.

### 3. Trojan Horse

**Definition:** A Trojan is malware that disguises itself as legitimate
software to trick users into installing or executing it.

**Example:** A fake game application that secretly installs malicious
software.

**Key point:** Looks genuine but performs malicious activities.

### 4. Ransomware

**Definition:** Ransomware is malware that encrypts files or locks a
system and demands money to restore access.

**Example:** Your laptop files become inaccessible, and a message
demands payment to unlock them.

**Key point:** Demands ransom.

### 5. Spyware

**Definition:** Spyware is software that secretly monitors user
activities and collects information without proper permission.

**Example:** A malicious application secretly collects browsing
information.

**Key point:** Secretly spies on users.

### 6. Keylogger

**Definition:** A keylogger records the keys pressed by a user on a
keyboard.

**Example:** It may capture passwords when someone types them.

**Key point:** Records keystrokes.

### 7. Rootkit

**Definition:** A rootkit is malware designed to hide malicious
activities, processes or files and maintain unauthorized access to a
system.

**Example:** A malicious program hides itself so that the user and
security tools have difficulty detecting it.

**Key point:** Hides malware.

### 8. Adware

**Definition:** Adware displays unwanted advertisements, sometimes while
collecting user information.

**Example:** Your browser continuously displays unwanted pop-up
advertisements.

**Key point:** Unwanted advertisements.

### 9. RAT (Remote Access Trojan)

**Definition:** A RAT is malicious software that gives an attacker
remote control over an infected computer.

**Example:** An attacker remotely controls an infected computer without
the owner's permission.

**Key point:** Remote control.

### 10. Botnet Malware

**Definition:** Botnet malware infects devices and makes them part of a
remotely controlled group called a botnet.

**Example:** Thousands of infected devices are used together in a DDoS
attack.

**Key point:** Group of compromised devices.

### 11. Logic Bomb

**Definition:** A logic bomb is malicious code that activates when a
specific condition or event occurs.

**Example:** A malicious program activates on a particular date and
deletes files.

**Key point:** Condition-based activation.

### 12. Fileless Malware

**Definition:** Fileless malware operates mainly in memory and abuses
legitimate system tools instead of relying on traditional malicious
files.

**Example:** Malware abuses PowerShell to perform malicious activities.

**Key point:** Memory-based or living-off-the-land behavior.

### Important comparison: Virus vs Worm vs Trojan

  -----------------------------------------------------------------------
  Virus                   Worm                    Trojan
  ----------------------- ----------------------- -----------------------
  Attaches to files       Self-replicates         Disguises itself

  Often needs user action Can spread              Tricks users into
                          automatically           running it

  Infects other files     Spreads through         May install malicious
                          networks                payloads

  Example: File-infecting Example: WannaCry's     Fake software
  virus                   worm component          
  -----------------------------------------------------------------------

------------------------------------------------------------------------

# 8. Important Differences

  -----------------------------------------------------------------------
  Topics                              Main difference
  ----------------------------------- -----------------------------------
  Classful vs Classless               Fixed classes vs variable prefixes

  IP vs MAC                           Logical vs hardware address

  HTTP vs HTTPS                       Unencrypted vs TLS-protected
                                      communication

  SSL vs TLS                          Older vs modern security protocol

  DoS vs DDoS                         One source vs multiple sources

  MITM vs Session Hijacking           Intercepting communication vs
                                      taking over a session

  Virus vs Worm                       File infection vs self-replication

  Virus vs Trojan                     Infects files vs disguises as
                                      genuine software

  Encryption vs Hashing               Reversible with key vs one-way

  Obfuscation vs Encryption           Hides code structure vs protects
                                      data

  Passive vs Active attack            Observes vs modifies or disrupts

  Threat vs Vulnerability             Source of danger vs weakness
  -----------------------------------------------------------------------

------------------------------------------------------------------------

# 9. Rapid-Fire Viva Questions

1.  **What is the full form of CIA?**\
    Confidentiality, Integrity and Availability.

2.  **What is an IP address?**\
    A logical address used to identify a device on a network.

3.  **What is subnetting?**\
    Dividing a large network into smaller networks.

4.  **What is CIDR?**\
    Classless Inter-Domain Routing.

5.  **What is the default HTTP port?**\
    Port 80.

6.  **What is the default HTTPS port?**\
    Port 443.

7.  **Which protocol is used by HTTPS?**\
    TLS.

8.  **What is encryption?**\
    Converting plaintext into ciphertext using an algorithm and key.

9.  **What is a vulnerability?**\
    A weakness in a system that can be exploited.

10. **What is ethical hacking?**\
    Authorized security testing to identify vulnerabilities.

11. **What is a White Hat Hacker?**\
    A hacker who performs authorized security testing.

12. **What is reconnaissance?**\
    Collecting information about a target before security testing.

13. **What is DoS?**\
    Denial of Service.

14. **What is DDoS?**\
    Distributed Denial of Service.

15. **What is a botnet?**\
    A group of compromised devices controlled by an attacker.

16. **What is MITM?**\
    Man-in-the-Middle attack.

17. **What is session hijacking?**\
    Taking over a user's active session using a stolen or misused
    session token.

18. **What is malware?**\
    Software intentionally designed to harm or compromise a system.

19. **Which malware spreads automatically?**\
    Worm.

20. **Which malware disguises itself as legitimate software?**\
    Trojan.

21. **Which malware encrypts files and demands money?**\
    Ransomware.

22. **What is a keylogger?**\
    Software that records keyboard inputs.

23. **What is a rootkit?**\
    Malware designed to hide malicious activity.

24. **What is obfuscation?**\
    Making code difficult to understand without changing its intended
    functionality.

25. **What is the difference between active and passive attacks?**\
    Passive attacks observe communication; active attacks modify or
    disrupt it.

------------------------------------------------------------------------

# 10. Last-Minute Revision

Remember these 15 points before entering the viva:

1.  **CIA** = Confidentiality, Integrity, Availability.
2.  **IPv4** = 32 bits.
3.  **Class A** = 1--126.
4.  **Class B** = 128--191.
5.  **Class C** = 192--223.
6.  **Subnetting** = Dividing networks.
7.  **Fragmentation** = Dividing large IP packets.
8.  **HTTP** = Port 80.
9.  **HTTPS** = Port 443.
10. **TLS** = Secures communication.
11. **DoS** = Usually one attacking source; **DDoS** = Distributed
    sources.
12. **MITM** = Intercepts communication.
13. **Session Hijacking** = Steals or misuses session tokens.
14. **Worm** = Self-replicating malware.
15. **Ethical Hacking** = Authorized security testing.

## How to Answer Your Faculty Confidently

For almost every topic, follow this four-step structure:

1.  Give the definition.
2.  Explain how it works.
3.  Give one real-life example.
4.  Mention one prevention method, where applicable.

### Example: DDoS Attack

"Sir/Ma'am, DDoS stands for Distributed Denial of Service. In this
attack, multiple compromised devices send huge amounts of traffic to a
target server. Because of this, genuine users cannot access the website.
For example, an online shopping website may become unavailable due to a
DDoS attack. Firewalls, traffic filtering and DDoS protection services
help prevent it."

That is a good viva answer: short, understandable and technically
correct.

## Suggested Study Priority

If you have limited time, revise these topics first:

1.  CIA Triad.
2.  Classful vs Classless addressing.
3.  Subnetting and Fragmentation.
4.  HTTP vs HTTPS and SSL vs TLS.
5.  DoS vs DDoS.
6.  MITM and Session Hijacking.
7.  Ethical Hacking and its phases.
8.  Obfuscation vs Encryption.
9.  Malware types and their differences.

------------------------------------------------------------------------

**Good luck with your Cyber Security Viva!**

*Prepared as student-friendly revision notes based on the topics shared
and the uploaded CEH study material.*
