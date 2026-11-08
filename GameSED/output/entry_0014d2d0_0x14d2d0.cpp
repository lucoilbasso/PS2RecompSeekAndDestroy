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

// Function: entry_0014d2d0
// Address: 0x14d2d0 - 0x14d2e8
void entry_0014d2d0_0x14d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d2d0_0x14d2d0");
#endif

    ctx->pc = 0x14d2d0u;

label_14d2d0:
    // 0x14d2d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d2d4:
    // 0x14d2d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_14d2d8:
    // 0x14d2d8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14d2d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14d2dc:
    // 0x14d2dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14d2e0:
    // 0x14d2e0: 0x60f809  jalr        $v1
label_14d2e4:
    if (ctx->pc == 0x14D2E4u) {
        ctx->pc = 0x14D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D2E0u;
        // 0x14d2e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D2E8u;
        goto label_fallthrough_0x14d2e0;
    }
    ctx->pc = 0x14D2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14D2E8u);
        ctx->pc = 0x14D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D2E0u;
        // 0x14d2e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D2E0u, 0x14D2E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x14d2e0:
    ctx->pc = 0x14D2E8u;
}
