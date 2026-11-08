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

// Function: entry_0015df24
// Address: 0x15df24 - 0x15df48
void entry_0015df24_0x15df24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015df24_0x15df24");
#endif

    ctx->pc = 0x15df24u;

label_15df24:
    // 0x15df24: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15df24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15df28:
    // 0x15df28: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15df2c:
    if (ctx->pc == 0x15DF2Cu) {
        ctx->pc = 0x15DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF28u;
        // 0x15df2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF30u;
        goto label_15df30;
    }
    ctx->pc = 0x15DF28u;
    {
        const bool branch_taken_0x15df28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF28u;
        // 0x15df2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df28) {
            ctx->pc = 0x15DF48u;
            return;
        }
    }
    ctx->pc = 0x15DF30u;
label_15df30:
    // 0x15df30: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15df30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15df34:
    // 0x15df34: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15df34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15df38:
    // 0x15df38: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15df38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15df3c:
    // 0x15df3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15df40:
    // 0x15df40: 0x60f809  jalr        $v1
label_15df44:
    if (ctx->pc == 0x15DF44u) {
        ctx->pc = 0x15DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF40u;
        // 0x15df44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DF48u;
        goto label_fallthrough_0x15df40;
    }
    ctx->pc = 0x15DF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DF48u);
        ctx->pc = 0x15DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF40u;
        // 0x15df44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DF40u, 0x15DF48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15df40:
    ctx->pc = 0x15DF48u;
}
