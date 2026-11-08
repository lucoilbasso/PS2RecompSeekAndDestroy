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

// Function: entry_0017bd40
// Address: 0x17bd40 - 0x17bd60
void entry_0017bd40_0x17bd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bd40_0x17bd40");
#endif

    switch (ctx->pc) {
        case 0x17bd54u: goto label_17bd54;
        default: break;
    }

    ctx->pc = 0x17bd40u;

    // 0x17bd40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17bd44: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17BD44u;
    {
        const bool branch_taken_0x17bd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD44u;
        // 0x17bd48: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd44) {
            ctx->pc = 0x17BD60u;
            return;
        }
    }
    ctx->pc = 0x17BD4Cu;
    // 0x17bd4c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17BD4Cu;
    SET_GPR_U32(ctx, 31, 0x17BD54u);
    ctx->pc = 0x17BD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD4Cu;
    // 0x17bd50: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17BD4Cu, 0x17BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD54u;
label_17bd54:
    // 0x17bd54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17BD54u;
    {
        const bool branch_taken_0x17bd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD54u;
        // 0x17bd58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd54) {
            ctx->pc = 0x17BD74u;
            return;
        }
    }
    ctx->pc = 0x17BD5Cu;
    // 0x17bd5c: 0x0  nop
    ctx->pc = 0x17bd5cu;
    // NOP
    ctx->pc = 0x17bd60u;
}
