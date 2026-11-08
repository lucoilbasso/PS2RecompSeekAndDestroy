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

// Function: entry_0011b9e8
// Address: 0x11b9e8 - 0x11ba04
void entry_0011b9e8_0x11b9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b9e8_0x11b9e8");
#endif

    switch (ctx->pc) {
        case 0x11ba00u: goto label_11ba00;
        default: break;
    }

    ctx->pc = 0x11b9e8u;

label_11b9e8:
    // 0x11b9e8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x11b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_11b9ec:
    // 0x11b9ec: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x11b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_11b9f0:
    // 0x11b9f0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x11b9f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11b9f4:
    // 0x11b9f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11b9f8:
    // 0x11b9f8: 0x60f809  jalr        $v1
label_11b9fc:
    if (ctx->pc == 0x11B9FCu) {
        ctx->pc = 0x11B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9F8u;
        // 0x11b9fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BA00u;
        goto label_11ba00;
    }
    ctx->pc = 0x11B9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BA00u);
        ctx->pc = 0x11B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9F8u;
        // 0x11b9fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B9F8u, 0x11BA00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BA00u;
label_11ba00:
    // 0x11ba00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ba00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x11ba04u;
}
