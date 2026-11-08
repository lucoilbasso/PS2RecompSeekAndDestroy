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

// Function: entry_0015ca74
// Address: 0x15ca74 - 0x15ca98
void entry_0015ca74_0x15ca74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ca74_0x15ca74");
#endif

    ctx->pc = 0x15ca74u;

label_15ca74:
    // 0x15ca74: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15ca74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15ca78:
    // 0x15ca78: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15ca7c:
    if (ctx->pc == 0x15CA7Cu) {
        ctx->pc = 0x15CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA78u;
        // 0x15ca7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA80u;
        goto label_15ca80;
    }
    ctx->pc = 0x15CA78u;
    {
        const bool branch_taken_0x15ca78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA78u;
        // 0x15ca7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca78) {
            ctx->pc = 0x15CA98u;
            return;
        }
    }
    ctx->pc = 0x15CA80u;
label_15ca80:
    // 0x15ca80: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ca84:
    // 0x15ca84: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ca88:
    // 0x15ca88: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ca88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ca8c:
    // 0x15ca8c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ca90:
    // 0x15ca90: 0x60f809  jalr        $v1
label_15ca94:
    if (ctx->pc == 0x15CA94u) {
        ctx->pc = 0x15CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA90u;
        // 0x15ca94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA98u;
        goto label_fallthrough_0x15ca90;
    }
    ctx->pc = 0x15CA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CA98u);
        ctx->pc = 0x15CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA90u;
        // 0x15ca94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA90u, 0x15CA98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15ca90:
    ctx->pc = 0x15CA98u;
}
