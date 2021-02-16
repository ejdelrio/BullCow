// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

#define FSTRING class FString
#define NUMBER_OF_WORDS 10

FSTRING RandomWord;
const FSTRING WelcomeMessage = TEXT("Welcome To Bull Cow");
const FSTRING ContinuationPrompt = TEXT("Press enter to continue\n");
const FSTRING HiddenWord = TEXT("Bacon");
const FSTRING HiddenWordArray[NUMBER_OF_WORDS] =
        {
            "Bacon",
            "Sauce",
            "Money",
            "Meat",
            "Turkey",
            "Sandwich",
            "Women",
            "Tower",
            "Country",
            "Pickels"
        };

void UBullCowCartridge::BeginPlay() // When the game starts
{
    int indexOfRandomWordToGuess = rand() % NUMBER_OF_WORDS;
    RandomWord = HiddenWordArray[indexOfRandomWordToGuess];

    Super::BeginPlay();
    PrintLine(WelcomeMessage);
    PrintLine(ContinuationPrompt);
}

void UBullCowCartridge::OnInput(const FSTRING& Input) // When the player hits enter
{
    ClearScreen();
    PrintLine(ContinuationPrompt);
}