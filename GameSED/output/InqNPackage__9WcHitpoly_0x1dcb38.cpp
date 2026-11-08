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

// Function: InqNPackage__9WcHitpoly
// Address: 0x1dcb38 - 0x1dcb6c
void InqNPackage__9WcHitpoly_0x1dcb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InqNPackage__9WcHitpoly_0x1dcb38");
#endif

    switch (ctx->pc) {
        case 0x1dcb50u: goto label_1dcb50;
        case 0x1dcb58u: goto label_1dcb58;
        default: break;
    }

    ctx->pc = 0x1dcb38u;

    // 0x1dcb38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcb3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcb40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dcb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dcb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dcb48: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1DCB48u;
    SET_GPR_U32(ctx, 31, 0x1DCB50u);
    ctx->pc = 0x1DCB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCB48u;
    // 0x1dcb4c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1DCB48u, 0x1DCB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB50u;
label_1dcb50:
    // 0x1dcb50: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1DCB50u;
    SET_GPR_U32(ctx, 31, 0x1DCB58u);
    ctx->pc = 0x1DCB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCB50u;
    // 0x1dcb54: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1DCB50u, 0x1DCB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB58u;
label_1dcb58:
    // 0x1dcb58: 0x96020022  lhu         $v0, 0x22($s0)
    ctx->pc = 0x1dcb58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x1dcb5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dcb5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcb60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcb60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcb64: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB64u;
        // 0x1dcb68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCB6Cu;
}
