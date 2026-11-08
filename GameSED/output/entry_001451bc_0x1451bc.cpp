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

// Function: entry_001451bc
// Address: 0x1451bc - 0x1451d8
void entry_001451bc_0x1451bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001451bc_0x1451bc");
#endif

    ctx->pc = 0x1451bcu;

    // 0x1451bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1451bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1451c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1451c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1451c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1451c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1451c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1451c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1451cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1451ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1451d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1451D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1451D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1451D0u;
        // 0x1451d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1451D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1451D8u;
}
