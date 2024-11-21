// linux terminal commands

// File & Directory Management
// 1.	Pwd                                   – Print working directory.
// 2.	Ls                                    – List directory contents.
// 3.	ls -a                                – List all files, including hidden files.
// 4.	ls -l                                 – List files in long format.
// 5.	cd [directory]                        – Change directory.
// 6.	mkdir [directory]                     – Create a new directory.
// 7.	rmdir [directory]                     – Remove an empty directory.
// 8.	touch [filename]                      – Create a new, empty file.
// 9.	cp [source] [destination]             – Copy files or directories.
// 10.	mv [source] [destination]             – Move or rename files or directories.
// 11.	rm [file]                             – Remove a file.
// 12.	rm -r [directory]                     – Remove a directory and its contents.
// 13.	cat [file]                            – View the content of a file.
// 14.	more [file]                           – View file content page by page.
// 15.	less [file]                           – Similar to more, but allows backward navigation.
// 16.	head [file]                           – Display the first 10 lines of a file.
// 17.	tail [file]                           – Display the last 10 lines of a file.
// 18.	tail -f [file]                        – Continuously display appended content of a file (useful for logs).
// 19.	find [path] -name [file]              – Search for a file by name.
// 20.	locate [file]                         – Find a file’s location in the file system.
// File Permissions & Ownership
// 21.	chmod [permissions] [file]            – Change file permissions.
// 22.	chown [owner] [file]                  – Change file ownership.
// 23.	chgrp [group] [file]                  – Change file group ownership.
// 24.	chmod 755 [file]                      – Give read, write, and execute permissions to the owner, and read & execute permissions to others.
// File Compression & Archiving
// 25.	tar -cvf [archive.tar] [file/folder]  – Create a .tar archive.
// 26.	tar -xvf [archive.tar]                – Extract a .tar archive.
// 27.	gzip [file]                           – Compress a file using gzip.
// 28.	gunzip [file.gz]                      – Decompress a .gz file.
// 29.	zip [archive.zip] [file/folder]       – Compress files into a .zip archive.
// 30.	unzip [archive.zip]                   – Extract a .zip archive.
// File Content Manipulation
// 31.	echo "text" > [file]                  – Write text to a file (overwrite).
// 32.	echo "text" >> [file]                 – Append text to a file.
// 33.	nano [file]                           – Open file in a simple text editor.
// 34.	vim [file]                            – Open file in Vim editor.
// 35.	grep [pattern] [file]                 – Search for a pattern in a file.
// 36.	grep -r [pattern] [directory]         – Search for a pattern recursively.
// 38.	wc [file]                             – Count lines, words, and characters in a file.
// 39.	diff [file1] [file2]                  – Compare two files line by line.
// 40.	awk '{print $1}' [file]               – Extract specific columns from a file.
// 41.	sed 's/old/new/g' [file]              – Replace occurrences of text in a file.
// 42.	cut -d ' ' -f1 [file]                 – Extract fields from a file.
// System Information
// 43.	uname -a                              – Show system information.
// 44.	top                                   – Display system resource usage in real-time.
// 45.	htop                                  – An enhanced version of top (requires installation).
// 46.	df -h                                 – Show disk usage in human-readable format.
// 47.	du -sh [directory]                    – Show the size of a directory.
// 48.	free -h                               – Display available and used memory.
// 49.	uptime                                – Show how long the system has been running.
// 50.	who                                   – Show who is logged in.
// 51.	whoami                                – Display the current user.
// 52.	hostname                              – Show or set the system’s hostname.
// 53.	uname -r                              – Display the kernel version.
// Package Management
// 54.	apt-get update                        – Update package list (Debian/Ubuntu).
// 55.	apt-get upgrade                       – Upgrade all packages (Debian/Ubuntu).
// 56.	apt-get install [package]             – Install a package (Debian/Ubuntu).
// 57.	apt-get remove [package]              – Remove a package (Debian/Ubuntu).
// 58.	yum update                            – Update package list (RedHat/CentOS).
// 59.	yum install [package]                 – Install a package (RedHat/CentOS).
// 60.	yum remove [package]                  – Remove a package (RedHat/CentOS).
// User & Group Management
// 61.	adduser [username]                    – Add a new user.
// 62.	deluser [username]                    – Delete a user.
// 63.	passwd [username]                     – Change a user's password.
// 64.	usermod -aG [group] [user]            – Add a user to a group.
// 65.	groupadd [group]                      – Create a new group.
// 66.	groups [username]                     – Display the groups a user belongs to.
// 67.	su [user]                             – Switch to another user.
// 68.	sudo [command]                        – Execute a command as superuser.
// Process Management
// 69.	ps                                    – Display running processes.
// 70.	ps aux                                – Show detailed information about processes.
// 71.	kill [PID]                            – Terminate a process by its process ID.
// 72.	killall [process name]                – Terminate all processes with the given name.
// 73.	bg                                    – Resume a suspended job in the background.
// 74.	fg                                    – Bring a background job to the foreground.
// 75.	nohup [command] &                     – Run a command that will continue running after logging out.
// Networking
// 76.	ifconfig                              – Show network interfaces and IP addresses.
// 77.	ip addr                               – Display IP address and related information.
// 78.	ping [host]                           – Send ICMP requests to a host.
// 79.	traceroute [host]                     – Display the route packets take to a network host.
// 80.	netstat                               – Display network connections, routing tables, etc.
// 81.	ss                                    – Display socket statistics (netstat replacement).
// 82.	scp [file] [user@host:path]           – Secure copy files over SSH.
// 83.	wget [url]                            – Download a file from the internet.
// 84.	curl [url]                            – Retrieve a URL content.
// Disk & File System Management
// 85.	mount [device] [directory]            – Mount a file system.
// 86.	umount [directory]                    – Unmount a file system.
// 87.	fdisk -l                              – List partition tables.
// 88.	mkfs.ext4 [device]                    – Format a partition with ext4.
// 89.	eject                                 – Eject removable media.
// Scheduling Tasks
// 90.	cron                                  – Background service for scheduling tasks.
// 91.	crontab -e                            – Edit cron jobs.
// 92.	at [time]                             – Schedule a command to run at a specified time.
// 93.	jobs                                  – Display current jobs running in the background.
// Miscellaneous Commands
// 94.	alias ll='ls -la'                     – Create an alias for a command.
// 95.	history                               – Show command history.
// 96.	clear                                 – Clear the terminal screen.
// 97.	date                                  – Show current date and time.
// 98.	cal                                   – Display a calendar.
// 99.	exit                                  – Close the terminal session.
// 100. shutdown -h now                       – Shut down the system immediately.

