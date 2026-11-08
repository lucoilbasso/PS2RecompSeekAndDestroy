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

// Function: LoadSyncCheck__6WcFile
// Address: 0x1dc7b0 - 0x1dc7e0
void LoadSyncCheck__6WcFile_0x1dc7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSyncCheck__6WcFile_0x1dc7b0");
#endif

    switch (ctx->pc) {
        case 0x1dc7c8u: goto label_1dc7c8;
        case 0x1dc7d0u: goto label_1dc7d0;
        default: break;
    }

    ctx->pc = 0x1dc7b0u;

    // 0x1dc7b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc7b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc7b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc7bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dc7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dc7c0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1DC7C0u;
    SET_GPR_U32(ctx, 31, 0x1DC7C8u);
    ctx->pc = 0x1DC7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC7C0u;
    // 0x1dc7c4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1DC7C0u, 0x1DC7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC7C8u;
label_1dc7c8:
    // 0x1dc7c8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1DC7C8u;
    SET_GPR_U32(ctx, 31, 0x1DC7D0u);
    ctx->pc = 0x1DC7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC7C8u;
    // 0x1dc7cc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1DC7C8u, 0x1DC7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC7D0u;
label_1dc7d0:
    // 0x1dc7d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc7d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc7d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7D8u;
        // 0x1dc7dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC7E0u;
}
