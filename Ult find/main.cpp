#include <iostream>
#include <cstring>
using namespace std;
//Gets user input passed from main and goes through the character library to find the matching champ.
string charlib(string input){
    //input cleaner//
    string utilize= input;
	string ult;
	if (utilize == "Ahri"){
        ult = " Ahri: Q: Orb of deception. W:Foxfire. E:Charm. R: Spirit Rush";
    }
    else if (utilize == "Akali"){
        ult = " Akali: Q: 5 point strike. W:Twilight Shroud. E:Shuriken Flip. R: Perect Execution";
    }
    else if (utilize == "Kayle"){
        ult = " Kayle: Divine Judgement";
    }
    else if (utilize == "Aphelios"){
        ult = " Aphelios: Moonlight Vigil";
    }
    else if (utilize == "Aatrox"){
        ult = " Aatrox: Q: Darkin Blade. W: Infernal Chains E:Umbral Dash. R:World Ender";
    }
    else if (utilize == "Alistar"){
        ult = " Alistar: Unbreakable Will";
    }
    else if (utilize == "Ornn"){
        ult = " Ornn: Q:Volcanic Rupture. W: Bellows Breath E:Searing Charge. R: Call of the forge god <Ornn Horn>";
    }
    else if (utilize == "Amumu"){
        ult = " Amumu:Q: bandage toss. W: Despair. E: Tantrum.  R:Curse of the Sad Mummy";
    }
    else if (utilize == "Annie"){
        ult = " Annie: Tibbers";
    }
    else if (utilize == "Anivia"){
        ult = " Anivia: Q: Flash Frost. W: Crystallize(Wall) E: Frostbite. R: Glacial Storm";
    }
    else if (utilize == "Ashe"){
        ult = " Ashe: Enchanted Crystal Arrow";
    }
    else if (utilize == "Aurelion Sol"){
        ult = " Aurelion Sol: Voice of Light";
    }
    else if (utilize == "Azir"){
        ult = " Azir: Q: Conquering Sand. W: Arise! E: Shifting Sands. R: Emperor's Divide";
    }
    else if (utilize == "Bard"){
        ult = " Bard: Tempered Fate";
    }
    else if (utilize == "BlitzCrank"){
        ult = " Blitzcrank: Static Field";
    }
    else if (utilize == "Brand"){
        ult = " Brand: Pyroclasm";
    }
    else if (utilize == "Braum"){
        ult = " Braum: Glacial Fissure";
    }
    else if (utilize == "Caitlyn"){
        ult = " Caitlyn: Q: Piltover peracemaker. W: Yordle Snaptrap. E: 90 Cal Net. R: Ace in the Hole";
    }
    else if (utilize == "Camille"){
        ult = " Camille: Q: Precision Protocol. W: Tact Sweep. E: Hookshot. R: Hextech Ultimatum";
    }
    else if (utilize == "Cassiopia"){
        ult = " Cassiopia: Q: Noxius blast. W: Miasma. E: Tiwn Fang. R: Petrifying Gaze";
    }
    else if (utilize == "ChoGath"){
        ult = " Cho'Gath: Feast";
    }
    else if (utilize == "Corki"){
        ult = " Corki: Missile Barrage";
    }
    else if (utilize == "Darius"){
        ult = " Darius: Q: Decimate. W: Crippling strike. E: Aphrend. R: Noxian Guillotine";
    }
    else if (utilize == "Diana"){
        ult = " Diana: Moonfall";
    }
    else if (utilize == "DrMundo"){
        ult = " Dr.Mundo: Max Dosage";
    }
    else if (utilize == "Draven"){
        ult = " Draven: Whirling Death";
    }
    else if (utilize == "Ekko"){
        ult = " Ekko: Q: Timewinder. W: Parellel convergence. E:Phase Drive. R: Chronobreak";
    }
    else if (utilize == "Evelynn"){
        ult = " Evelynn: Last Caress";
    }
    else if (utilize == "Ezreal"){
        ult = " Ezreal: Trueshot Barrage";
    }
    else if (utilize == "Fiddlesticks"){
        ult = " Fiddlesticks: Crowstorm";
    }
    else if (utilize == "Fiora"){
        ult = " Fiora: Grand Challenge";
    }
    else if (utilize == "Fizz"){
        ult = " Fizz: Chum the waters *SHAAAAAAARK*";
    }
    else if (utilize == "Galio"){
        ult = " Galio: Hero's Entrance";
    }
    else if (utilize == "Gangplank"){
        ult = " Gangplank: Cannon Barrage";
    }
    else if (utilize == "Garen"){
        ult = " Garen: Demacian Justice";
    }
    else if (utilize == "Gnar"){
        ult = " Gnar: Mega Gnar";
    }
    else if (utilize == "Gwen"){
        ult = " Gwen: Q: Snip Snip. W: Hallowed Mist. E:Skip'n Slash. R: Needlework.";
    }
    else if (utilize == "Gragas"){
        ult = " Gragas: Explosive cask";
    }
    else if (utilize == "Graves"){
        ult = " Graves: Collateral Damage";
    }
    else if (utilize == "Hecarim"){
        ult = " Hecarim: Q: Rampage. W: Spirit of Dread. E:Devastating charge. R: Onslaught of Shadows";
    }
    else if (utilize == "Heimerdinger"){
        ult = " Heimerdinger: UPGRADE!!! *Big Turret*";
    }
    else if (utilize == "Illaoi"){
        ult = " Illaoi: Leap up faith";
    }
    else if (utilize == "Irelia"){
        ult = " Vanguards edge";
    }
    else if (utilize == "Ivern"){
        ult = " Daisy";
    }
    else if (utilize == "Janna"){
        ult = " Janna: Monsoon";
    }
    else if (utilize == "Heimerdinger"){
        ult = " Heimerdinger: UPGRADE!!! *Big Turret*";
    }
    else if (utilize == "Jax"){
        ult = " Jax: GranndMasters Might";
    }
    else if (utilize == "Jayce"){
        ult = " Jayce: Mercury Hammer";
    }
    else if (utilize == "Jhin"){
        ult = " Jhin: Curtain Call";
    }
    else if (utilize == "Jinx"){
        ult = " Jinx: Super Mega Death Rocket";
    }
    else if (utilize == "Kaisa"){
        ult = " Kaisa: Killer Instinct";
    }
    else if (utilize == "Kalista"){
        ult = " Kalista: Fate's Call";
    }
    else if (utilize == "Karma"){
        ult = " Karma: Mantra";
    }
    else if (utilize == "Karthus"){
        ult = " Karthus: Reqiuem";
    }
    else if (utilize == "Kassadin"){
        ult = " Kassadin: RiftWalk";
    }
    else if (utilize == "Katarina"){
        ult = " Katarina: Death Lotus *SPIN TO WIN*";
    }
    else if (utilize == "Kennen"){
        ult = " Kennen: Slicing Maelstrom";
    }
    else if (utilize == "Khazix"){
        ult = " Khazix: Void Assault";
    }
    else if (utilize == "Kindred"){
        ult = " Kindred: Lambs Respite";
    }
    else if (utilize == "Kled"){
        ult = " Kled: CHAAAAARGE!!!";
    }
    else if (utilize == "Kogmaw"){
        ult = " Kog'Maw: Living Artillary";
    }
    else if (utilize == "LeBlanc"){
        ult = " LeBlanc: Mimic";
    }
    else if (utilize == "Lee Sin"){
        ult = " Lee Sin: Dragons Rage *Kick**Punt*";
    }
    else if (utilize == "Leona"){
        ult = " Leona: Q: Shield bash. W:Eclipse. E: Zenith Blade. R: Solar Flare";
    }
    else if (utilize == "Lillia"){
        ult = " Lillia: Lilting Lullaby";
    }
    else if (utilize == "Lissandra"){
        ult = " Lissandra: Frozen Tomb";
    }
    else if (utilize == "Lucian"){
        ult = " Lucian: Q: Piercing light. W:Ardent Blaze. E: Relentless Pursuit. R: The Culling";
    }
    else if (utilize == "Lulu"){
        ult = " Lulu: Wild Growth";
    }
    else if (utilize == "Lux"){
        ult = " Lux: Final Spark";
    }
    else if (utilize == "Malphite"){
        ult = " Malphite: Unstoppable Forcee";
    }
    else if (utilize == "Malzahar"){
        ult = " Malzahar: Q: Call of the Void. W: Void Swarm. E:Malefic Visions. R: Nether Grasp";
    }
    else if (utilize == "Maokai"){
        ult = " Maokai: Natures Grasp";
    }
    else if (utilize == "MasterYi"){
        ult = " Master Yi: Highlander";
    }
    else if (utilize == "MissFortune"){
        ult = " Miss Fortune: Q: Double Up. W: Strut. E: Make it Rain. R: Bullet Time";
    }
    else if (utilize == "Mordekaiser"){
        ult = " MordeKaiser: Q:Obliterate W: Indestructable E: Deaths Grasp. R: Realm of Death";
    }
    else if (utilize == "Morgana"){
        ult = " Morgana: Soul Shackles";
    }
    else if (utilize == "Nami"){
        ult = " Nami: Tidal Wave";
    }
    else if (utilize == "Nasus"){
        ult = " Nasus: Fury of the Sands";
    }
    else if (utilize == "Nautilus"){
        ult = " Nautilus: Depth Charge";
    }
    else if (utilize == "Neeko"){
        ult = " Neeko: Pop Blossom";
    }
    else if (utilize == "Nocturne"){
        ult = " Nocturne: Paranoia";
    }
    else if (utilize == "Ksante"){
        ult = " Ksante: Q: Nfoto Strikes. W: Path Maker. E: Footwork. R: All Out";
    }
    else if (utilize == "Nunu"){
        ult= " Nunu: Absolute Zero";
    }
    else if (utilize == "Olaf"){
        ult = " Olaf: Ragnarok";
    }
    else if (utilize == "Orianna"){
        ult = " Orianna: Command Shockwave";
    }
    else if (utilize == "Pantheon"){
        ult = " Pantheon: Grand Starfall";
    }
    else if (utilize == "Poppy"){
        ult = " Keepers Verdict";
    }
    else if (utilize == "Pyke"){
        ult = " Pyke: Death from Below";
    }
    else if (utilize == "Qiyana"){
        ult = " Qiyana: Supreme Display of Talent";
    }
    else if (utilize == "Quinn"){
        ult = " Quinn: Behind Enemy Lines";
    }
    else if (utilize == "Rakan"){
        ult = " Rakan: The Quickness *Charm*";
    }
    else if (utilize == "Rammus"){
        ult = " Rammus: Tremors *CannonBall*";
    }
    else if (utilize == "Reksai"){
        ult = " Reksai: Void Rush";
    }
    else if (utilize == "Rell"){
        ult = " Rell: Magnet Storm";
    }
    else if (utilize == "Renekton"){
        ult = " Renekton: Cull the meek";
    }
    else if (utilize == "Rengar"){
        ult = " Rengar: Thrill of the Hunt";
    }
    else if (utilize == "Riven"){
        ult = " Riven: Q:  Broken Wings. W: Ki Burst E: Valor. R: Blade of the Exile.";
    }
    else if (utilize == "Rumble"){
        ult = " Rumble: The Equalizer";
    }
    else if (utilize == "Ryze"){
        ult = " Ryze: Q: Overload. W: Rune Prison. E: Spell Flux. R: Realm Warp";
    }
    else if (utilize == "Samira"){
        ult = " Samira: Inferno Trigger *Spin to Win*";
    }
    else if (utilize == "Sejuani"){
        ult = " Sejuani: Arctic Assault. W: Winter's Wrath. E: Permafrost. R: Glacial Prison";
    }
    else if (utilize == "Senna"){
        ult = " Senna: Dawning Shadow";
    }
    else if (utilize == "Seraphine"){
        ult = " Seraphine: Q: High note. W: Surround Sound. E: Beat Drop. R: Encore";
    }
    else if (utilize == "Sett"){
        ult = " Sett: Q: Knuckle Down. W: Haymaker. E: FaceBreaker. R: The Show Stopper";
    }
    else if (utilize == "Shaco"){
        ult = " Hallucinate *Fake-o*";
    }
    else if (utilize == "Shen"){
        ult = " Shen: Stand United";
    }
    else if (utilize == "Shyvanna"){
        ult = "Shyvanna: Dragon's Descent";
    }
    else if (utilize == "Singed"){
        ult = " Singed: Insanity Potion";
    }
    else if (utilize == "Sion"){
        ult = " Sion: Unstoppable Onslaught";
    }
    else if (utilize == "Sivir"){
        ult = " Sivir: Q: Boomerang Blade. W: Ricochet. E: Spell Shield. R: On the Hunt";
    }
    else if (utilize == "Skarner"){
        ult = " Skarner: Impale";
    }
    else if (utilize == "Sona"){
        ult = " Sona: Crescendo";
    }
    else if (utilize == "Soraka"){
        ult = " Soraka: Wish";
    }
    else if (utilize == "Swain"){
        ult = " Swain: Q: Deaths Hands. W: Vision of empire. E: Nevermove. R: Demonic Ascension";
    }
    else if (utilize == "Sylas"){
        ult = " Sylas: Q: Chain Lash. W: KingSlayer. E: Abscond/Abduct. R: Hijack";
    }
    else if (utilize == "Syndra"){
        ult = " Syndra: Q: Dark Sphere. W: Force of Will. E: Scatter the weak. R: Unleashed Power";
    }
    else if (utilize == "Tahm Kench"){
        ult = " Tahm Kench: Devour";
    }
    else if (utilize == "Taliyah"){
        ult = " Taliyah: Weavers Wall";
    }
    else if (utilize == "Talon"){
        ult = " Talon: Shadow Assault";
    }
    else if (utilize == "Taric"){
        ult = " Taric: Cosmic Radiance";
    }
    else if (utilize == "Teemo"){
        ult = " Teemo: Noxius Trap *Shroom of Doom";
    }
    else if (utilize == "Thresh"){
        ult = " Thresh: The Box";
    }
    else if (utilize == "Tristana"){
        ult = " Tristana: Q: Rapid Fire. W: Rocket Jump. E: Explosive Charge. R: Buster Shot";
    }
    else if (utilize == "Trundle"){
        ult = " Trundle: Subjugate";
    }
    else if (utilize == "Tryndamyre"){
        ult = " Trynd: Undying Rage";
    }
    else if (utilize == "Twisted Fate"){
        ult = " Twisted Fate: Destiny";
    }
    else if (utilize == "Twitch"){
        ult = " Twitch: Spray and Pray";
    }
    else if (utilize == "Udyr"){
        ult = " Udyr: Phoenix Stance";
    }
    else if (utilize == "Urgot"){
        ult = " Urgot: Fear Beyond Death";
    }
    else if (utilize == "Varus"){
        ult = " Varus: Chain of Corruption";
    }
    else if (utilize == "Vayne"){
        ult = " Vayne: Q: Tumble. W: silver Bolts E: Condemn. R: Final Hour";
    }
    else if (utilize == "Veigar"){
        ult = " Veigar: Primordial Burst";
    }
    else if (utilize == "Velkoz"){
        ult = " Velkoz: Life Form Disintegration Ray";
    }
    else if (utilize == "Vi"){
        ult = " Vi: Assault and Battery";
    }
    else if (utilize == "Viktor"){
        ult = " Viktor: Q: Siphon Power: W: Gravity Field. E: Detah Ray. R: Chaos Storm";
    }
    else if (utilize == "Vladimir"){
        ult = " Vlad: Hemoplague";
    }
    else if (utilize == "Volibear"){
        ult = " Voli: StormBringer";
    }
    else if (utilize == "Warwick"){
        ult = " Warwick: Infinite Duress";
    }
    else if (utilize == "Viego"){
        ult = " Viego: Q: BORK W: Spectral Maw. E: Harrowed path. R: Heartbreaker";
    }
    else if (utilize == "Vex"){
        ult = " Vex: Q: Mistral Bolt. W: Personal space. E: Looming Darkness. R: Shadow Surge";
    }
    else if (utilize == "Wukong"){
        ult = " Wukong: Q: Stone Skin. W: Warrior Trickster. E: Nimbus Strike. R: Cyclone";
    }
    else if (utilize == "Xayah"){
        ult = " Xayah: Featherstorm";
    }
    else if (utilize == "Xerath"){
        ult = " Xerath: Rite of Ascension";
    }
    else if (utilize == "Xin Zhao"){
        ult = " Xin Zhao: Crescent Guard";
    }
    else if (utilize == "Yasuo"){
        ult = " Yasuo: Last Breath";
    }
    else if (utilize == "Yone"){
        ult = " Yone: Fate Sealed";
    }
    else if (utilize == "Yorick"){
        ult = " Yorick: Eulogy of the Isles *The Maiden*";
    }
    else if (utilize == "Yuumi"){
        ult = " Yuumi: Q: Prowling Projectile. W: You and Me!(attach). E: Zoomies(Heal). R: Final Chapter";
    }
    else if (utilize == "Zac"){
        ult = " Zac: Let's Bounce!";
    }
    else if (utilize == "Zed"){
        ult = " Zed: Death Mark";
    }
    else if (utilize == "Ziggs"){
        ult = " Ziggs: Mega Inferno Bomb";
    }
    else if (utilize == "Zilean"){
        ult = " Zilean: Chronoshift";
    }
    else if (utilize == "Zoe"){
        ult = " Zoe: Portal Jump";
    }
    else if (utilize == "Zyra"){
        ult = " Zyra: Strangle Thorns";
    }

// Error Code for misspelled name
    else {
            ult = "1";
    }




	return ult;


}




int main()
{
    string Listo [10];
    string src;
    //Array declarations and Text to make it look nice.
    printf ("|| Ult Finder Version 1.0|| \n");
    printf ("||     By Kamaka         || \n");
    printf ("___________________________\n");
    printf ("Instructions:\n  Enter the names of champions. !Case sensitive, No Spaces, All characters alpha-numeric! \n  Type 'r' to return all champ names currently entered\n");
    int x=0;
    while (x<10){
		cout<<"Enter Champ name: ";
        getline(cin, src) ;
        if (src == "r"){
            break;
        }
        string value = charlib(src);
        if (value == "1"){
            cout<< "Champ not found. Check spelling and try again\n";
        }
        else {
            Listo[x]= value;
            x++;
        }
// Doesn't move on if there is a spelling error. Moves Champs into array in order they are entered



    }
    for (int y=0;y<10;y++){
        cout <<y+1<<"."<<Listo[y]<< endl;
    }
    printf("\n           All Done!\n");
    printf("__________________________________");
// Returns the entire array of Champ ults and then exits with Return 0
return 0;
}