// Linux Terminal Networking Commands
// 1.	ifconfig                              – Display or configure network interface settings.
// 2.	ip addr                               – Display and manipulate network interface and routing information.
// 3.	ip link                               – Display or manage network device links.
// 4.	ip route                              – Show or manipulate the IP routing table.
// 5.	ping [hostname/IP]                    – Test network connectivity by sending ICMP echo requests.
// 6.	traceroute [hostname/IP]              – Trace the route to a host.
// 7.	mtr [hostname/IP]                     – Network diagnostic tool combining ping and traceroute.
// 8.	dig [domain]                          – Query DNS information.
// 9.	nslookup [domain]                     – Query DNS servers for domain name resolution.
// 10.	host [domain]                         – Perform DNS lookup on a domain.
// 11.	netstat                               – Show network statistics and active connections.
// 12.	ss                                    – Display network sockets and connections (replacement for netstat).
// 13.	route                                 – View or manipulate the routing table.
// 14.	nmap [target]                         – Network exploration and security auditing tool.
// 15.	tcpdump                               – Capture and analyze network traffic.
// 16.	wireshark                             – A graphical tool for capturing and analyzing network packets.
// 17.	curl [URL]                            – Transfer data from or to a server using various protocols (HTTP, FTP).
// 18.	wget [URL]                            – Download files from the web.
// 19.	ethtool [interface]                   – Display or modify Ethernet device settings.
// 20.	iwconfig [interface]                  – Configure wireless network interfaces.
// 21.	nmcli                                 – Command-line interface for NetworkManager.
// 22.	ncat [options] [hostname] [port]      – Read and write data across network connections.
// 23.	telnet [hostname/IP] [port]           – Connect to remote servers via Telnet protocol.
// 24.	ftp [hostname]                        – Connect to an FTP server.
// 25.	scp [source] [destination]            – Securely copy files between hosts over SSH.
// 26.	ssh [user@hostname]                   – Remote login using Secure Shell (SSH).
// 27.	iptables                              – Firewall utility to configure packet filtering rules.
// 28.	ufw                                   – Simplified interface for managing firewall rules.
// 29.	firewalld                             – Manage firewall rules dynamically.
// 30.	hostname                              – Show or set the system's hostname.
// 31.	hostnamectl                           – Control the system's hostname and related settings.
// 32.	arp -a                                – Display the ARP cache.
// 33.	ip neigh                              – Show neighbor/ARP tables.
// 34.	netcat [hostname] [port]              – Network utility for reading/writing across network connections.
// 35.	sshd                                  – Start the OpenSSH Daemon to allow remote login.
// 36.	systemctl status network.service      – Check the status of the network service.
// 37.	systemctl restart network.service     – Restart the network service.
// 38.	systemctl restart NetworkManager      – Restart the NetworkManager service.
// 39.	lsof -i                               – List open files and network connections.
// 40.	whois [domain]                        – Retrieve WHOIS information about a domain name.
// 41.	ip6tables                             – IPv6 packet filtering (similar to iptables).
// 42.	tr [hostname/IP]                      – Trace the network path (IPv6 version of traceroute).
// 43.	tcpflow                               – Analyze TCP flow in network traffic.
// 44.	nload                                 – Monitor incoming and outgoing network traffic.
// 45.	iftop                                 – Monitor bandwidth usage on a network interface.
// 46.	vnstat                                – Network traffic monitor that logs data.
// 47.	tshark                                – Command-line version of Wireshark for packet capture and analysis.
// 48.	curl                                  -I [URL] – Fetch HTTP headers for the specified URL.
// 49.	ipset                                 – Manage and create sets of IP addresses for firewall rules.
// 50.	ping6 [hostname/IP]                   – Send ICMP echo requests over IPv6.
// ________________________________________

