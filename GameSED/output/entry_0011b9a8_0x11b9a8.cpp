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

// Function: entry_0011b9a8
// Address: 0x11b9a8 - 0x11b9c4
void entry_0011b9a8_0x11b9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b9a8_0x11b9a8");
#endif

    switch (ctx->pc) {
        case 0x11b9c0u: goto label_11b9c0;
        default: break;
    }

    ctx->pc = 0x11b9a8u;

label_11b9a8:
    // 0x11b9a8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x11b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_11b9ac:
    // 0x11b9ac: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x11b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_11b9b0:
    // 0x11b9b0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11b9b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11b9b4:
    // 0x11b9b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11b9b8:
    // 0x11b9b8: 0x60f809  jalr        $v1
label_11b9bc:
    if (ctx->pc == 0x11B9BCu) {
        ctx->pc = 0x11B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9B8u;
        // 0x11b9bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B9C0u;
        goto label_11b9c0;
    }
    ctx->pc = 0x11B9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B9C0u);
        ctx->pc = 0x11B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9B8u;
        // 0x11b9bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B9B8u, 0x11B9C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B9C0u;
label_11b9c0:
    // 0x11b9c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x11b9c4u;
}
