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

// Function: entry_0015e900
// Address: 0x15e900 - 0x15e934
void entry_0015e900_0x15e900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e900_0x15e900");
#endif

    ctx->pc = 0x15e900u;

label_15e900:
    // 0x15e900: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15e900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e904:
    // 0x15e904: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x15e904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_15e908:
    // 0x15e908: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15e90c:
    // 0x15e90c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15e90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_15e910:
    // 0x15e910: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15e914:
    if (ctx->pc == 0x15E914u) {
        ctx->pc = 0x15E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E910u;
        // 0x15e914: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E918u;
        goto label_15e918;
    }
    ctx->pc = 0x15E910u;
    {
        const bool branch_taken_0x15e910 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E910u;
        // 0x15e914: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e910) {
            ctx->pc = 0x15E934u;
            return;
        }
    }
    ctx->pc = 0x15E918u;
label_15e918:
    // 0x15e918: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e91c:
    // 0x15e91c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e920:
    // 0x15e920: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e924:
    // 0x15e924: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e928:
    // 0x15e928: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e92c:
    // 0x15e92c: 0x60f809  jalr        $v1
label_15e930:
    if (ctx->pc == 0x15E930u) {
        ctx->pc = 0x15E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E92Cu;
        // 0x15e930: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E934u;
        goto label_fallthrough_0x15e92c;
    }
    ctx->pc = 0x15E92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E934u);
        ctx->pc = 0x15E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E92Cu;
        // 0x15e930: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E92Cu, 0x15E934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e92c:
    ctx->pc = 0x15E934u;
}
