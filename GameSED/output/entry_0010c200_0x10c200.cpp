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

// Function: entry_0010c200
// Address: 0x10c200 - 0x10c20c
void entry_0010c200_0x10c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c200_0x10c200");
#endif

    ctx->pc = 0x10c200u;

    // 0x10c200: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10c200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x10c204: 0xc040d98  jal         func_103660
    ctx->pc = 0x10C204u;
    SET_GPR_U32(ctx, 31, 0x10C20Cu);
    ctx->pc = 0x10C208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C204u;
    // 0x10c208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103660u, 0x10C204u, 0x10C20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C20Cu;
}
