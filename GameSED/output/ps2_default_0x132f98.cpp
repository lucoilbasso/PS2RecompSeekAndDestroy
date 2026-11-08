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

// Function: default
// Address: 0x132f98 - 0x132fc0
void ps2_default_0x132f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x132f98");
#endif

    ctx->pc = 0x132f98u;

    // 0x132f98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x132f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132f9c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x132f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x132fa0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x132fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x132fa4: 0xac740040  sw          $s4, 0x40($v1)
    ctx->pc = 0x132fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 20));
    // 0x132fa8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x132fa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132fac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x132facu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x132fb0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x132fb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132fb4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x132fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x132FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FB8u;
        // 0x132fbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132FC0u;
}