// windows terminal commands

// File & Directory Management
// 1.	dir                                   – List the contents of a directory.
// 2.	cd [directory]                        – Change the current directory.
// 3.	cd ..                                 – Move up one directory level.
// 4.	mkdir [directory]                     – Create a new directory.
// 5.	rmdir [directory]                     – Remove an empty directory.
// 6.	del [file]                            – Delete a file.
// 7.	copy [source] [destination]           – Copy files from one location to another.
// 8.	xcopy [source] [destination]          – Copy files and directories, including subdirectories.
// 9.	move [source] [destination]           – Move files from one directory to another.
// 10.	ren [old_name] [new_name]             – Rename a file or directory.
// 11.	attrib [file]                         – View or change file attributes (e.g., read-only, hidden).
// 12.	type [file]                           – Display the contents of a text file.
// 13.	echo [text] > [file]                  – Write text to a file (overwrites file).
// 14.	echo [text] >> [file]                 – Append text to a file.
// 15.	find [string] [file]                  – Search for a specific string in a file.
// 16.	findstr [pattern] [file]              – Find a pattern in files using regular expressions.
// 17.	tree                                  – Display a graphical representation of directory structure.
// 18.	cls                                   – Clear the command prompt screen.
// 19.	fsutil                                – Manage file system tasks such as hard links, quotas, and more.
// 20.	compact /c [file]                     – Compress files.
// Disk & File System Management
// 21.	diskpart                              – Open Disk Partition utility.
// 22.	chkdsk                                – Check disk for errors.
// 23.	format [drive:]                       – Format a disk drive.
// 24.	label [drive:] [label]                – Set or change the label of a drive.
// 25.	vol [drive:]                          – Display the volume label and serial number.
// 26.	sfc /scannow                          – Scan and repair system files.
// 27.	convert [drive:] /fs:ntfs             – Convert a file system to NTFS.
// 28.	defrag [drive:]                       – Defragment a disk drive.
// 29.	diskcopy [drive1:] [drive2:]          – Copy the contents of one floppy disk to another.
// 30.	cipher /e [directory]                 – Encrypt files or directories.
// System Information
// 31.	systeminfo                            – Display detailed system information.
// 32.	hostname                              – Show the computer's hostname.
// 33.	ver                                   – Display the version of Windows.
// 34.	set                                   – Display environment variables.
// 35.	path                                  – Show or modify the executable search path.
// 36.	echo %USERNAME%                       – Display the current user’s name.
// 37.	echo %COMPUTERNAME%                   – Show the computer’s name.
// 38.	tasklist                              – Display a list of running processes.
// 39.	taskkill /PID [pid]                   – Terminate a process by its process ID.
// 40.	wmic                                  – Windows Management Instrumentation Command-line to query system information.
// 41.	ipconfig                              – Display network configuration details.
// 42.	ipconfig /all                         – Show detailed network configuration.
// 43.	ipconfig /release                     – Release the current IP address.
// 44.	ipconfig /renew                       – Renew the IP address.
// 45.	getmac                                – Show the MAC address of network adapters.
// 46.	netstat                               – Show active network connections.
// 47.	tracert [host]                        – Trace the route to a network host.
// 48.	ping [host]                           – Send ICMP echo requests to a network host.
// 49.	pathping [host]                       – Similar to tracert, but provides more detailed network path data.
// 50.	arp -a                                – Display the ARP cache.
// 51.	route print                           – Display the routing table.
// User & Account Management
// 52.	net user [username]                   – Display information about a user.
// 53.	net user [username] [password]        – Change a user’s password.
// 54.	net user [username] /add              – Add a new user.
// 55.	net user [username] /delete           – Delete a user.
// 56.	net localgroup                        – List local groups.

