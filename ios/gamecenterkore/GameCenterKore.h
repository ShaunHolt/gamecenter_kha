#pragma once

namespace GameCenterKore {

	int init();

	bool isGameCenterAvailable();
	void authenticateLocalUser();
	bool isUserAuthenticated();
	void registerForAuthenticationNotification();
	
	void showLeaderboard(const char* leaderboardID);
	void showAchievements();
	
	void reportScore(const char* leaderboardID, int score);
	void reportAchievement(const char* achievementID, float percent);
	void resetAchievements();

	void startQuickGame();
	void startInviteGame();
	void showInvitations();
	void signInWithClientID(const char* clientID, bool silent);
	void signOut();
	void sendReliableDataToOthers(int data);
	
	int getReceivedData();
	bool getGameStarted();
	const char* getLocalParticipantId();
	const char* getOpponentParticipantId();
	void leaveRoom();
    bool getGameDisconnected();
    bool getPlaySignedIn();
}
