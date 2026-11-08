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

// Function: entry_0015e620
// Address: 0x15e620 - 0x15e654
void entry_0015e620_0x15e620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e620_0x15e620");
#endif

    ctx->pc = 0x15e620u;

label_15e620:
    // 0x15e620: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_15e624:
    if (ctx->pc == 0x15E624u) {
        ctx->pc = 0x15E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E620u;
        // 0x15e624: 0x2402bfff  addiu       $v0, $zero, -0x4001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E628u;
        goto label_15e628;
    }
    ctx->pc = 0x15E620u;
    {
        const bool branch_taken_0x15e620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E620u;
        // 0x15e624: 0x2402bfff  addiu       $v0, $zero, -0x4001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e620) {
            ctx->pc = 0x15E760u;
            return;
        }
    }
    ctx->pc = 0x15E628u;
label_15e628:
    // 0x15e628: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15e62c:
    // 0x15e62c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15e62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15e630:
    // 0x15e630: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15e634:
    if (ctx->pc == 0x15E634u) {
        ctx->pc = 0x15E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E630u;
        // 0x15e634: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E638u;
        goto label_15e638;
    }
    ctx->pc = 0x15E630u;
    {
        const bool branch_taken_0x15e630 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E630u;
        // 0x15e634: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e630) {
            ctx->pc = 0x15E654u;
            return;
        }
    }
    ctx->pc = 0x15E638u;
label_15e638:
    // 0x15e638: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e63c:
    // 0x15e63c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e640:
    // 0x15e640: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e644:
    // 0x15e644: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e644u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e648:
    // 0x15e648: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e64c:
    // 0x15e64c: 0x60f809  jalr        $v1
label_15e650:
    if (ctx->pc == 0x15E650u) {
        ctx->pc = 0x15E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E64Cu;
        // 0x15e650: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E654u;
        goto label_fallthrough_0x15e64c;
    }
    ctx->pc = 0x15E64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E654u);
        ctx->pc = 0x15E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E64Cu;
        // 0x15e650: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E64Cu, 0x15E654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e64c:
    ctx->pc = 0x15E654u;
}
