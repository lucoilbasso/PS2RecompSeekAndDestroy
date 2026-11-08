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

// Function: entry_001b0f18
// Address: 0x1b0f18 - 0x1b0f30
void entry_001b0f18_0x1b0f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0f18_0x1b0f18");
#endif

    switch (ctx->pc) {
        case 0x1b0f18u: goto label_1b0f18;
        case 0x1b0f1cu: goto label_1b0f1c;
        case 0x1b0f20u: goto label_1b0f20;
        case 0x1b0f24u: goto label_1b0f24;
        case 0x1b0f28u: goto label_1b0f28;
        case 0x1b0f2cu: goto label_1b0f2c;
        default: break;
    }

    ctx->pc = 0x1b0f18u;

label_1b0f18:
    // 0x1b0f18: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b0f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1b0f1c:
    // 0x1b0f1c: 0x8c43a974  lw          $v1, -0x568C($v0)
    ctx->pc = 0x1b0f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945140)));
label_1b0f20:
    // 0x1b0f20: 0x60f809  jalr        $v1
label_1b0f24:
    if (ctx->pc == 0x1B0F24u) {
        ctx->pc = 0x1B0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F20u;
        // 0x1b0f24: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F28u;
        goto label_1b0f28;
    }
    ctx->pc = 0x1B0F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B0F28u);
        ctx->pc = 0x1B0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F20u;
        // 0x1b0f24: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0F20u, 0x1B0F28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0F28u;
label_1b0f28:
    // 0x1b0f28: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b0f2c:
    if (ctx->pc == 0x1B0F2Cu) {
        ctx->pc = 0x1B0F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F28u;
        // 0x1b0f2c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F30u;
        goto label_fallthrough_0x1b0f28;
    }
    ctx->pc = 0x1B0F28u;
    {
        const bool branch_taken_0x1b0f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F28u;
        // 0x1b0f2c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f28) {
            ctx->pc = 0x1B0F40u;
            return;
        }
    }
label_fallthrough_0x1b0f28:
    ctx->pc = 0x1B0F30u;
}
