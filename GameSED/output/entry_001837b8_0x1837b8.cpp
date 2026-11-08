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

// Function: entry_001837b8
// Address: 0x1837b8 - 0x1837d4
void entry_001837b8_0x1837b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001837b8_0x1837b8");
#endif

    switch (ctx->pc) {
        case 0x1837c0u: goto label_1837c0;
        default: break;
    }

    ctx->pc = 0x1837b8u;

    // 0x1837b8: 0xc060cf2  jal         func_1833C8
    ctx->pc = 0x1837B8u;
    SET_GPR_U32(ctx, 31, 0x1837C0u);
    ctx->pc = 0x1837BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1837B8u;
    // 0x1837bc: 0xae200038  sw          $zero, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1833C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1833C8u, 0x1837B8u, 0x1837C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1837C0u;
label_1837c0:
    // 0x1837c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1837c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1837c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1837c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1837c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1837c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1837cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1837CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1837D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837CCu;
        // 0x1837d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1837CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1837D4u;
}
