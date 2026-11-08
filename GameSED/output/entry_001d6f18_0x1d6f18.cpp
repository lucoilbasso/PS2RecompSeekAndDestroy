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

// Function: entry_001d6f18
// Address: 0x1d6f18 - 0x1d6f3c
void entry_001d6f18_0x1d6f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6f18_0x1d6f18");
#endif

    switch (ctx->pc) {
        case 0x1d6f24u: goto label_1d6f24;
        default: break;
    }

    ctx->pc = 0x1d6f18u;

    // 0x1d6f18: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1d6f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1d6f1c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D6F1Cu;
    SET_GPR_U32(ctx, 31, 0x1D6F24u);
    ctx->pc = 0x1D6F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6F1Cu;
    // 0x1d6f20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D6F1Cu, 0x1D6F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6F24u;
label_1d6f24:
    // 0x1d6f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6f28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6f28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6f2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d6f2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6f30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d6f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d6f34: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F34u;
        // 0x1d6f38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6F3Cu;
}
