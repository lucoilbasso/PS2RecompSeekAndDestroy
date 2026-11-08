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

// Function: entry_001042e8
// Address: 0x1042e8 - 0x104300
void entry_001042e8_0x1042e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001042e8_0x1042e8");
#endif

    switch (ctx->pc) {
        case 0x1042f0u: goto label_1042f0;
        default: break;
    }

    ctx->pc = 0x1042e8u;

    // 0x1042e8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1042E8u;
    SET_GPR_U32(ctx, 31, 0x1042F0u);
    ctx->pc = 0x1042ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1042E8u;
    // 0x1042ec: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1042E8u, 0x1042F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1042F0u;
label_1042f0:
    // 0x1042f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1042f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1042f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1042f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1042f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1042F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1042FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042F8u;
        // 0x1042fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1042F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104300u;
}
