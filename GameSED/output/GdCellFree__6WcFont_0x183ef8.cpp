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

// Function: GdCellFree__6WcFont
// Address: 0x183ef8 - 0x183f18
void GdCellFree__6WcFont_0x183ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GdCellFree__6WcFont_0x183ef8");
#endif

    switch (ctx->pc) {
        case 0x183f0cu: goto label_183f0c;
        default: break;
    }

    ctx->pc = 0x183ef8u;

    // 0x183ef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x183efc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x183efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183f04: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x183F04u;
    SET_GPR_U32(ctx, 31, 0x183F0Cu);
    ctx->pc = 0x183F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183F04u;
    // 0x183f08: 0x8ca40040  lw          $a0, 0x40($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x183F04u, 0x183F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F0Cu;
label_183f0c:
    // 0x183f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183f10: 0x3e00008  jr          $ra
    ctx->pc = 0x183F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F10u;
        // 0x183f14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183F18u;
}
