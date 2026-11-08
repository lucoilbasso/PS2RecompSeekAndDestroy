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

// Function: entry_00142c50
// Address: 0x142c50 - 0x142c78
void entry_00142c50_0x142c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142c50_0x142c50");
#endif

    ctx->pc = 0x142c50u;

label_142c50:
    // 0x142c50: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x142c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_142c54:
    // 0x142c54: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_142c58:
    if (ctx->pc == 0x142C58u) {
        ctx->pc = 0x142C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C54u;
        // 0x142c58: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C5Cu;
        goto label_142c5c;
    }
    ctx->pc = 0x142C54u;
    {
        const bool branch_taken_0x142c54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C54u;
        // 0x142c58: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c54) {
            ctx->pc = 0x142C78u;
            return;
        }
    }
    ctx->pc = 0x142C5Cu;
label_142c5c:
    // 0x142c5c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x142c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_142c60:
    // 0x142c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_142c64:
    // 0x142c64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x142c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_142c68:
    // 0x142c68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x142c68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_142c6c:
    // 0x142c6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x142c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_142c70:
    // 0x142c70: 0x60f809  jalr        $v1
label_142c74:
    if (ctx->pc == 0x142C74u) {
        ctx->pc = 0x142C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C70u;
        // 0x142c74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C78u;
        goto label_fallthrough_0x142c70;
    }
    ctx->pc = 0x142C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x142C78u);
        ctx->pc = 0x142C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C70u;
        // 0x142c74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142C70u, 0x142C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x142c70:
    ctx->pc = 0x142C78u;
}
