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

// Function: entry_001786b8
// Address: 0x1786b8 - 0x1786d4
void entry_001786b8_0x1786b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001786b8_0x1786b8");
#endif

    switch (ctx->pc) {
        case 0x1786c0u: goto label_1786c0;
        default: break;
    }

    ctx->pc = 0x1786b8u;

    // 0x1786b8: 0xc05e1e8  jal         func_1787A0
    ctx->pc = 0x1786B8u;
    SET_GPR_U32(ctx, 31, 0x1786C0u);
    ctx->pc = 0x1786BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1786B8u;
    // 0x1786bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1787A0u, 0x1786B8u, 0x1786C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1786C0u;
label_1786c0:
    // 0x1786c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1786c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1786c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1786c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1786c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1786c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1786cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1786CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1786D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786CCu;
        // 0x1786d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1786CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1786D4u;
}
