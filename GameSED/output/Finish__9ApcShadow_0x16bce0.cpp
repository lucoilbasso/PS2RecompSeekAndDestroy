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

// Function: Finish__9ApcShadow
// Address: 0x16bce0 - 0x16bd18
void Finish__9ApcShadow_0x16bce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__9ApcShadow_0x16bce0");
#endif

    switch (ctx->pc) {
        case 0x16bd00u: goto label_16bd00;
        case 0x16bd08u: goto label_16bd08;
        default: break;
    }

    ctx->pc = 0x16bce0u;

    // 0x16bce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16bce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16bce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bce8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16bce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bcec: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x16bcecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x16bcf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16bcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bcf4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16bcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16bcf8: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x16BCF8u;
    SET_GPR_U32(ctx, 31, 0x16BD00u);
    ctx->pc = 0x16BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BCF8u;
    // 0x16bcfc: 0x24841220  addiu       $a0, $a0, 0x1220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x16BCF8u, 0x16BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BD00u;
label_16bd00:
    // 0x16bd00: 0xc0640a6  jal         func_190298
    ctx->pc = 0x16BD00u;
    SET_GPR_U32(ctx, 31, 0x16BD08u);
    ctx->pc = 0x16BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BD00u;
    // 0x16bd04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190298u, 0x16BD00u, 0x16BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BD08u;
label_16bd08:
    // 0x16bd08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16bd08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bd0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16bd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bd10: 0x3e00008  jr          $ra
    ctx->pc = 0x16BD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD10u;
        // 0x16bd14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BD18u;
}
