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

// Function: entry_001cd220
// Address: 0x1cd220 - 0x1cd244
void entry_001cd220_0x1cd220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd220_0x1cd220");
#endif

    switch (ctx->pc) {
        case 0x1cd228u: goto label_1cd228;
        default: break;
    }

    ctx->pc = 0x1cd220u;

    // 0x1cd220: 0xc074035  jal         func_1D00D4
    ctx->pc = 0x1CD220u;
    SET_GPR_U32(ctx, 31, 0x1CD228u);
    ctx->pc = 0x1D00D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D00D4u, 0x1CD220u, 0x1CD228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD228u;
label_1cd228:
    // 0x1cd228: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x1cd228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1cd22c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cd22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd230: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1cd230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1cd234: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd23c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD23Cu;
        // 0x1cd240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD244u;
}
