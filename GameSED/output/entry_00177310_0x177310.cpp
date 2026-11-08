#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00177310
// Address: 0x177310 - 0x17731c
void entry_00177310_0x177310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177310_0x177310");
#endif

    ctx->pc = 0x177310u;

    // 0x177310: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x177314: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x177314u;
    SET_GPR_U32(ctx, 31, 0x17731Cu);
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x177314u, 0x17731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17731Cu;
}
