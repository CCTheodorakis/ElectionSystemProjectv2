
#ifndef VOTING_H
#define VOTING_H

void EventAnnounceElections(int maxStationsCount, int maxSid);
void EventCreateDistrict(int did, int seats);
void EventCreateStation(int sid, int did);
void EventRegisterVoter(int vid, int sid);
void EventRegisterCandidate(int cid, int pid, int did);
void EventVote(int vid, int sid, int cid, int pid);
void EventCountVotes(int did);
void EventFormParliament(void);
void EventPrintDistrict(int did);
void EventPrintStation(int sid);
void EventPrintParty(int pid);
void EventPrintParliament(void);
void EventBonusUnregisterVoter(int vid, int sid);
void EventBonusFreeMemory(void);



#endif
