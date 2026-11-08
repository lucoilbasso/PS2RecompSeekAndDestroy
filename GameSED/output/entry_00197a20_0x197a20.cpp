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

// Function: entry_00197a20
// Address: 0x197a20 - 0x197a50
void entry_00197a20_0x197a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197a20_0x197a20");
#endif

    ctx->pc = 0x197a20u;

label_197a20:
    // 0x197a20: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x197a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_197a24:
    // 0x197a24: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x197a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_197a28:
    // 0x197a28: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x197a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_197a2c:
    // 0x197a2c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_197a30:
    if (ctx->pc == 0x197A30u) {
        ctx->pc = 0x197A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A2Cu;
        // 0x197a30: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A34u;
        goto label_197a34;
    }
    ctx->pc = 0x197A2Cu;
    {
        const bool branch_taken_0x197a2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A2Cu;
        // 0x197a30: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a2c) {
            ctx->pc = 0x197A50u;
            return;
        }
    }
    ctx->pc = 0x197A34u;
label_197a34:
    // 0x197a34: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x197a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_197a38:
    // 0x197a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197a3c:
    // 0x197a3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x197a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_197a40:
    // 0x197a40: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x197a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_197a44:
    // 0x197a44: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x197a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_197a48:
    // 0x197a48: 0x60f809  jalr        $v1
label_197a4c:
    if (ctx->pc == 0x197A4Cu) {
        ctx->pc = 0x197A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A48u;
        // 0x197a4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A50u;
        goto label_fallthrough_0x197a48;
    }
    ctx->pc = 0x197A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x197A50u);
        ctx->pc = 0x197A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A48u;
        // 0x197a4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197A48u, 0x197A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x197a48:
    ctx->pc = 0x197A50u;
}
