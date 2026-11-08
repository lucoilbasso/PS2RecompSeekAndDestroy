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

// Function: entry_0011acc0
// Address: 0x11acc0 - 0x11ace4
void entry_0011acc0_0x11acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011acc0_0x11acc0");
#endif

    ctx->pc = 0x11acc0u;

label_11acc0:
    // 0x11acc0: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_11acc4:
    if (ctx->pc == 0x11ACC4u) {
        ctx->pc = 0x11ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACC0u;
        // 0x11acc4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ACC8u;
        goto label_11acc8;
    }
    ctx->pc = 0x11ACC0u;
    {
        const bool branch_taken_0x11acc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACC0u;
        // 0x11acc4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11acc0) {
            ctx->pc = 0x11ACE4u;
            return;
        }
    }
    ctx->pc = 0x11ACC8u;
label_11acc8:
    // 0x11acc8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x11acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_11accc:
    // 0x11accc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11acccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11acd0:
    // 0x11acd0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11acd4:
    // 0x11acd4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11acd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11acd8:
    // 0x11acd8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11acdc:
    // 0x11acdc: 0x60f809  jalr        $v1
label_11ace0:
    if (ctx->pc == 0x11ACE0u) {
        ctx->pc = 0x11ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACDCu;
        // 0x11ace0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ACE4u;
        goto label_fallthrough_0x11acdc;
    }
    ctx->pc = 0x11ACDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11ACE4u);
        ctx->pc = 0x11ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACDCu;
        // 0x11ace0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ACDCu, 0x11ACE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x11acdc:
    ctx->pc = 0x11ACE4u;
}
