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

// Function: ApCqpart_SDHover_Proc__FP9ApcCqpartP17CQ2PartsSequencer
// Address: 0x16af98 - 0x16afb8
void ApCqpart_SDHover_Proc__FP9ApcCqpartP17CQ2PartsSequencer_0x16af98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCqpart_SDHover_Proc__FP9ApcCqpartP17CQ2PartsSequencer_0x16af98");
#endif

    switch (ctx->pc) {
        case 0x16afacu: goto label_16afac;
        default: break;
    }

    ctx->pc = 0x16af98u;

    // 0x16af98: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x16af98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x16af9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16af9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16afa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16afa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16afa4: 0xc059892  jal         func_166248
    ctx->pc = 0x16AFA4u;
    SET_GPR_U32(ctx, 31, 0x16AFACu);
    ctx->pc = 0x16AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AFA4u;
    // 0x16afa8: 0x24c6aa60  addiu       $a2, $a2, -0x55A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166248u, 0x16AFA4u, 0x16AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AFACu;
label_16afac:
    // 0x16afac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16afacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16afb0: 0x3e00008  jr          $ra
    ctx->pc = 0x16AFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFB0u;
        // 0x16afb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AFB8u;
}
