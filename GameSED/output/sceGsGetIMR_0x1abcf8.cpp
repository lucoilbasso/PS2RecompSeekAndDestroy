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

// Function: sceGsGetIMR
// Address: 0x1abcf8 - 0x1abd14
void sceGsGetIMR_0x1abcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsGetIMR_0x1abcf8");
#endif

    switch (ctx->pc) {
        case 0x1abd08u: goto label_1abd08;
        default: break;
    }

    ctx->pc = 0x1abcf8u;

    // 0x1abcf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1abcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1abcfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1abcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1abd00: 0xc06bde0  jal         func_1AF780
    ctx->pc = 0x1ABD00u;
    SET_GPR_U32(ctx, 31, 0x1ABD08u);
    ctx->pc = 0x1AF780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF780u, 0x1ABD00u, 0x1ABD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABD08u;
label_1abd08:
    // 0x1abd08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD0Cu;
        // 0x1abd10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABD14u;
}
