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

// Function: entry_0015cc6c
// Address: 0x15cc6c - 0x15cc90
void entry_0015cc6c_0x15cc6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cc6c_0x15cc6c");
#endif

    ctx->pc = 0x15cc6cu;

label_15cc6c:
    // 0x15cc6c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15cc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15cc70:
    // 0x15cc70: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15cc74:
    if (ctx->pc == 0x15CC74u) {
        ctx->pc = 0x15CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC70u;
        // 0x15cc74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC78u;
        goto label_15cc78;
    }
    ctx->pc = 0x15CC70u;
    {
        const bool branch_taken_0x15cc70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC70u;
        // 0x15cc74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc70) {
            ctx->pc = 0x15CC90u;
            return;
        }
    }
    ctx->pc = 0x15CC78u;
label_15cc78:
    // 0x15cc78: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cc7c:
    // 0x15cc7c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cc80:
    // 0x15cc80: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cc80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cc84:
    // 0x15cc84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cc88:
    // 0x15cc88: 0x60f809  jalr        $v1
label_15cc8c:
    if (ctx->pc == 0x15CC8Cu) {
        ctx->pc = 0x15CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC88u;
        // 0x15cc8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC90u;
        goto label_fallthrough_0x15cc88;
    }
    ctx->pc = 0x15CC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CC90u);
        ctx->pc = 0x15CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC88u;
        // 0x15cc8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CC88u, 0x15CC90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15cc88:
    ctx->pc = 0x15CC90u;
}
