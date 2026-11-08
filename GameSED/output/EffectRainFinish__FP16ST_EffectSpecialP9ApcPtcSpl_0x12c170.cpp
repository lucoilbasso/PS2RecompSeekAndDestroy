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

// Function: EffectRainFinish__FP16ST_EffectSpecialP9ApcPtcSpl
// Address: 0x12c170 - 0x12c198
void EffectRainFinish__FP16ST_EffectSpecialP9ApcPtcSpl_0x12c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectRainFinish__FP16ST_EffectSpecialP9ApcPtcSpl_0x12c170");
#endif

    switch (ctx->pc) {
        case 0x12c18cu: goto label_12c18c;
        default: break;
    }

    ctx->pc = 0x12c170u;

    // 0x12c170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12c174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c178: 0x8c8201b0  lw          $v0, 0x1B0($a0)
    ctx->pc = 0x12c178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x12c17c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C17Cu;
    {
        const bool branch_taken_0x12c17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C17Cu;
        // 0x12c180: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c17c) {
            ctx->pc = 0x12C18Cu;
            goto label_12c18c;
        }
    }
    ctx->pc = 0x12C184u;
    // 0x12c184: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x12C184u;
    SET_GPR_U32(ctx, 31, 0x12C18Cu);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x12C184u, 0x12C18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C18Cu;
label_12c18c:
    // 0x12c18c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c190: 0x3e00008  jr          $ra
    ctx->pc = 0x12C190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C190u;
        // 0x12c194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C198u;
}
