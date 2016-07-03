 class Tank
{
	targetType=2;
	target="Tank";
	class Actions
	{
		class Lock: ExileAbstractAction
		{
			title="Lock";
			condition="((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
			action="true spawn ExileClient_object_lock_toggle";
		};
		class Unlock: ExileAbstractAction
		{
			title="Unlock";
			condition="((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
			action="false spawn ExileClient_object_lock_toggle";
		};
		class Repair: ExileAbstractAction
		{
			title="Repair";
			condition="call ExileClient_object_vehicle_interaction_show";
			action="_this call ExileClient_object_vehicle_Repair";
		};
		class Flip: ExileAbstractAction
		{
			title="Flip";
			condition="call ExileClient_object_vehicle_interaction_show";
			action="_this call Exileclient_object_vehicle_flip";
		};
		class Refuel: ExileAbstractAction
		{
			title="Refuel";
			condition="call ExileClient_object_vehicle_interaction_show";
			action="_this call ExileClient_object_vehicle_refuel";
		};
		class DrainFuel: ExileAbstractAction
		{
			title="Drain Fuel";
			condition="call ExileClient_object_vehicle_interaction_show";
			action="_this call ExileClient_object_vehicle_drain";
		};
	};
};