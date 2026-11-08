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

// Function: entry_0015ca40
// Address: 0x15ca40 - 0x15ca74
void entry_0015ca40_0x15ca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ca40_0x15ca40");
#endif

    ctx->pc = 0x15ca40u;

label_15ca40:
    // 0x15ca40: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15ca44:
    // 0x15ca44: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x15ca44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_15ca48:
    // 0x15ca48: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15ca48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15ca4c:
    // 0x15ca4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15ca4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_15ca50:
    // 0x15ca50: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15ca54:
    if (ctx->pc == 0x15CA54u) {
        ctx->pc = 0x15CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA50u;
        // 0x15ca54: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA58u;
        goto label_15ca58;
    }
    ctx->pc = 0x15CA50u;
    {
        const bool branch_taken_0x15ca50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA50u;
        // 0x15ca54: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca50) {
            ctx->pc = 0x15CA74u;
            return;
        }
    }
    ctx->pc = 0x15CA58u;
label_15ca58:
    // 0x15ca58: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ca5c:
    // 0x15ca5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ca5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ca60:
    // 0x15ca60: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ca64:
    // 0x15ca64: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ca64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ca68:
    // 0x15ca68: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ca6c:
    // 0x15ca6c: 0x60f809  jalr        $v1
label_15ca70:
    if (ctx->pc == 0x15CA70u) {
        ctx->pc = 0x15CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA6Cu;
        // 0x15ca70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA74u;
        goto label_fallthrough_0x15ca6c;
    }
    ctx->pc = 0x15CA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CA74u);
        ctx->pc = 0x15CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA6Cu;
        // 0x15ca70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA6Cu, 0x15CA74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15ca6c:
    ctx->pc = 0x15CA74u;
}
