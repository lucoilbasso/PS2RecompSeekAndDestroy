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

// Function: entry_00142c78
// Address: 0x142c78 - 0x142ca8
void entry_00142c78_0x142c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142c78_0x142c78");
#endif

    ctx->pc = 0x142c78u;

label_142c78:
    // 0x142c78: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x142c78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_142c7c:
    // 0x142c7c: 0x643ffec  bgezl       $s2, . + 4 + (-0x14 << 2)
label_142c80:
    if (ctx->pc == 0x142C80u) {
        ctx->pc = 0x142C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C7Cu;
        // 0x142c80: 0x8e06fff0  lw          $a2, -0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C84u;
        goto label_142c84;
    }
    ctx->pc = 0x142C7Cu;
    {
        const bool branch_taken_0x142c7c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x142c7c) {
            ctx->pc = 0x142C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142C7Cu;
            // 0x142c80: 0x8e06fff0  lw          $a2, -0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142C30u;
            return;
        }
    }
    ctx->pc = 0x142C84u;
label_142c84:
    // 0x142c84: 0x8e2602f8  lw          $a2, 0x2F8($s1)
    ctx->pc = 0x142c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
label_142c88:
    // 0x142c88: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_142c8c:
    if (ctx->pc == 0x142C8Cu) {
        ctx->pc = 0x142C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C88u;
        // 0x142c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142C90u;
        goto label_142c90;
    }
    ctx->pc = 0x142C88u;
    {
        const bool branch_taken_0x142c88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142C88u;
        // 0x142c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c88) {
            ctx->pc = 0x142CA8u;
            return;
        }
    }
    ctx->pc = 0x142C90u;
label_142c90:
    // 0x142c90: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x142c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_142c94:
    // 0x142c94: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x142c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_142c98:
    // 0x142c98: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x142c98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_142c9c:
    // 0x142c9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x142c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_142ca0:
    // 0x142ca0: 0x60f809  jalr        $v1
label_142ca4:
    if (ctx->pc == 0x142CA4u) {
        ctx->pc = 0x142CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CA0u;
        // 0x142ca4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x142CA8u;
        goto label_fallthrough_0x142ca0;
    }
    ctx->pc = 0x142CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x142CA8u);
        ctx->pc = 0x142CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CA0u;
        // 0x142ca4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142CA0u, 0x142CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x142ca0:
    ctx->pc = 0x142CA8u;
}
