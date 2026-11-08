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

// Function: entry_001d9f1c
// Address: 0x1d9f1c - 0x1d9f40
void entry_001d9f1c_0x1d9f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9f1c_0x1d9f1c");
#endif

    ctx->pc = 0x1d9f1cu;

label_1d9f1c:
    // 0x1d9f1c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1d9f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1d9f20:
    // 0x1d9f20: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d9f24:
    if (ctx->pc == 0x1D9F24u) {
        ctx->pc = 0x1D9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F20u;
        // 0x1d9f24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F28u;
        goto label_1d9f28;
    }
    ctx->pc = 0x1D9F20u;
    {
        const bool branch_taken_0x1d9f20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F20u;
        // 0x1d9f24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f20) {
            ctx->pc = 0x1D9F40u;
            return;
        }
    }
    ctx->pc = 0x1D9F28u;
label_1d9f28:
    // 0x1d9f28: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d9f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d9f2c:
    // 0x1d9f2c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d9f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d9f30:
    // 0x1d9f30: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d9f30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9f34:
    // 0x1d9f34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d9f38:
    // 0x1d9f38: 0x60f809  jalr        $v1
label_1d9f3c:
    if (ctx->pc == 0x1D9F3Cu) {
        ctx->pc = 0x1D9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F38u;
        // 0x1d9f3c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D9F40u;
        goto label_fallthrough_0x1d9f38;
    }
    ctx->pc = 0x1D9F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D9F40u);
        ctx->pc = 0x1D9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F38u;
        // 0x1d9f3c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F38u, 0x1D9F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d9f38:
    ctx->pc = 0x1D9F40u;
}
