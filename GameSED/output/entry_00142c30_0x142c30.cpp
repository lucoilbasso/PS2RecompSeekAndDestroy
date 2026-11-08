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

// Function: entry_00142c30
// Address: 0x142c30 - 0x142c50
void entry_00142c30_0x142c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142c30_0x142c30");
#endif

    ctx->pc = 0x142c30u;

label_142c30:
    // 0x142c30: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_142c34:
    if (ctx->pc == 0x142C34u) {
        ctx->pc = 0x142C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C30u;
        // 0x142c34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C38u;
        goto label_142c38;
    }
    ctx->pc = 0x142C30u;
    {
        const bool branch_taken_0x142c30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C30u;
        // 0x142c34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c30) {
            ctx->pc = 0x142C50u;
            return;
        }
    }
    ctx->pc = 0x142C38u;
label_142c38:
    // 0x142c38: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x142c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_142c3c:
    // 0x142c3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x142c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_142c40:
    // 0x142c40: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x142c40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_142c44:
    // 0x142c44: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x142c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_142c48:
    // 0x142c48: 0x60f809  jalr        $v1
label_142c4c:
    if (ctx->pc == 0x142C4Cu) {
        ctx->pc = 0x142C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C48u;
        // 0x142c4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C50u;
        goto label_fallthrough_0x142c48;
    }
    ctx->pc = 0x142C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x142C50u);
        ctx->pc = 0x142C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C48u;
        // 0x142c4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142C48u, 0x142C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x142c48:
    ctx->pc = 0x142C50u;
}
