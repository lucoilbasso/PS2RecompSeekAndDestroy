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

// Function: entry_001866d0
// Address: 0x1866d0 - 0x186708
void entry_001866d0_0x1866d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001866d0_0x1866d0");
#endif

    ctx->pc = 0x1866d0u;

label_1866d0:
    // 0x1866d0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1866d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1866d4:
    // 0x1866d4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1866d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1866d8:
    // 0x1866d8: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x1866d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1866dc:
    // 0x1866dc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1866e0:
    if (ctx->pc == 0x1866E0u) {
        ctx->pc = 0x1866E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866DCu;
        // 0x1866e0: 0x8f828d5c  lw          $v0, -0x72A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937948)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1866E4u;
        goto label_1866e4;
    }
    ctx->pc = 0x1866DCu;
    {
        const bool branch_taken_0x1866dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1866E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866DCu;
        // 0x1866e0: 0x8f828d5c  lw          $v0, -0x72A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866dc) {
            ctx->pc = 0x186708u;
            return;
        }
    }
    ctx->pc = 0x1866E4u;
label_1866e4:
    // 0x1866e4: 0x8cc30124  lw          $v1, 0x124($a2)
    ctx->pc = 0x1866e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 292)));
label_1866e8:
    // 0x1866e8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1866ec:
    if (ctx->pc == 0x1866ECu) {
        ctx->pc = 0x1866ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866E8u;
        // 0x1866ec: 0x8f858d58  lw          $a1, -0x72A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937944)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1866F0u;
        goto label_1866f0;
    }
    ctx->pc = 0x1866E8u;
    {
        const bool branch_taken_0x1866e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1866ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866E8u;
        // 0x1866ec: 0x8f858d58  lw          $a1, -0x72A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866e8) {
            ctx->pc = 0x186708u;
            return;
        }
    }
    ctx->pc = 0x1866F0u;
label_1866f0:
    // 0x1866f0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1866f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1866f4:
    // 0x1866f4: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1866f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_1866f8:
    // 0x1866f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1866f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1866fc:
    // 0x1866fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1866fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_186700:
    // 0x186700: 0x60f809  jalr        $v1
label_186704:
    if (ctx->pc == 0x186704u) {
        ctx->pc = 0x186704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186700u;
        // 0x186704: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186708u;
        goto label_fallthrough_0x186700;
    }
    ctx->pc = 0x186700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x186708u);
        ctx->pc = 0x186704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186700u;
        // 0x186704: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186700u, 0x186708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x186700:
    ctx->pc = 0x186708u;
}
