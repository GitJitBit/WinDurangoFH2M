#define DurangoAPI      __stdcall
#define RtlSetLastWin32ErrorAndNtStatusFromNtStatus(Status) \
    SetLastError(RtlNtStatusToDosError(Status))
#define RtlGetLastWin32ErrorAndNtStatusFromNtStatus(Status) \
    (SetLastError(RtlNtStatusToDosError(Status)), GetLastError())
