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

// Function: entry_001d8b28
// Address: 0x1d8b28 - 0x1d8b48
void entry_001d8b28_0x1d8b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8b28_0x1d8b28");
#endif

    ctx->pc = 0x1d8b28u;

label_1d8b28:
    // 0x1d8b28: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d8b2c:
    if (ctx->pc == 0x1D8B2Cu) {
        ctx->pc = 0x1D8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B28u;
        // 0x1d8b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B30u;
        goto label_1d8b30;
    }
    ctx->pc = 0x1D8B28u;
    {
        const bool branch_taken_0x1d8b28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B28u;
        // 0x1d8b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b28) {
            ctx->pc = 0x1D8B48u;
            return;
        }
    }
    ctx->pc = 0x1D8B30u;
label_1d8b30:
    // 0x1d8b30: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1d8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d8b34:
    // 0x1d8b34: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d8b38:
    // 0x1d8b38: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d8b38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d8b3c:
    // 0x1d8b3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d8b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d8b40:
    // 0x1d8b40: 0x60f809  jalr        $v1
label_1d8b44:
    if (ctx->pc == 0x1D8B44u) {
        ctx->pc = 0x1D8B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B40u;
        // 0x1d8b44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8B48u;
        goto label_fallthrough_0x1d8b40;
    }
    ctx->pc = 0x1D8B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D8B48u);
        ctx->pc = 0x1D8B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B40u;
        // 0x1d8b44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8B40u, 0x1D8B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1d8b40:
    ctx->pc = 0x1D8B48u;
}
