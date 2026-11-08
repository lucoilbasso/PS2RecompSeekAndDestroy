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

// Function: entry_001a2f10
// Address: 0x1a2f10 - 0x1a2f28
void entry_001a2f10_0x1a2f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2f10_0x1a2f10");
#endif

    switch (ctx->pc) {
        case 0x1a2f20u: goto label_1a2f20;
        default: break;
    }

    ctx->pc = 0x1a2f10u;

label_1a2f10:
    // 0x1a2f10: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1a2f14:
    if (ctx->pc == 0x1A2F14u) {
        ctx->pc = 0x1A2F18u;
        goto label_1a2f18;
    }
    ctx->pc = 0x1A2F10u;
    {
        const bool branch_taken_0x1a2f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2f10) {
            ctx->pc = 0x1A2F50u;
            return;
        }
    }
    ctx->pc = 0x1A2F18u;
label_1a2f18:
    // 0x1a2f18: 0x40f809  jalr        $v0
label_1a2f1c:
    if (ctx->pc == 0x1A2F1Cu) {
        ctx->pc = 0x1A2F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F18u;
        // 0x1a2f1c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F20u;
        goto label_1a2f20;
    }
    ctx->pc = 0x1A2F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2F20u);
        ctx->pc = 0x1A2F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F18u;
        // 0x1a2f1c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2F18u, 0x1A2F20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2F20u;
label_1a2f20:
    // 0x1a2f20: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a2f24:
    if (ctx->pc == 0x1A2F24u) {
        ctx->pc = 0x1A2F28u;
        goto label_fallthrough_0x1a2f20;
    }
    ctx->pc = 0x1A2F20u;
    {
        const bool branch_taken_0x1a2f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2f20) {
            ctx->pc = 0x1A2F50u;
            return;
        }
    }
label_fallthrough_0x1a2f20:
    ctx->pc = 0x1A2F28u;
}
