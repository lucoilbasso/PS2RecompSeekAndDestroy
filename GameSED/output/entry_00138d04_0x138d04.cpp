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

// Function: entry_00138d04
// Address: 0x138d04 - 0x138d18
void entry_00138d04_0x138d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138d04_0x138d04");
#endif

    switch (ctx->pc) {
        case 0x138d0cu: goto label_138d0c;
        default: break;
    }

    ctx->pc = 0x138d04u;

    // 0x138d04: 0xc06684c  jal         func_19A130
    ctx->pc = 0x138D04u;
    SET_GPR_U32(ctx, 31, 0x138D0Cu);
    ctx->pc = 0x138D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138D04u;
    // 0x138d08: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A130u, 0x138D04u, 0x138D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138D0Cu;
label_138d0c:
    // 0x138d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138d10: 0x3e00008  jr          $ra
    ctx->pc = 0x138D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D10u;
        // 0x138d14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138D18u;
}
