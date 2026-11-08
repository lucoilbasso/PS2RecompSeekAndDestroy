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

// Function: entry_0017ac8c
// Address: 0x17ac8c - 0x17acac
void entry_0017ac8c_0x17ac8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ac8c_0x17ac8c");
#endif

    switch (ctx->pc) {
        case 0x17ac94u: goto label_17ac94;
        default: break;
    }

    ctx->pc = 0x17ac8cu;

    // 0x17ac8c: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x17AC8Cu;
    SET_GPR_U32(ctx, 31, 0x17AC94u);
    ctx->pc = 0x17AC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC8Cu;
    // 0x17ac90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x17AC8Cu, 0x17AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC94u;
label_17ac94:
    // 0x17ac94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ac94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ac98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ac98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ac9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ac9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aca0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17aca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17aca4: 0x3e00008  jr          $ra
    ctx->pc = 0x17ACA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACA4u;
        // 0x17aca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ACA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ACACu;
}
