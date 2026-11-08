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

// Function: entry_0011b708
// Address: 0x11b708 - 0x11b724
void entry_0011b708_0x11b708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b708_0x11b708");
#endif

    switch (ctx->pc) {
        case 0x11b710u: goto label_11b710;
        default: break;
    }

    ctx->pc = 0x11b708u;

    // 0x11b708: 0xc06866c  jal         func_1A19B0
    ctx->pc = 0x11B708u;
    SET_GPR_U32(ctx, 31, 0x11B710u);
    ctx->pc = 0x11B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B708u;
    // 0x11b70c: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x11B708u, 0x11B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B710u;
label_11b710:
    // 0x11b710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b714: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b71c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B71Cu;
        // 0x11b720: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B724u;
}
