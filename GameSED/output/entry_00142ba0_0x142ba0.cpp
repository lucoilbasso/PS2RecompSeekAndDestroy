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

// Function: entry_00142ba0
// Address: 0x142ba0 - 0x142bbc
void entry_00142ba0_0x142ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142ba0_0x142ba0");
#endif

    switch (ctx->pc) {
        case 0x142ba8u: goto label_142ba8;
        default: break;
    }

    ctx->pc = 0x142ba0u;

    // 0x142ba0: 0xc068584  jal         func_1A1610
    ctx->pc = 0x142BA0u;
    SET_GPR_U32(ctx, 31, 0x142BA8u);
    ctx->pc = 0x142BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142BA0u;
    // 0x142ba4: 0x24840fa0  addiu       $a0, $a0, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x142BA0u, 0x142BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142BA8u;
label_142ba8:
    // 0x142ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142bac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142bb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x142bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x142BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142BB4u;
        // 0x142bb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142BBCu;
}
