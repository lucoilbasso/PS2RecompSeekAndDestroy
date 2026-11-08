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

// Function: entry_0015ce30
// Address: 0x15ce30 - 0x15ce64
void entry_0015ce30_0x15ce30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ce30_0x15ce30");
#endif

    ctx->pc = 0x15ce30u;

label_15ce30:
    // 0x15ce30: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15ce34:
    // 0x15ce34: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x15ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_15ce38:
    // 0x15ce38: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15ce38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15ce3c:
    // 0x15ce3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15ce3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_15ce40:
    // 0x15ce40: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15ce44:
    if (ctx->pc == 0x15CE44u) {
        ctx->pc = 0x15CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE40u;
        // 0x15ce44: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE48u;
        goto label_15ce48;
    }
    ctx->pc = 0x15CE40u;
    {
        const bool branch_taken_0x15ce40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE40u;
        // 0x15ce44: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce40) {
            ctx->pc = 0x15CE64u;
            return;
        }
    }
    ctx->pc = 0x15CE48u;
label_15ce48:
    // 0x15ce48: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ce4c:
    // 0x15ce4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ce50:
    // 0x15ce50: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ce54:
    // 0x15ce54: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ce54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ce58:
    // 0x15ce58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ce5c:
    // 0x15ce5c: 0x60f809  jalr        $v1
label_15ce60:
    if (ctx->pc == 0x15CE60u) {
        ctx->pc = 0x15CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE5Cu;
        // 0x15ce60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE64u;
        goto label_fallthrough_0x15ce5c;
    }
    ctx->pc = 0x15CE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CE64u);
        ctx->pc = 0x15CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE5Cu;
        // 0x15ce60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CE5Cu, 0x15CE64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15ce5c:
    ctx->pc = 0x15CE64u;
}
