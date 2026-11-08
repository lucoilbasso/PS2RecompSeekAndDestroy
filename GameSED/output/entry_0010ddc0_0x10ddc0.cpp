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

// Function: entry_0010ddc0
// Address: 0x10ddc0 - 0x10ddec
void entry_0010ddc0_0x10ddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ddc0_0x10ddc0");
#endif

    switch (ctx->pc) {
        case 0x10ddccu: goto label_10ddcc;
        default: break;
    }

    ctx->pc = 0x10ddc0u;

    // 0x10ddc0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10ddc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ddc4: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x10DDC4u;
    SET_GPR_U32(ctx, 31, 0x10DDCCu);
    ctx->pc = 0x10DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DDC4u;
    // 0x10ddc8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x10DDC4u, 0x10DDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDCCu;
label_10ddcc:
    // 0x10ddcc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10ddccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ddd0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10ddd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10ddd4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ddd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ddd8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x10ddd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10dddc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x10dddcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10dde0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x10dde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10dde4: 0x3e00008  jr          $ra
    ctx->pc = 0x10DDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDE4u;
        // 0x10dde8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DDECu;
}
