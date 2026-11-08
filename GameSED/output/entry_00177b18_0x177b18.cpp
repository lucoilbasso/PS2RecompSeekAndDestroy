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

// Function: entry_00177b18
// Address: 0x177b18 - 0x177b2c
void entry_00177b18_0x177b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177b18_0x177b18");
#endif

    switch (ctx->pc) {
        case 0x177b28u: goto label_177b28;
        default: break;
    }

    ctx->pc = 0x177b18u;

    // 0x177b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x177b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177b1c: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x177b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x177b20: 0xc06e316  jal         func_1B8C58
    ctx->pc = 0x177B20u;
    SET_GPR_U32(ctx, 31, 0x177B28u);
    ctx->pc = 0x177B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B20u;
    // 0x177b24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8C58u, 0x177B20u, 0x177B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B28u;
label_177b28:
    // 0x177b28: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x177b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x177b2cu;
}
