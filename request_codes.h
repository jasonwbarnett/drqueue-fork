/* $Id: request_codes.h,v 1.19 2001/10/16 15:38:05 jorge Exp $ */

#ifndef _REQUEST_CODES_H_
#define _REQUEST_CODES_H_

#define R_R_REGISTER   1	/* Request register computer */
#define R_A_REGISTER   2	/* Answer register computer */
#define R_R_UCSTATUS   3	/* Request to update computer status */
#define R_A_UCSTATUS   4	/* Answer to the previous request */
#define R_R_REGISJOB   5	/* Register a new job */
#define R_A_REGISJOB   6	/* Answer to register new job */
#define R_R_AVAILJOB   7	/* Request available job */
#define R_A_AVAILJOB   8	/* Answer to previous */
#define R_R_TASKFINI   9	/* Request task finished, the slave send this when finishes a task */
#define R_A_TASKFINI   10	/* Answer to the previous */
#define R_R_LISTJOBS   11	/* Request a list of current jobs in the queue */
#define R_A_LISTJOBS   12	/* Answer to the previous */
#define R_R_LISTCOMP   13	/* Request a list of current registered computers */
#define R_A_LISTCOMP   14	/* Answer to the previous */
#define R_R_DELETJOB   15	/* Request a job to be deleted */
#define R_A_DELETJOB   16
#define R_R_STOPJOB    17	/* Stop a job */
#define R_A_STOPJOB    18
#define R_R_CONTJOB    19	/* Continue a stopped job */
#define R_A_CONTJOB    20
#define R_R_HSTOPJOB   21	/* Hard stop a job */
#define R_A_HSTOPJOB   22
#define R_R_JOBXFER    23	/* Job info transfer by index (identification) */
#define R_A_JOBXFER    24
#define R_R_JOBXFERFI  25	/* Job frame info transfer by index (identification) */
#define R_A_JOBXFERFI  26
#define R_R_COMPXFER   27	/* Computer info transfer by index (identification) */
#define R_A_COMPXFER   28
#define R_R_JOBFWAIT   29	/* Job frame waiting (only non-running frames) */
#define R_A_JOBFWAIT   30
#define R_R_JOBFKILL   31	/* Job frame kill (kills only [it's later set to waiting because of the usual handling]) */
#define R_A_JOBFKILL   32
#define R_R_JOBFFINI   33	/* Job frame finished (only waiting frames) */
#define R_A_JOBFFINI   34
#define R_R_JOBFKFIN   35	/* Job frame kill and finished (only running frames) */
#define R_A_JOBFKFIN   36
#define R_R_UCLIMITS   37	/* Update computer limits */
#define R_A_UCLIMITS   38
#define R_R_SLAVEXIT   39	/* Slave exit, one slave must be removed from the queue */
#define R_A_SLAVEXIT   40
#define R_R_JOBSESUP   41	/* SES (Start,End,Step frames) update */
#define R_A_JOBSESUP   42
#define R_R_JOBLNMCS   43	/* Job limit nmaxcpus set */
#define R_A_JOBLNMCS   44
#define R_R_JOBLNMCCS  45	/* Job limit nmaxcpuscomputer set */
#define R_A_JOBLNMCCS  46

/* Requests to the slave */
#define RS_R_KILLTASK           1 /* Request to slave to kill a task */
#define RS_A_KILLTASK           2
#define RS_R_SETNMAXCPUS        3 /* Request to set limits nmaxcpus */
#define RS_A_SETNMAXCPUS        4
#define RS_R_SETMAXFREELOADCPU  5 /* Request to set limits maxfreeloadcpu */
#define RS_A_SETMAXFREELOADCPU  6

#endif /* _REQUEST_CODES_H_ */
