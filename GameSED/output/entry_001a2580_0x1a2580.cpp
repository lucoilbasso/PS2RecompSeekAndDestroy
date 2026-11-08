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

// Function: entry_001a2580
// Address: 0x1a2580 - 0x1a2594
void entry_001a2580_0x1a2580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2580_0x1a2580");
#endif

    ctx->pc = 0x1a2580u;

label_1a2580:
    // 0x1a2580: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a2580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a2584:
    // 0x1a2584: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a2588:
    if (ctx->pc == 0x1A2588u) {
        ctx->pc = 0x1A2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2584u;
        // 0x1a2588: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A258Cu;
        goto label_1a258c;
    }
    ctx->pc = 0x1A2584u;
    {
        const bool branch_taken_0x1a2584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2584u;
        // 0x1a2588: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2584) {
            ctx->pc = 0x1A2598u;
            return;
        }
    }
    ctx->pc = 0x1A258Cu;
label_1a258c:
    // 0x1a258c: 0x40f809  jalr        $v0
label_1a2590:
    if (ctx->pc == 0x1A2590u) {
        ctx->pc = 0x1A2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A258Cu;
        // 0x1a2590: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2594u;
        goto label_fallthrough_0x1a258c;
    }
    ctx->pc = 0x1A258Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2594u);
        ctx->pc = 0x1A2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A258Cu;
        // 0x1a2590: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A258Cu, 0x1A2594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a258c:
    ctx->pc = 0x1A2594u;
}
