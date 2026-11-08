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

// Function: entry_0015e654
// Address: 0x15e654 - 0x15e678
void entry_0015e654_0x15e654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e654_0x15e654");
#endif

    ctx->pc = 0x15e654u;

label_15e654:
    // 0x15e654: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15e654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15e658:
    // 0x15e658: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e65c:
    if (ctx->pc == 0x15E65Cu) {
        ctx->pc = 0x15E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E658u;
        // 0x15e65c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E660u;
        goto label_15e660;
    }
    ctx->pc = 0x15E658u;
    {
        const bool branch_taken_0x15e658 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E658u;
        // 0x15e65c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e658) {
            ctx->pc = 0x15E678u;
            return;
        }
    }
    ctx->pc = 0x15E660u;
label_15e660:
    // 0x15e660: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e664:
    // 0x15e664: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e668:
    // 0x15e668: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e66c:
    // 0x15e66c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e670:
    // 0x15e670: 0x60f809  jalr        $v1
label_15e674:
    if (ctx->pc == 0x15E674u) {
        ctx->pc = 0x15E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E670u;
        // 0x15e674: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E678u;
        goto label_fallthrough_0x15e670;
    }
    ctx->pc = 0x15E670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E678u);
        ctx->pc = 0x15E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E670u;
        // 0x15e674: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E670u, 0x15E678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e670:
    ctx->pc = 0x15E678u;
}
