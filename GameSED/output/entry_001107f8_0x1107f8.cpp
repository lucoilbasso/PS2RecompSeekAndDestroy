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

// Function: entry_001107f8
// Address: 0x1107f8 - 0x110814
void entry_001107f8_0x1107f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001107f8_0x1107f8");
#endif

    switch (ctx->pc) {
        case 0x110800u: goto label_110800;
        default: break;
    }

    ctx->pc = 0x1107f8u;

    // 0x1107f8: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x1107F8u;
    SET_GPR_U32(ctx, 31, 0x110800u);
    ctx->pc = 0x1107FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1107F8u;
    // 0x1107fc: 0xac430150  sw          $v1, 0x150($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 336), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x1107F8u, 0x110800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110800u;
label_110800:
    // 0x110800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x110804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x110808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x110808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11080c: 0x3e00008  jr          $ra
    ctx->pc = 0x11080Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11080Cu;
        // 0x110810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11080Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110814u;
}
