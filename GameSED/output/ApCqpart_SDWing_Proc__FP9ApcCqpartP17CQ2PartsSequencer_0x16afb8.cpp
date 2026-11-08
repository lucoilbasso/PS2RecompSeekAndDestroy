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

// Function: ApCqpart_SDWing_Proc__FP9ApcCqpartP17CQ2PartsSequencer
// Address: 0x16afb8 - 0x16afd8
void ApCqpart_SDWing_Proc__FP9ApcCqpartP17CQ2PartsSequencer_0x16afb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCqpart_SDWing_Proc__FP9ApcCqpartP17CQ2PartsSequencer_0x16afb8");
#endif

    switch (ctx->pc) {
        case 0x16afccu: goto label_16afcc;
        default: break;
    }

    ctx->pc = 0x16afb8u;

    // 0x16afb8: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x16afb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x16afbc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16afbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16afc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16afc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16afc4: 0xc059e60  jal         func_167980
    ctx->pc = 0x16AFC4u;
    SET_GPR_U32(ctx, 31, 0x16AFCCu);
    ctx->pc = 0x16AFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AFC4u;
    // 0x16afc8: 0x24c6bef0  addiu       $a2, $a2, -0x4110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167980u, 0x16AFC4u, 0x16AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AFCCu;
label_16afcc:
    // 0x16afcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16afccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16afd0: 0x3e00008  jr          $ra
    ctx->pc = 0x16AFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFD0u;
        // 0x16afd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AFD8u;
}
