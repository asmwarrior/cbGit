#ifndef GITMODEL_H
#define GITMODEL_H

#include <vector>
#include <string>

using namespace std;

class FileStatuses;

class GitModel
{
    public:
        GitModel(const string& workDir);
        void getStatus(FileStatuses& fileStatuses,
                       const string& fileName = "");
        void add(const vector<string>& filesToAdd);
        void commitAll(const string& message);
        void commitFiles(const vector<string>& relativeFileNames,
                         const string& message);
        void checkoutFile(const string& fileName);
        void resetFile(const string& fileName);
        virtual ~GitModel();
    protected:
    private:
        string m_workDir;
};

#endif // GITMODEL_H
