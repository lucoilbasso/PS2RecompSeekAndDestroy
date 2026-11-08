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

// Function: StEffectLineDataInit__13ST_EffectLine
// Address: 0x12de38 - 0x12de5c
void StEffectLineDataInit__13ST_EffectLine_0x12de38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StEffectLineDataInit__13ST_EffectLine_0x12de38");
#endif

    switch (ctx->pc) {
        case 0x12de50u: goto label_12de50;
        default: break;
    }

    ctx->pc = 0x12de38u;

    // 0x12de38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12de38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12de3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12de3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12de40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12de44: 0xac4000c0  sw          $zero, 0xC0($v0)
    ctx->pc = 0x12de44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
    // 0x12de48: 0xc04b798  jal         func_12DE60
    ctx->pc = 0x12DE48u;
    SET_GPR_U32(ctx, 31, 0x12DE50u);
    ctx->pc = 0x12DE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE48u;
    // 0x12de4c: 0xac4000c4  sw          $zero, 0xC4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DE60u, 0x12DE48u, 0x12DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE50u;
label_12de50:
    // 0x12de50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12de50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12de54: 0x3e00008  jr          $ra
    ctx->pc = 0x12DE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE54u;
        // 0x12de58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DE5Cu;
}
