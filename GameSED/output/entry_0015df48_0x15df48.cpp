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

// Function: entry_0015df48
// Address: 0x15df48 - 0x15df6c
void entry_0015df48_0x15df48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015df48_0x15df48");
#endif

    ctx->pc = 0x15df48u;

label_15df48:
    // 0x15df48: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15df48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15df4c:
    // 0x15df4c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15df50:
    if (ctx->pc == 0x15DF50u) {
        ctx->pc = 0x15DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF4Cu;
        // 0x15df50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF54u;
        goto label_15df54;
    }
    ctx->pc = 0x15DF4Cu;
    {
        const bool branch_taken_0x15df4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF4Cu;
        // 0x15df50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df4c) {
            ctx->pc = 0x15DF6Cu;
            return;
        }
    }
    ctx->pc = 0x15DF54u;
label_15df54:
    // 0x15df54: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15df54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15df58:
    // 0x15df58: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15df58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15df5c:
    // 0x15df5c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15df5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15df60:
    // 0x15df60: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15df60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15df64:
    // 0x15df64: 0x60f809  jalr        $v1
label_15df68:
    if (ctx->pc == 0x15DF68u) {
        ctx->pc = 0x15DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF64u;
        // 0x15df68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF6Cu;
        goto label_fallthrough_0x15df64;
    }
    ctx->pc = 0x15DF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DF6Cu);
        ctx->pc = 0x15DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF64u;
        // 0x15df68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DF64u, 0x15DF6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15df64:
    ctx->pc = 0x15DF6Cu;
}
