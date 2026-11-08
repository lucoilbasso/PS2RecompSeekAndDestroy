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

// Function: entry_001e1a88
// Address: 0x1e1a88 - 0x1e1aac
void entry_001e1a88_0x1e1a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1a88_0x1e1a88");
#endif

    ctx->pc = 0x1e1a88u;

label_1e1a88:
    // 0x1e1a88: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1e1a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1e1a8c:
    // 0x1e1a8c: 0x11230007  beq         $t1, $v1, . + 4 + (0x7 << 2)
label_1e1a90:
    if (ctx->pc == 0x1E1A90u) {
        ctx->pc = 0x1E1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A8Cu;
        // 0x1e1a90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A94u;
        goto label_1e1a94;
    }
    ctx->pc = 0x1E1A8Cu;
    {
        const bool branch_taken_0x1e1a8c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A8Cu;
        // 0x1e1a90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a8c) {
            ctx->pc = 0x1E1AACu;
            return;
        }
    }
    ctx->pc = 0x1E1A94u;
label_1e1a94:
    // 0x1e1a94: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x1e1a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_1e1a98:
    // 0x1e1a98: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1e1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1e1a9c:
    // 0x1e1a9c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1e1a9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1e1aa0:
    // 0x1e1aa0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e1aa4:
    // 0x1e1aa4: 0x40f809  jalr        $v0
label_1e1aa8:
    if (ctx->pc == 0x1E1AA8u) {
        ctx->pc = 0x1E1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AA4u;
        // 0x1e1aa8: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1AACu;
        goto label_fallthrough_0x1e1aa4;
    }
    ctx->pc = 0x1E1AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1AACu);
        ctx->pc = 0x1E1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AA4u;
        // 0x1e1aa8: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1AA4u, 0x1E1AACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1e1aa4:
    ctx->pc = 0x1E1AACu;
}