// 57.	net localgroup [groupname] [username] /add    – Add a user to a group.

// 58.	net accounts                         – Set or view account policies.
// 59.	whoami                               – Display the current username and privileges.
// 60.	logoff                               – Log off the current user.
// 61.	shutdown /s /t [seconds]             – Shut down the computer after a specified delay.
// 62.	shutdown /r /t [seconds]             – Restart the computer after a specified delay.
// 63.	runas /user:[username] [command]     – Execute a command as another user.
// 64.	net share                            – List all shared folders on the network.
// 65.	net share [share] /delete            – Remove a network share.
// Task Scheduling & Automation
// 66.	schtasks                             – Manage scheduled tasks.

// 67.	schtasks /create /sc [interval] /tn [taskname] /tr [command] – Create a new scheduled task.

// 68.	schtasks /delete /tn [taskname]      – Delete a scheduled task.
// 69.	at [time] [command]                  – Schedule a task to run at a specific time.
// 70.	for /l %i in (1,1,10) do echo %i     – A basic loop command (useful for automation).
// Networking Commands
// 71.	netsh                                – Network Shell command for managing network settings.
// 72.	netsh interface ip show config       – Show IP configuration for all network interfaces.
// 73.	netsh wlan show profile              – Display saved Wi-Fi profiles.
// 74.	netsh wlan show interfaces           – Display Wi-Fi interface status.
// 75.	ftp [hostname]                       – Open an FTP session to a host.
// 76.	telnet [hostname]                    – Open a telnet connection to a host.
// 77.	net start [service]                  – Start a Windows service.
// 78.	net stop [service]                   – Stop a Windows service.
// File & Data Manipulation
// 79.	fc [file1] [file2]                   – Compare two files and display differences.
// 80.	findstr [string] [file]              – Search for text within files.
// 81.	fciv -md5 [file]                     – Compute the MD5 hash of a file.
// 82.	certutil -hashfile [file] SHA256     – Compute the SHA-256 hash of a file.
// Backup & Restore
// 83.	robocopy [source] [destination] /e   – Copy files and directories, including subdirectories.
// 84.	robocopy [source] [destination] /mir – Mirror a directory (copy all changes, including deletions).
// 85.	wbadmin start backup                 – Start a backup.
// 86.	wbadmin get status                   – Check the status of a backup.
// System Repair & Recovery
// 87.	bcdedit                              – Manage boot configuration data.
// 88.	bootrec /fixmbr                      – Repair the master boot record.
// 89.	bootrec /fixboot                     – Write a new boot sector.
// 90.	bootrec /rebuildbcd                  – Rebuild the boot configuration data.
// 91.	msconfig                             – Open the System Configuration utility.
// Power Management
// 92.	powercfg /a                          – Display available power saving states.
// 93.	powercfg /list                       – List all power plans.
// 94.	powercfg /hibernate on               – Enable hibernation.
// 95.	powercfg /hibernate off              – Disable hibernation.
// System Security & Firewall
// 96.	netsh advfirewall set allprofiles state off   – Disable Windows Firewall.
// 97.	netsh advfirewall set allprofiles state on    – Enable Windows Firewall.
// 98.	cipher /w:[directory]                         – Permanently overwrite deleted data in the directory.
// 99.	cacls [file] /p [user]:[permissions]          – Change file permissions.
// 100.gpupdate /force                                – Force an update of group policies.

