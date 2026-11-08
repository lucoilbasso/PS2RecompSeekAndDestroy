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

// Function: entry_00177008
// Address: 0x177008 - 0x177028
void entry_00177008_0x177008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177008_0x177008");
#endif

    switch (ctx->pc) {
        case 0x177010u: goto label_177010;
        default: break;
    }

    ctx->pc = 0x177008u;

    // 0x177008: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x177008u;
    SET_GPR_U32(ctx, 31, 0x177010u);
    ctx->pc = 0x17700Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177008u;
    // 0x17700c: 0x8f848d0c  lw          $a0, -0x72F4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x177008u, 0x177010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177010u;
label_177010:
    // 0x177010: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x177010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177014: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x177014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177018: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x177018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17701c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17701cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177020: 0x3e00008  jr          $ra
    ctx->pc = 0x177020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177020u;
        // 0x177024: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177028u;
}
