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

// Function: entry_001b0c88
// Address: 0x1b0c88 - 0x1b0ca0
void entry_001b0c88_0x1b0c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0c88_0x1b0c88");
#endif

    switch (ctx->pc) {
        case 0x1b0c88u: goto label_1b0c88;
        case 0x1b0c8cu: goto label_1b0c8c;
        case 0x1b0c90u: goto label_1b0c90;
        case 0x1b0c94u: goto label_1b0c94;
        case 0x1b0c98u: goto label_1b0c98;
        case 0x1b0c9cu: goto label_1b0c9c;
        default: break;
    }

    ctx->pc = 0x1b0c88u;

label_1b0c88:
    // 0x1b0c88: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
label_1b0c8c:
    if (ctx->pc == 0x1B0C8Cu) {
        ctx->pc = 0x1B0C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C88u;
        // 0x1b0c8c: 0x3c150025  lui         $s5, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C90u;
        goto label_1b0c90;
    }
    ctx->pc = 0x1B0C88u;
    {
        const bool branch_taken_0x1b0c88 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1B0C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C88u;
        // 0x1b0c8c: 0x3c150025  lui         $s5, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c88) {
            ctx->pc = 0x1B0CA0u;
            return;
        }
    }
    ctx->pc = 0x1B0C90u;
label_1b0c90:
    // 0x1b0c90: 0x11882f  dsubu       $s1, $zero, $s1
    ctx->pc = 0x1b0c90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) - GPR_U64(ctx, 17));
label_1b0c94:
    // 0x1b0c94: 0x8ea2a974  lw          $v0, -0x568C($s5)
    ctx->pc = 0x1b0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945140)));
label_1b0c98:
    // 0x1b0c98: 0x40f809  jalr        $v0
label_1b0c9c:
    if (ctx->pc == 0x1B0C9Cu) {
        ctx->pc = 0x1B0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C98u;
        // 0x1b0c9c: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CA0u;
        goto label_fallthrough_0x1b0c98;
    }
    ctx->pc = 0x1B0C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0CA0u);
        ctx->pc = 0x1B0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C98u;
        // 0x1b0c9c: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0C98u, 0x1B0CA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1b0c98:
    ctx->pc = 0x1B0CA0u;
}
