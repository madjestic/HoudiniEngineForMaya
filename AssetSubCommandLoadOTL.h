#ifndef ASSETSUBCOMMANDLOADOTL_H
#define ASSETSUBCOMMANDLOADOTL_H

#include "AssetSubCommand.h"

#include <maya/MDagModifier.h>
#include <maya/MString.h>

class AssetSubCommandLoadOTL : public AssetSubCommand
{
    public:
	AssetSubCommandLoadOTL(
		const MString &otlFile
		);
	virtual ~AssetSubCommandLoadOTL();

	virtual MStatus doIt();
	virtual MStatus redoIt();
	virtual MStatus undoIt();

	virtual bool isUndoable() const;

    protected:
	MString myOTLFile;

	MDagModifier myDagModifier;
};

#endif
