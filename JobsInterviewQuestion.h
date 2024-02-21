#pragma once
#include <iostream>
#include <string>
#include <vector>

/*
 * Question is write correct form
 * PlayerArray player;
 * player.insert(new TennisPlayer("Furkan"));
 * player.insert(new SoccerPlayer("Ahmet"));
 * player.insert(new TennisPlayer("Fatmanur"));
 * player.print();
 */

class PlayerArray
{
public:
	void insert(PlayerArray* player_array)
	{
		player_arrays_.push_back(player_array);
	}
	virtual void print()
	{
		for (const auto& player : player_arrays_)
		{
			player->print();
		}
	}
private:
	std::vector<PlayerArray*> player_arrays_;
};

class TennisPlayer : public  PlayerArray
{
public:
	TennisPlayer(std::string name)
	{
		name_ = name;
	}
	void print() override
	{
		std::cout << "Player " << name_ << " Play Tennis" << "\n";
	}
private:
	std::string name_;
};

class SoccerPlayer : public  PlayerArray
{
public:
	SoccerPlayer(std::string name)
	{
		name_ = name;
	}
	void print() override
	{
		std::cout << "Player " << name_ << " Play Soccer" << "\n";
	}
private:
	std::string name_;
};