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

// Function: entry_00109eb8
// Address: 0x109eb8 - 0x109edc
void entry_00109eb8_0x109eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109eb8_0x109eb8");
#endif

    switch (ctx->pc) {
        case 0x109ec0u: goto label_109ec0;
        default: break;
    }

    ctx->pc = 0x109eb8u;

    // 0x109eb8: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x109EB8u;
    SET_GPR_U32(ctx, 31, 0x109EC0u);
    ctx->pc = 0x109EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109EB8u;
    // 0x109ebc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x109EB8u, 0x109EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EC0u;
label_109ec0:
    // 0x109ec0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x109ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x109ec4: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x109ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x109ec8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x109ec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x109ecc: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x109eccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x109ed0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x109ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x109ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x109ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109ED4u;
        // 0x109ed8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109EDCu;
}
