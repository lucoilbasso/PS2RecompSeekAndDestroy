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

// Function: entry_001c4f7c
// Address: 0x1c4f7c - 0x1c4fa4
void entry_001c4f7c_0x1c4f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4f7c_0x1c4f7c");
#endif

    ctx->pc = 0x1c4f7cu;

    // 0x1c4f7c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c4f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c4f80: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1c4f80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c4f84: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x1c4f84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c4f88: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1c4f88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4f8c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x1c4f8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4f90: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1c4f90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4f94: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1c4f94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4f98: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c4f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F9Cu;
        // 0x1c4fa0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4FA4u;
}
