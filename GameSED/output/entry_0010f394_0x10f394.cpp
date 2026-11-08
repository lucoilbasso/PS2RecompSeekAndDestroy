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

// Function: entry_0010f394
// Address: 0x10f394 - 0x10f3b0
void entry_0010f394_0x10f394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f394_0x10f394");
#endif

    switch (ctx->pc) {
        case 0x10f39cu: goto label_10f39c;
        default: break;
    }

    ctx->pc = 0x10f394u;

    // 0x10f394: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x10F394u;
    SET_GPR_U32(ctx, 31, 0x10F39Cu);
    ctx->pc = 0x10F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F394u;
    // 0x10f398: 0xac4301dc  sw          $v1, 0x1DC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 476), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x10F394u, 0x10F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F39Cu;
label_10f39c:
    // 0x10f39c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f39cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f3a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10f3a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10f3a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3A8u;
        // 0x10f3ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F3B0u;
}
