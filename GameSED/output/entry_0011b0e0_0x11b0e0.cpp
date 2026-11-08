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

// Function: entry_0011b0e0
// Address: 0x11b0e0 - 0x11b100
void entry_0011b0e0_0x11b0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b0e0_0x11b0e0");
#endif

    switch (ctx->pc) {
        case 0x11b0e8u: goto label_11b0e8;
        default: break;
    }

    ctx->pc = 0x11b0e0u;

    // 0x11b0e0: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x11B0E0u;
    SET_GPR_U32(ctx, 31, 0x11B0E8u);
    ctx->pc = 0x11B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0E0u;
    // 0x11b0e4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x11B0E0u, 0x11B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0E8u;
label_11b0e8:
    // 0x11b0e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b0ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b0ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b0f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11b0f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b0f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11b0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11b0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x11B0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0F8u;
        // 0x11b0fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B100u;
}
