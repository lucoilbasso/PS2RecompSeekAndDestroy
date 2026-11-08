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

// Function: entry_0010c790
// Address: 0x10c790 - 0x10c7ac
void entry_0010c790_0x10c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c790_0x10c790");
#endif

    switch (ctx->pc) {
        case 0x10c798u: goto label_10c798;
        default: break;
    }

    ctx->pc = 0x10c790u;

    // 0x10c790: 0xc062d1e  jal         func_18B478
    ctx->pc = 0x10C790u;
    SET_GPR_U32(ctx, 31, 0x10C798u);
    ctx->pc = 0x10C794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C790u;
    // 0x10c794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B478u, 0x10C790u, 0x10C798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C798u;
label_10c798:
    // 0x10c798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c79c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c7a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x10C7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7A4u;
        // 0x10c7a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C7ACu;
}
