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

// Function: entry_0011bc34
// Address: 0x11bc34 - 0x11bc58
void entry_0011bc34_0x11bc34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bc34_0x11bc34");
#endif

    switch (ctx->pc) {
        case 0x11bc48u: goto label_11bc48;
        default: break;
    }

    ctx->pc = 0x11bc34u;

    // 0x11bc34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc38: 0x3405de00  ori         $a1, $zero, 0xDE00
    ctx->pc = 0x11bc38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56832);
    // 0x11bc3c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x11bc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x11bc40: 0xc05e614  jal         func_179850
    ctx->pc = 0x11BC40u;
    SET_GPR_U32(ctx, 31, 0x11BC48u);
    ctx->pc = 0x179850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179850u, 0x11BC40u, 0x11BC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC48u;
label_11bc48:
    // 0x11bc48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11bc48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bc4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11bc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11bc50: 0x3e00008  jr          $ra
    ctx->pc = 0x11BC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC50u;
        // 0x11bc54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BC58u;
}
