/*
 *	server/zone/objects/installation/factory/FactoryObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef FACTORYOBJECT_H_
#define FACTORYOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace manufactureschematic {

class ManufactureSchematic;

} // namespace manufactureschematic
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::manufactureschematic;

namespace server {
namespace zone {
namespace objects {
namespace factorycrate {

class FactoryCrate;

} // namespace factorycrate
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::factorycrate;

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObject;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

namespace server {
namespace zone {
namespace objects {
namespace area {

class ActiveArea;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

namespace server {
namespace zone {
namespace objects {
namespace installation {
namespace factory {

class FactoryHopperObserver;

} // namespace factory
} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation::factory;

#include "server/zone/objects/manufactureschematic/factoryblueprint/BlueprintEntry.h"

#include "server/zone/objects/installation/InstallationObject.h"

namespace server {
namespace zone {
namespace objects {
namespace installation {
namespace factory {

class FactoryObject : public InstallationObject {
public:
	FactoryObject();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void notifyLoadFromDatabase();

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	bool isFactory();

	void createChildObjects();

	void sendInsertManuSui(CreatureObject* player);

	void sendIngredientsNeededSui(CreatureObject* player);

	void sendIngredientHopper(CreatureObject* player);

	void sendOutputHopper(CreatureObject* player);

	void openHopper(Observable* observable, ManagedObject* arg1);

	void closeHopper(Observable* observable, ManagedObject* arg1);

	void handleInsertFactorySchem(CreatureObject* player, ManufactureSchematic* schematic);

	void handleRemoveFactorySchem(CreatureObject* player);

	void handleOperateToggle(CreatureObject* player);

	void createNewObject();

	String getRedeedMessage();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	FactoryObject(DummyConstructorParameter* param);

	virtual ~FactoryObject();

	friend class FactoryObjectHelper;
};

} // namespace factory
} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation::factory;

namespace server {
namespace zone {
namespace objects {
namespace installation {
namespace factory {

class FactoryObjectImplementation : public InstallationObjectImplementation {
protected:
	Vector<int> craftingTabsSupported;

	int timer;

	String currentUserName;

	int currentRunCount;

	ManagedReference<FactoryHopperObserver* > hopperObserver;

public:
	FactoryObjectImplementation();

	FactoryObjectImplementation(DummyConstructorParameter* param);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	void notifyLoadFromDatabase();

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	bool isFactory();

	void createChildObjects();

	void sendInsertManuSui(CreatureObject* player);

	void sendIngredientsNeededSui(CreatureObject* player);

	void sendIngredientHopper(CreatureObject* player);

	void sendOutputHopper(CreatureObject* player);

	void openHopper(Observable* observable, ManagedObject* arg1);

	void closeHopper(Observable* observable, ManagedObject* arg1);

	void handleInsertFactorySchem(CreatureObject* player, ManufactureSchematic* schematic);

	void handleRemoveFactorySchem(CreatureObject* player);

	void handleOperateToggle(CreatureObject* player);

private:
	bool startFactory();

	void stopFactory(const String& message, const String& tt, const String& to, const int di);

	void stopFactory(String& type, String& displayedName);

public:
	void createNewObject();

private:
	FactoryCrate* locateCrateInOutputHopper(TangibleObject* prototype);

	FactoryCrate* createNewFactoryCrate(TangibleObject* prototype);

	bool populateSchematicBlueprint(ManufactureSchematic* schematic);

	void collectMatchesInInputHopper(BlueprintEntry* entry, SceneObject* inputHopper);

public:
	String getRedeedMessage();

	WeakReference<FactoryObject*> _this;

	operator const FactoryObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~FactoryObjectImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class FactoryObject;
};

class FactoryObjectAdapter : public InstallationObjectAdapter {
public:
	FactoryObjectAdapter(FactoryObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void notifyLoadFromDatabase();

	bool isFactory();

	void createChildObjects();

	void sendInsertManuSui(CreatureObject* player);

	void sendIngredientsNeededSui(CreatureObject* player);

	void sendIngredientHopper(CreatureObject* player);

	void sendOutputHopper(CreatureObject* player);

	void openHopper(Observable* observable, ManagedObject* arg1);

	void closeHopper(Observable* observable, ManagedObject* arg1);

	void handleInsertFactorySchem(CreatureObject* player, ManufactureSchematic* schematic);

	void handleRemoveFactorySchem(CreatureObject* player);

	void handleOperateToggle(CreatureObject* player);

	void createNewObject();

	String getRedeedMessage();

};

class FactoryObjectHelper : public DistributedObjectClassHelper, public Singleton<FactoryObjectHelper> {
	static FactoryObjectHelper* staticInitializer;

public:
	FactoryObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<FactoryObjectHelper>;
};

} // namespace factory
} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation::factory;

#endif /*FACTORYOBJECT_H_*/
