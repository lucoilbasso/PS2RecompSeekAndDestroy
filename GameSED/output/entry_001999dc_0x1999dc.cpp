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

// Function: entry_001999dc
// Address: 0x1999dc - 0x199a00
void entry_001999dc_0x1999dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001999dc_0x1999dc");
#endif

    switch (ctx->pc) {
        case 0x1999f4u: goto label_1999f4;
        default: break;
    }

    ctx->pc = 0x1999dcu;

label_1999dc:
    // 0x1999dc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1999dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1999e0:
    // 0x1999e0: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x1999e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_1999e4:
    // 0x1999e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1999e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1999e8:
    // 0x1999e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1999e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1999ec:
    // 0x1999ec: 0x60f809  jalr        $v1
label_1999f0:
    if (ctx->pc == 0x1999F0u) {
        ctx->pc = 0x1999F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999ECu;
        // 0x1999f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1999F4u;
        goto label_1999f4;
    }
    ctx->pc = 0x1999ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1999F4u);
        ctx->pc = 0x1999F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999ECu;
        // 0x1999f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1999ECu, 0x1999F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1999F4u;
label_1999f4:
    // 0x1999f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1999f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1999f8:
    // 0x1999f8: 0x3e00008  jr          $ra
label_1999fc:
    if (ctx->pc == 0x1999FCu) {
        ctx->pc = 0x1999FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999F8u;
        // 0x1999fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A00u;
        goto label_fallthrough_0x1999f8;
    }
    ctx->pc = 0x1999F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1999FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999F8u;
        // 0x1999fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1999F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1999f8:
    ctx->pc = 0x199A00u;
}
