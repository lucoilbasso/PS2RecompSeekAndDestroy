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

// Function: _i2b
// Address: 0x1d5770 - 0x1d57a8
void _i2b_0x1d5770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_i2b_0x1d5770");
#endif

    switch (ctx->pc) {
        case 0x1d5788u: goto label_1d5788;
        default: break;
    }

    ctx->pc = 0x1d5770u;

    // 0x1d5770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5778: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d5778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d577c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d577cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5780: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D5780u;
    SET_GPR_U32(ctx, 31, 0x1D5788u);
    ctx->pc = 0x1D5784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5780u;
    // 0x1d5784: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D5780u, 0x1D5788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5788u;
label_1d5788:
    // 0x1d5788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d5788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d578c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d578cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5790: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5794: 0xac900014  sw          $s0, 0x14($a0)
    ctx->pc = 0x1d5794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 16));
    // 0x1d5798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d579c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1d579cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1d57a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D57A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D57A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57A0u;
        // 0x1d57a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D57A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D57A8u;
}
