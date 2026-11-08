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

// Function: entry_00141610
// Address: 0x141610 - 0x141618
void entry_00141610_0x141610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141610_0x141610");
#endif

    ctx->pc = 0x141610u;

    // 0x141610: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x141610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141614: 0xc050a7c  jal         func_1429F0
    ctx->pc = 0x141614u;
    SET_GPR_U32(ctx, 31, 0x14161Cu);
    ctx->pc = 0x1429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1429F0u, 0x141614u, 0x14161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14161Cu;
}
