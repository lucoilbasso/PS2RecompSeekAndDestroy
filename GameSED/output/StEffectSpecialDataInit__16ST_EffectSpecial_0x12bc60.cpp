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

// Function: StEffectSpecialDataInit__16ST_EffectSpecial
// Address: 0x12bc60 - 0x12bc84
void StEffectSpecialDataInit__16ST_EffectSpecial_0x12bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StEffectSpecialDataInit__16ST_EffectSpecial_0x12bc60");
#endif

    switch (ctx->pc) {
        case 0x12bc78u: goto label_12bc78;
        default: break;
    }

    ctx->pc = 0x12bc60u;

    // 0x12bc60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bc64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12bc64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bc6c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12bc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12bc70: 0xc04af22  jal         func_12BC88
    ctx->pc = 0x12BC70u;
    SET_GPR_U32(ctx, 31, 0x12BC78u);
    ctx->pc = 0x12BC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC70u;
    // 0x12bc74: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC88u, 0x12BC70u, 0x12BC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BC78u;
label_12bc78:
    // 0x12bc78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x12BC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC7Cu;
        // 0x12bc80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BC84u;
}
