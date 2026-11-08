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

// Function: entry_001077d0
// Address: 0x1077d0 - 0x1077e8
void entry_001077d0_0x1077d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001077d0_0x1077d0");
#endif

    ctx->pc = 0x1077d0u;

label_1077d0:
    // 0x1077d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1077d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1077d4:
    // 0x1077d4: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x1077d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_1077d8:
    // 0x1077d8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1077d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1077dc:
    // 0x1077dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1077dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1077e0:
    // 0x1077e0: 0x60f809  jalr        $v1
label_1077e4:
    if (ctx->pc == 0x1077E4u) {
        ctx->pc = 0x1077E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077E0u;
        // 0x1077e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1077E8u;
        goto label_fallthrough_0x1077e0;
    }
    ctx->pc = 0x1077E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1077E8u);
        ctx->pc = 0x1077E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077E0u;
        // 0x1077e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1077E0u, 0x1077E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1077e0:
    ctx->pc = 0x1077E8u;
}
