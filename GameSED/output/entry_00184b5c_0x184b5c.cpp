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

// Function: entry_00184b5c
// Address: 0x184b5c - 0x184b7c
void entry_00184b5c_0x184b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184b5c_0x184b5c");
#endif

    switch (ctx->pc) {
        case 0x184b64u: goto label_184b64;
        default: break;
    }

    ctx->pc = 0x184b5cu;

    // 0x184b5c: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x184B5Cu;
    SET_GPR_U32(ctx, 31, 0x184B64u);
    ctx->pc = 0x184B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B5Cu;
    // 0x184b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x184B5Cu, 0x184B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B64u;
label_184b64:
    // 0x184b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184b68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x184b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184b6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x184b6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184b70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x184b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x184b74: 0x3e00008  jr          $ra
    ctx->pc = 0x184B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B74u;
        // 0x184b78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184B7Cu;
}
