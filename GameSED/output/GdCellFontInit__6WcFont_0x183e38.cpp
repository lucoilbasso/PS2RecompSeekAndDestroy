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

// Function: GdCellFontInit__6WcFont
// Address: 0x183e38 - 0x183e74
void GdCellFontInit__6WcFont_0x183e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GdCellFontInit__6WcFont_0x183e38");
#endif

    switch (ctx->pc) {
        case 0x183e50u: goto label_183e50;
        default: break;
    }

    ctx->pc = 0x183e38u;

    // 0x183e38: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x183e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x183e3c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x183e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x183e40: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x183E40u;
    {
        const bool branch_taken_0x183e40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x183E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E40u;
        // 0x183e44: 0x8c830040  lw          $v1, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e40) {
            ctx->pc = 0x183E6Cu;
            goto label_183e6c;
        }
    }
    ctx->pc = 0x183E48u;
    // 0x183e48: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x183e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183e4c: 0x0  nop
    ctx->pc = 0x183e4cu;
    // NOP
label_183e50:
    // 0x183e50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x183e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x183e54: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x183e54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x183e58: 0x0  nop
    ctx->pc = 0x183e58u;
    // NOP
    // 0x183e5c: 0x0  nop
    ctx->pc = 0x183e5cu;
    // NOP
    // 0x183e60: 0x0  nop
    ctx->pc = 0x183e60u;
    // NOP
    // 0x183e64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x183E64u;
    {
        const bool branch_taken_0x183e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E64u;
        // 0x183e68: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e64) {
            ctx->pc = 0x183E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183e50;
        }
    }
    ctx->pc = 0x183E6Cu;
label_183e6c:
    // 0x183e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x183E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183E74u;
}
