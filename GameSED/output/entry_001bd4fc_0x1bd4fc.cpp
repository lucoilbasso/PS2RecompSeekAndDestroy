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

// Function: entry_001bd4fc
// Address: 0x1bd4fc - 0x1bd528
void entry_001bd4fc_0x1bd4fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd4fc_0x1bd4fc");
#endif

    ctx->pc = 0x1bd4fcu;

    // 0x1bd4fc: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1bd4fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bd500: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1bd500u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bd504: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1bd504u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bd508: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1bd508u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bd50c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1bd50cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bd510: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1bd510u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bd514: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1bd514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bd518: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1bd518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd51c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bd51cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd520: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD520u;
        // 0x1bd524: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD528u;
}
