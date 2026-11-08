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

// Function: ApCqpart_SDAngel_Proc__FP9ApcCqpartP17CQ2PartsSequencer
// Address: 0x16afd8 - 0x16aff8
void ApCqpart_SDAngel_Proc__FP9ApcCqpartP17CQ2PartsSequencer_0x16afd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCqpart_SDAngel_Proc__FP9ApcCqpartP17CQ2PartsSequencer_0x16afd8");
#endif

    switch (ctx->pc) {
        case 0x16afecu: goto label_16afec;
        default: break;
    }

    ctx->pc = 0x16afd8u;

    // 0x16afd8: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x16afd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x16afdc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16afdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16afe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16afe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16afe4: 0xc059e60  jal         func_167980
    ctx->pc = 0x16AFE4u;
    SET_GPR_U32(ctx, 31, 0x16AFECu);
    ctx->pc = 0x16AFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AFE4u;
    // 0x16afe8: 0x24c6d340  addiu       $a2, $a2, -0x2CC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167980u, 0x16AFE4u, 0x16AFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AFECu;
label_16afec:
    // 0x16afec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16afecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aff0: 0x3e00008  jr          $ra
    ctx->pc = 0x16AFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFF0u;
        // 0x16aff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AFF8u;
}
