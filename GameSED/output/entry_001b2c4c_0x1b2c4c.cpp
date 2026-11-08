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

// Function: entry_001b2c4c
// Address: 0x1b2c4c - 0x1b2c6c
void entry_001b2c4c_0x1b2c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2c4c_0x1b2c4c");
#endif

    switch (ctx->pc) {
        case 0x1b2c54u: goto label_1b2c54;
        case 0x1b2c5cu: goto label_1b2c5c;
        default: break;
    }

    ctx->pc = 0x1b2c4cu;

    // 0x1b2c4c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B2C4Cu;
    SET_GPR_U32(ctx, 31, 0x1B2C54u);
    ctx->pc = 0x1B2C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C4Cu;
    // 0x1b2c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B2C4Cu, 0x1B2C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C54u;
label_1b2c54:
    // 0x1b2c54: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B2C54u;
    SET_GPR_U32(ctx, 31, 0x1B2C5Cu);
    ctx->pc = 0x1B2C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C54u;
    // 0x1b2c58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B2C54u, 0x1B2C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C5Cu;
label_1b2c5c:
    // 0x1b2c5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b2c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2c60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b2c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2c64: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1b2c64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b2c68: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1b2c68u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    ctx->pc = 0x1b2c6cu;
}
