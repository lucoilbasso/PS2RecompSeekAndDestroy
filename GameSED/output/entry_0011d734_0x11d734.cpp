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

// Function: entry_0011d734
// Address: 0x11d734 - 0x11d750
void entry_0011d734_0x11d734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d734_0x11d734");
#endif

    switch (ctx->pc) {
        case 0x11d73cu: goto label_11d73c;
        default: break;
    }

    ctx->pc = 0x11d734u;

    // 0x11d734: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x11D734u;
    SET_GPR_U32(ctx, 31, 0x11D73Cu);
    ctx->pc = 0x11D738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D734u;
    // 0x11d738: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4E8u, 0x11D734u, 0x11D73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D73Cu;
label_11d73c:
    // 0x11d73c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11d73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d740: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x11d740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11d744: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11d744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d748: 0x3e00008  jr          $ra
    ctx->pc = 0x11D748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D748u;
        // 0x11d74c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D750u;
}
