//
// aegis-template.cpp
// ******************
//
// Copyright (c) 2019 Sharon V (sharon at aegis dot gg)
//
// Distributed under the MIT License. (See accompanying file LICENSE)
//

#include <aegis.hpp>

int main()
{
	aegis::core bot(aegis::create_bot_t().log_level(spdlog::level::trace).token("TOKEN"));
	bot.set_on_message_create([](aegis::gateway::events::message_create obj)
	{
		using embed = aegis::gateway::objects::embed;
		using field = aegis::gateway::objects::field;
		if (obj.get_user().is_bot()) return;
		if (obj.msg.get_content() == "Hi")
			obj.msg.get_channel().create_message(
				aegis::create_message_t()
					.content(fmt::format("Hello {}", obj.msg.author.username))
					.embed(
						embed()
						.color(0xFF0000)
						.title("Hello")
						.description(obj.msg.author.username)
						.fields({
							field().name("Hello").value(obj.msg.author.username)
						})
					)
			);
	});
	bot.run();
	bot.yield();
}