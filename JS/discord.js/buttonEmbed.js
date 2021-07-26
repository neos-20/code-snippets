const Discord = require("discord.js");

const content = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15];
const embeds = [];
for (var i = 0; i < content.length; i++) {
  const embed = new Discord.MessageEmbed().setDescription(`ID: ${content[i]}`);
  embeds.push(embed);
}

let buttons = [];
for (var i = 0; i < content.length; i++) {
  const button = { id: `btn_${content[i]}`, label: `BTN: ${content[i]} `, style: "SUCCESS" };
  buttons.push(button);
}

const url = { label: "Google", style: "url", url: "https://google.com" };
buttons = [...buttons, url];

Button({ channel: message.channel, userID: message.author.id,
  embeds: embeds,
  buttons: buttons,
  timeout: 1000
});