// Windows Terminal Networking Commands
// 1.	ipconfig                            – Display IP configuration details.
// 2.	ipconfig /all                       – Show detailed network configuration.
// 3.	ipconfig /release                   – Release the current IP address.
// 4.	ipconfig /renew                     – Renew the IP address.
// 5.	ipconfig /flushdns                  – Flush the DNS resolver cache.
// 6.	ipconfig /displaydns                – Display the contents of the DNS cache.
// 7.	ping [hostname/IP]                  – Send ICMP echo requests to a network host.
// 8.	tracert [hostname/IP]               – Trace the route to a network host.
// 9.	pathping [hostname/IP]              – Similar to tracert, but provides additional network path information.
// 10.	netstat                             – Display network statistics and active connections.
// 11.	netstat -an                         – Show all active connections and listening ports.
// 12.	netstat -r                          – Display the routing table.
// 13.	arp -a                              – Display the ARP cache.
// 14.	getmac                              – Show the MAC address of network interfaces.
// 15.	route print                         – Display the routing table.
// 16.	route add                           – Add a static route to the routing table.
// 17.	telnet [hostname/IP] [port]         – Connect to remote servers via Telnet protocol.
// 18.	ftp [hostname]                      – Connect to an FTP server.
// 19.	nslookup [domain]                   – Query DNS servers for domain name resolution.
// 20.	hostname                            – Display the computer's hostname.
// 21.	netsh                               – Network Shell command for managing network settings.
// 22.	netsh interface ip show config      – Display IP configuration for network interfaces.
// 23.	netsh wlan show profile             – Show saved Wi-Fi profiles.
// 24.	netsh wlan show interfaces          – Display wireless network status.

// 25.	netsh advfirewall set allprofiles state off    – Disable Windows Firewall for all profiles.
// 26.	netsh advfirewall set allprofiles state on     – Enable Windows Firewall for all profiles.

// 27.	net user                            – Display user account information.
// 28.	net share                           – List network shares.
// 29.	tasklist                            – Display running processes.
// 30.	taskkill /PID [pid] /F              – Terminate a process by its PID.
// 31.	sfc /scannow                        – Scan for and repair system files.
// 32.	systeminfo                          – Display detailed system information.
// 33.	pathping [hostname/IP]              – Trace route and provide latency data.
// 34.	net session                         – Display information about open sessions.

// 35.	net use [drive:] \\[computer]\[share] – Map a network drive.

// 36.	nbtstat -n                          – Display NetBIOS statistics.
// 37.	nbtstat -a [hostname/IP]            – Display NetBIOS statistics of a remote machine.
// 38.	net localgroup                      – List local groups.
// 39.	net user [username] /add            – Add a new user.
// 40.	ping -t [hostname/IP]               – Ping a network host continuously.
// 41.	shutdown /i                         – Open the graphical interface for shutdown options.
// 42.	shutdown /r                         – Restart the computer.
// 43.	ping6 [hostname/IP]                 – Send ICMP echo requests over IPv6.
// 44.	net start                           – List or start network services.
// 45.	net stop                            – Stop network services.
// 46.	tracert -6 [hostname/IP]            – Trace route over IPv6.
// 47.	netsh interface ipv6 show config    – Show IPv6 configuration.
// 48.	netsh winsock reset                 – Reset Winsock settings.
// 49.	chkdsk /f                           – Fix errors on the disk.
// 50.	pathping -6 [hostname/IP]           – Perform pathping over IPv6.
