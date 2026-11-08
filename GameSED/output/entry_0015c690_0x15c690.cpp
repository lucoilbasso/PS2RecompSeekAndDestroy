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

// Function: entry_0015c690
// Address: 0x15c690 - 0x15c6b4
void entry_0015c690_0x15c690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c690_0x15c690");
#endif

    ctx->pc = 0x15c690u;

label_15c690:
    // 0x15c690: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15c690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15c694:
    // 0x15c694: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15c698:
    if (ctx->pc == 0x15C698u) {
        ctx->pc = 0x15C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C694u;
        // 0x15c698: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C69Cu;
        goto label_15c69c;
    }
    ctx->pc = 0x15C694u;
    {
        const bool branch_taken_0x15c694 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C694u;
        // 0x15c698: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c694) {
            ctx->pc = 0x15C6B4u;
            return;
        }
    }
    ctx->pc = 0x15C69Cu;
label_15c69c:
    // 0x15c69c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15c6a0:
    // 0x15c6a0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15c6a4:
    // 0x15c6a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c6a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c6a8:
    // 0x15c6a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c6ac:
    // 0x15c6ac: 0x60f809  jalr        $v1
label_15c6b0:
    if (ctx->pc == 0x15C6B0u) {
        ctx->pc = 0x15C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6ACu;
        // 0x15c6b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6B4u;
        goto label_fallthrough_0x15c6ac;
    }
    ctx->pc = 0x15C6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C6B4u);
        ctx->pc = 0x15C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6ACu;
        // 0x15c6b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C6ACu, 0x15C6B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15c6ac:
    ctx->pc = 0x15C6B4u;
}
