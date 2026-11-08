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

// Function: entry_00139044
// Address: 0x139044 - 0x139048
void entry_00139044_0x139044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139044_0x139044");
#endif

    ctx->pc = 0x139044u;

    // 0x139044: 0xc04dea6  jal         func_137A98
    ctx->pc = 0x139044u;
    SET_GPR_U32(ctx, 31, 0x13904Cu);
    ctx->pc = 0x137A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137A98u, 0x139044u, 0x13904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13904Cu;
}
