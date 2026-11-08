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

// Function: entry_001799bc
// Address: 0x1799bc - 0x1799d8
void entry_001799bc_0x1799bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001799bc_0x1799bc");
#endif

    ctx->pc = 0x1799bcu;

    // 0x1799bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1799bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1799c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1799c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1799c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1799c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1799c8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1799c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1799cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1799ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1799d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1799D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1799D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1799D0u;
        // 0x1799d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1799D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1799D8u;
}
