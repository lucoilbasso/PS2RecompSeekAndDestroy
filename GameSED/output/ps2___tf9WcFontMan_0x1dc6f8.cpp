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

// Function: __tf9WcFontMan
// Address: 0x1dc6f8 - 0x1dc744
void ps2___tf9WcFontMan_0x1dc6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9WcFontMan_0x1dc6f8");
#endif

    switch (ctx->pc) {
        case 0x1dc71cu: goto label_1dc71c;
        case 0x1dc730u: goto label_1dc730;
        default: break;
    }

    ctx->pc = 0x1dc6f8u;

    // 0x1dc6f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc6fc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dc6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dc700: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc704: 0x24501500  addiu       $s0, $v0, 0x1500
    ctx->pc = 0x1dc704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5376));
    // 0x1dc708: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dc708u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411500u));
    // 0x1dc70c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC70Cu;
    {
        const bool branch_taken_0x1dc70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC70Cu;
        // 0x1dc710: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc70c) {
            ctx->pc = 0x1DC730u;
            goto label_1dc730;
        }
    }
    ctx->pc = 0x1DC714u;
    // 0x1dc714: 0xc0785a0  jal         func_1E1680
    ctx->pc = 0x1DC714u;
    SET_GPR_U32(ctx, 31, 0x1DC71Cu);
    ctx->pc = 0x1E1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1680u, 0x1DC714u, 0x1DC71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC71Cu;
label_1dc71c:
    // 0x1dc71c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dc71cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1dc720: 0x24a57b70  addiu       $a1, $a1, 0x7B70
    ctx->pc = 0x1dc720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31600));
    // 0x1dc724: 0x278691b8  addiu       $a2, $gp, -0x6E48
    ctx->pc = 0x1dc724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
    // 0x1dc728: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DC728u;
    SET_GPR_U32(ctx, 31, 0x1DC730u);
    ctx->pc = 0x1DC72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC728u;
    // 0x1dc72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DC728u, 0x1DC730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC730u;
label_1dc730:
    // 0x1dc730: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dc730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc738: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc73c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC73Cu;
        // 0x1dc740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC744u;
}
