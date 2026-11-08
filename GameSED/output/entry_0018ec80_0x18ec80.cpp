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

// Function: entry_0018ec80
// Address: 0x18ec80 - 0x18ec94
void entry_0018ec80_0x18ec80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ec80_0x18ec80");
#endif

    ctx->pc = 0x18ec80u;

    // 0x18ec80: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x18ec80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x18ec84: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x18ec84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x18ec88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ec88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec8c: 0xc0632e6  jal         func_18CB98
    ctx->pc = 0x18EC8Cu;
    SET_GPR_U32(ctx, 31, 0x18EC94u);
    ctx->pc = 0x18EC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC8Cu;
    // 0x18ec90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CB98u, 0x18EC8Cu, 0x18EC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC94u;
}
