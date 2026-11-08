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

// Function: entry_001b2c24
// Address: 0x1b2c24 - 0x1b2c4c
void entry_001b2c24_0x1b2c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2c24_0x1b2c24");
#endif

    switch (ctx->pc) {
        case 0x1b2c34u: goto label_1b2c34;
        case 0x1b2c44u: goto label_1b2c44;
        default: break;
    }

    ctx->pc = 0x1b2c24u;

    // 0x1b2c24: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b2c28: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1b2c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1b2c2c: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B2C2Cu;
    SET_GPR_U32(ctx, 31, 0x1B2C34u);
    ctx->pc = 0x1B2C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C2Cu;
    // 0x1b2c30: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B2C2Cu, 0x1B2C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C34u;
label_1b2c34:
    // 0x1b2c34: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2C34u;
    {
        const bool branch_taken_0x1b2c34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c34) {
            ctx->pc = 0x1B2C4Cu;
            return;
        }
    }
    ctx->pc = 0x1B2C3Cu;
    // 0x1b2c3c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B2C3Cu;
    SET_GPR_U32(ctx, 31, 0x1B2C44u);
    ctx->pc = 0x1B2C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C3Cu;
    // 0x1b2c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B2C3Cu, 0x1B2C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C44u;
label_1b2c44:
    // 0x1b2c44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2C44u;
    {
        const bool branch_taken_0x1b2c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C44u;
        // 0x1b2c48: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c44) {
            ctx->pc = 0x1B2C6Cu;
            return;
        }
    }
    ctx->pc = 0x1B2C4Cu;
}
