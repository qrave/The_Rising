/*
 *	server/zone/objects/resource/ResourceContainer.cpp generated by engine3 IDL compiler 0.60
 */

#include "ResourceContainer.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/area/ActiveArea.h"

/*
 *	ResourceContainerStub
 */

ResourceContainer::ResourceContainer() : TangibleObject(DummyConstructorParameter::instance()) {
	ResourceContainerImplementation* _implementation = new ResourceContainerImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

ResourceContainer::ResourceContainer(DummyConstructorParameter* param) : TangibleObject(param) {
}

ResourceContainer::~ResourceContainer() {
}


void ResourceContainer::initializeTransientMembers() {
	ResourceContainerImplementation* _implementation = (ResourceContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void ResourceContainer::destroyObjectFromDatabase(bool destroyContainedObjects) {
	ResourceContainerImplementation* _implementation = (ResourceContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addBooleanParameter(destroyContainedObjects);

		method.executeWithVoidReturn();
	} else
		_implementation->destroyObjectFromDatabase(destroyContainedObjects);
}

void ResourceContainer::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	ResourceContainerImplementation* _implementation = (ResourceContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void ResourceContainer::sendBaselinesTo(SceneObject* player) {
	ResourceContainerImplementation* _implementation = (ResourceContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendBaselinesTo(player);
}

void ResourceContainer::setQuantity(int quantity, bool destroyOnZero) {
	ResourceContainerImplementation* _implementation = (ResourceContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addSignedIntParameter(quantity);
		method.addBooleanParameter(destroyOnZero);

		method.executeWithVoidReturn();
	} else
		_implementation->setQuantity(quantity, destroyOnZero);
}

bool ResourceContainer::isResourceContainer() {
	ResourceContainerImplementation* _implementation = (ResourceContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isResourceContainer();
}

int ResourceContainer::getQuantity() {
	ResourceContainerImplementation* _implementation = (ResourceContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getQuantity();
}

int ResourceContainer::getUseCount() {
	ResourceContainerImplementation* _implementation = (ResourceContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getUseCount();
}

void ResourceContainer::setSpawnObject(ResourceSpawn* spawn) {
	ResourceContainerImplementation* _implementation = (ResourceContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(spawn);

		method.executeWithVoidReturn();
	} else
		_implementation->setSpawnObject(spawn);
}

String ResourceContainer::getSpawnName() {
	ResourceContainerImplementation* _implementation = (ResourceContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		method.executeWithAsciiReturn(_return_getSpawnName);
		return _return_getSpawnName;
	} else
		return _implementation->getSpawnName();
}

String ResourceContainer::getSpawnType() {
	ResourceContainerImplementation* _implementation = (ResourceContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		method.executeWithAsciiReturn(_return_getSpawnType);
		return _return_getSpawnType;
	} else
		return _implementation->getSpawnType();
}

unsigned long long ResourceContainer::getSpawnID() {
	ResourceContainerImplementation* _implementation = (ResourceContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getSpawnID();
}

ResourceSpawn* ResourceContainer::getSpawnObject() {
	ResourceContainerImplementation* _implementation = (ResourceContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return (ResourceSpawn*) method.executeWithObjectReturn();
	} else
		return _implementation->getSpawnObject();
}

void ResourceContainer::split(int newStackSize) {
	ResourceContainerImplementation* _implementation = (ResourceContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addSignedIntParameter(newStackSize);

		method.executeWithVoidReturn();
	} else
		_implementation->split(newStackSize);
}

void ResourceContainer::split(int newStackSize, PlayerCreature* player) {
	ResourceContainerImplementation* _implementation = (ResourceContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addSignedIntParameter(newStackSize);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->split(newStackSize, player);
}

void ResourceContainer::combine(ResourceContainer* fromContainer) {
	ResourceContainerImplementation* _implementation = (ResourceContainerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addObjectParameter(fromContainer);

		method.executeWithVoidReturn();
	} else
		_implementation->combine(fromContainer);
}

DistributedObjectServant* ResourceContainer::_getImplementation() {

	_updated = true;
	return _impl;
}

void ResourceContainer::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ResourceContainerImplementation
 */

ResourceContainerImplementation::ResourceContainerImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


ResourceContainerImplementation::~ResourceContainerImplementation() {
}


void ResourceContainerImplementation::finalize() {
}

void ResourceContainerImplementation::_initializeImplementation() {
	_setClassHelper(ResourceContainerHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void ResourceContainerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ResourceContainer*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ResourceContainerImplementation::_getStub() {
	return _this;
}

ResourceContainerImplementation::operator const ResourceContainer*() {
	return _this;
}

void ResourceContainerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ResourceContainerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ResourceContainerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ResourceContainerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ResourceContainerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ResourceContainerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ResourceContainerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ResourceContainerImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("ResourceContainer");

}

void ResourceContainerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ResourceContainerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ResourceContainerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "spawnObject") {
		TypeInfo<ManagedReference<ResourceSpawn* > >::parseFromBinaryStream(&spawnObject, stream);
		return true;
	}

	if (_name == "stackQuantity") {
		TypeInfo<int >::parseFromBinaryStream(&stackQuantity, stream);
		return true;
	}


	return false;
}

void ResourceContainerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ResourceContainerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ResourceContainerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "spawnObject";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<ResourceSpawn* > >::toBinaryStream(&spawnObject, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "stackQuantity";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&stackQuantity, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 2 + TangibleObjectImplementation::writeObjectMembers(stream);
}

ResourceContainerImplementation::ResourceContainerImplementation() {
	_initializeImplementation();
	// server/zone/objects/resource/ResourceContainer.idl(65):   	stackQuantity = 0;
	stackQuantity = 0;
	// server/zone/objects/resource/ResourceContainer.idl(67):   	setLoggingName("ResourceContainer");
	setLoggingName("ResourceContainer");
}

void ResourceContainerImplementation::initializeTransientMembers() {
	// server/zone/objects/resource/ResourceContainer.idl(71):  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/resource/ResourceContainer.idl(73):  		Logger.setLoggingName("ResourceContainer");
	Logger::setLoggingName("ResourceContainer");
}

bool ResourceContainerImplementation::isResourceContainer() {
	// server/zone/objects/resource/ResourceContainer.idl(105):  		return true;
	return true;
}

int ResourceContainerImplementation::getQuantity() {
	// server/zone/objects/resource/ResourceContainer.idl(109):  		return stackQuantity;
	return stackQuantity;
}

int ResourceContainerImplementation::getUseCount() {
	// server/zone/objects/resource/ResourceContainer.idl(113):  		return getQuantity();
	return getQuantity();
}

void ResourceContainerImplementation::setSpawnObject(ResourceSpawn* spawn) {
	// server/zone/objects/resource/ResourceContainer.idl(117):  		spawnObject = spawn;
	spawnObject = spawn;
}

String ResourceContainerImplementation::getSpawnName() {
	String ret;
	// server/zone/objects/resource/ResourceContainer.idl(123):  		return 
	if (spawnObject != NULL){
	// server/zone/objects/resource/ResourceContainer.idl(124):  			ret = spawnObject.getName();
	ret = spawnObject->getName();
}
	// server/zone/objects/resource/ResourceContainer.idl(127):  ret;
	return ret;
}

String ResourceContainerImplementation::getSpawnType() {
	String ret;
	// server/zone/objects/resource/ResourceContainer.idl(133):  		return 
	if (spawnObject != NULL){
	// server/zone/objects/resource/ResourceContainer.idl(134):  			ret = spawnObject.getType();
	ret = spawnObject->getType();
}
	// server/zone/objects/resource/ResourceContainer.idl(137):  ret;
	return ret;
}

unsigned long long ResourceContainerImplementation::getSpawnID() {
	// server/zone/objects/resource/ResourceContainer.idl(141):  		unsigned long id = 0;
	unsigned long long id = 0;
	// server/zone/objects/resource/ResourceContainer.idl(143):  		return 
	if (spawnObject != NULL){
	// server/zone/objects/resource/ResourceContainer.idl(144):  			id = spawnObject.getObjectID();
	id = spawnObject->getObjectID();
}
	// server/zone/objects/resource/ResourceContainer.idl(147):  id;
	return id;
}

ResourceSpawn* ResourceContainerImplementation::getSpawnObject() {
	// server/zone/objects/resource/ResourceContainer.idl(151):  		return spawnObject;
	return spawnObject;
}

/*
 *	ResourceContainerAdapter
 */

ResourceContainerAdapter::ResourceContainerAdapter(ResourceContainerImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* ResourceContainerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		destroyObjectFromDatabase(inv->getBooleanParameter());
		break;
	case 8:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 9:
		setQuantity(inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 10:
		resp->insertBoolean(isResourceContainer());
		break;
	case 11:
		resp->insertSignedInt(getQuantity());
		break;
	case 12:
		resp->insertSignedInt(getUseCount());
		break;
	case 13:
		setSpawnObject((ResourceSpawn*) inv->getObjectParameter());
		break;
	case 14:
		resp->insertAscii(getSpawnName());
		break;
	case 15:
		resp->insertAscii(getSpawnType());
		break;
	case 16:
		resp->insertLong(getSpawnID());
		break;
	case 17:
		resp->insertLong(getSpawnObject()->_getObjectID());
		break;
	case 18:
		split(inv->getSignedIntParameter());
		break;
	case 19:
		split(inv->getSignedIntParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case 20:
		combine((ResourceContainer*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ResourceContainerAdapter::initializeTransientMembers() {
	((ResourceContainerImplementation*) impl)->initializeTransientMembers();
}

void ResourceContainerAdapter::destroyObjectFromDatabase(bool destroyContainedObjects) {
	((ResourceContainerImplementation*) impl)->destroyObjectFromDatabase(destroyContainedObjects);
}

void ResourceContainerAdapter::sendBaselinesTo(SceneObject* player) {
	((ResourceContainerImplementation*) impl)->sendBaselinesTo(player);
}

void ResourceContainerAdapter::setQuantity(int quantity, bool destroyOnZero) {
	((ResourceContainerImplementation*) impl)->setQuantity(quantity, destroyOnZero);
}

bool ResourceContainerAdapter::isResourceContainer() {
	return ((ResourceContainerImplementation*) impl)->isResourceContainer();
}

int ResourceContainerAdapter::getQuantity() {
	return ((ResourceContainerImplementation*) impl)->getQuantity();
}

int ResourceContainerAdapter::getUseCount() {
	return ((ResourceContainerImplementation*) impl)->getUseCount();
}

void ResourceContainerAdapter::setSpawnObject(ResourceSpawn* spawn) {
	((ResourceContainerImplementation*) impl)->setSpawnObject(spawn);
}

String ResourceContainerAdapter::getSpawnName() {
	return ((ResourceContainerImplementation*) impl)->getSpawnName();
}

String ResourceContainerAdapter::getSpawnType() {
	return ((ResourceContainerImplementation*) impl)->getSpawnType();
}

unsigned long long ResourceContainerAdapter::getSpawnID() {
	return ((ResourceContainerImplementation*) impl)->getSpawnID();
}

ResourceSpawn* ResourceContainerAdapter::getSpawnObject() {
	return ((ResourceContainerImplementation*) impl)->getSpawnObject();
}

void ResourceContainerAdapter::split(int newStackSize) {
	((ResourceContainerImplementation*) impl)->split(newStackSize);
}

void ResourceContainerAdapter::split(int newStackSize, PlayerCreature* player) {
	((ResourceContainerImplementation*) impl)->split(newStackSize, player);
}

void ResourceContainerAdapter::combine(ResourceContainer* fromContainer) {
	((ResourceContainerImplementation*) impl)->combine(fromContainer);
}

/*
 *	ResourceContainerHelper
 */

ResourceContainerHelper* ResourceContainerHelper::staticInitializer = ResourceContainerHelper::instance();

ResourceContainerHelper::ResourceContainerHelper() {
	className = "ResourceContainer";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ResourceContainerHelper::finalizeHelper() {
	ResourceContainerHelper::finalize();
}

DistributedObject* ResourceContainerHelper::instantiateObject() {
	return new ResourceContainer(DummyConstructorParameter::instance());
}

DistributedObjectServant* ResourceContainerHelper::instantiateServant() {
	return new ResourceContainerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ResourceContainerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ResourceContainerAdapter((ResourceContainerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

