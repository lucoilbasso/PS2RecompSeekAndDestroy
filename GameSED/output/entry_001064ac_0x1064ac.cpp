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

// Function: entry_001064ac
// Address: 0x1064ac - 0x1064c0
void entry_001064ac_0x1064ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001064ac_0x1064ac");
#endif

    switch (ctx->pc) {
        case 0x1064b4u: goto label_1064b4;
        default: break;
    }

    ctx->pc = 0x1064acu;

    // 0x1064ac: 0xc060e88  jal         func_183A20
    ctx->pc = 0x1064ACu;
    SET_GPR_U32(ctx, 31, 0x1064B4u);
    ctx->pc = 0x1064B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1064ACu;
    // 0x1064b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x1064ACu, 0x1064B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1064B4u;
label_1064b4:
    // 0x1064b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1064b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1064b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1064B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1064BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064B8u;
        // 0x1064bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1064B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1064C0u;
}
