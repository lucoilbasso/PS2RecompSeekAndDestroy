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

// Function: entry_001813b0
// Address: 0x1813b0 - 0x1813cc
void entry_001813b0_0x1813b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001813b0_0x1813b0");
#endif

    ctx->pc = 0x1813b0u;

    // 0x1813b0: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1813b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1813b4: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1813b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1813b8: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1813b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1813bc: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1813bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1813c0: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1813c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1813c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1813C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1813C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813C4u;
        // 0x1813c8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1813C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1813CCu;
}
