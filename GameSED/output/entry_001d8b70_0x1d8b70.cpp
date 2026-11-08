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

// Function: entry_001d8b70
// Address: 0x1d8b70 - 0x1d8ba0
void entry_001d8b70_0x1d8b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8b70_0x1d8b70");
#endif

    ctx->pc = 0x1d8b70u;

label_1d8b70:
    // 0x1d8b70: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1d8b70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1d8b74:
    // 0x1d8b74: 0x643ffec  bgezl       $s2, . + 4 + (-0x14 << 2)
label_1d8b78:
    if (ctx->pc == 0x1D8B78u) {
        ctx->pc = 0x1D8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B74u;
        // 0x1d8b78: 0x8e06fff0  lw          $a2, -0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B7Cu;
        goto label_1d8b7c;
    }
    ctx->pc = 0x1D8B74u;
    {
        const bool branch_taken_0x1d8b74 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1d8b74) {
            ctx->pc = 0x1D8B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8B74u;
            // 0x1d8b78: 0x8e06fff0  lw          $a2, -0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8B28u;
            return;
        }
    }
    ctx->pc = 0x1D8B7Cu;
label_1d8b7c:
    // 0x1d8b7c: 0x8e2602f8  lw          $a2, 0x2F8($s1)
    ctx->pc = 0x1d8b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
label_1d8b80:
    // 0x1d8b80: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d8b84:
    if (ctx->pc == 0x1D8B84u) {
        ctx->pc = 0x1D8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B80u;
        // 0x1d8b84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B88u;
        goto label_1d8b88;
    }
    ctx->pc = 0x1D8B80u;
    {
        const bool branch_taken_0x1d8b80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B80u;
        // 0x1d8b84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b80) {
            ctx->pc = 0x1D8BA0u;
            return;
        }
    }
    ctx->pc = 0x1D8B88u;
label_1d8b88:
    // 0x1d8b88: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d8b8c:
    // 0x1d8b8c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d8b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d8b90:
    // 0x1d8b90: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d8b90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8b94:
    // 0x1d8b94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d8b98:
    // 0x1d8b98: 0x60f809  jalr        $v1
label_1d8b9c:
    if (ctx->pc == 0x1D8B9Cu) {
        ctx->pc = 0x1D8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B98u;
        // 0x1d8b9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8BA0u;
        goto label_fallthrough_0x1d8b98;
    }
    ctx->pc = 0x1D8B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8BA0u);
        ctx->pc = 0x1D8B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B98u;
        // 0x1d8b9c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8B98u, 0x1D8BA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d8b98:
    ctx->pc = 0x1D8BA0u;
}
