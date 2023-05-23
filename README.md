<h1 align="center"> ICS3U Codespace Startup - GBDK </h1>
<img src="https://github.com/Mr-Coxall/ICS3U-Codespace-Startup-GBDK/raw/main/images/GBDK.png" alt="github-codespaces" class="center">

Use this GitHub repository to setup an ICS3U Codespace, for developing GameBoy games using GBDK-2020.

It includes everything you will need to code original GameBoy games in C.

<br>

It will take ~ 10 minutes to build your server, be patient and wait while it is building it. You can click on "View Logs" and watch the process happen. It will not take this long to open it up after the initial setup, it will take < 30 seconds from then on.

Once running ENSURE you go into the ```compile.sh``` file and add in your GitHub owner name on lines 10 & 16. For example
```
rm /workspaces/ICS3U-Final-Project-GBDK-{github login}/simulator/rom/game.gb
to
rm /workspaces/ICS3U-Final-Project-GBDK-mr-coxall/simulator/rom/game.gb
```

Also update this README.md file to get the Mr Coxall Super Linter Working.
```
[![Mr Coxall's Super Linter](https://github.com/<OWNER>/<REPOSITORY>/workflows/Mr%20Coxall's%20Super%20Linter/badge.svg)](https://github.com/<OWNER>/<REPOSITORY>/actions)
to
[![Mr Coxall's Super Linter](https://github.com/MTHS-ICS3U-2-2022/mr-coxall/workflows/Mr%20Coxall's%20Super%20Linter/badge.svg)](https://github.com/MTHS-ICS3U-2-2022/mr-coxall/actions)
```

Then ensure you have the "Live Server" extensions installed, so that you can run the GameBoy simulator: https://marketplace.visualstudio.com/items?itemName=ritwickdey.LiveServer

[![Mr Coxall's Super Linter](https://github.com/<OWNER>/<REPOSITORY>/workflows/Mr%20Coxall's%20Super%20Linter/badge.svg)](https://github.com/<OWNER>/<REPOSITORY>/actions)

[![CC BY-NC-SA 4.0](https://img.shields.io/badge/License-CC%20BY--NC--SA%204.0-blue.svg)](./LICENSE)

<h1 style="color:red;font-size:150px;text-align:center;"> 🕹️🎮🥷 </h1>
