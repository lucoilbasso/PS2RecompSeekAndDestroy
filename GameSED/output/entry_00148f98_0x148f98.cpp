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

// Function: entry_00148f98
// Address: 0x148f98 - 0x148fbc
void entry_00148f98_0x148f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148f98_0x148f98");
#endif

    ctx->pc = 0x148f98u;

    // 0x148f98: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x148f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x148f9c: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x148f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x148fa0: 0xac22020c  sw          $v0, 0x20C($at)
    ctx->pc = 0x148fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 524), GPR_U32(ctx, 2));
    // 0x148fa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x148fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148fa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x148fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x148fac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x148facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148fb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x148fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x148fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x148FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148FB4u;
        // 0x148fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148FBCu;
}
