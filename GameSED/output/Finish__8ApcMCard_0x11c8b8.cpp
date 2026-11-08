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

// Function: Finish__8ApcMCard
// Address: 0x11c8b8 - 0x11c8e4
void Finish__8ApcMCard_0x11c8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__8ApcMCard_0x11c8b8");
#endif

    switch (ctx->pc) {
        case 0x11c8ccu: goto label_11c8cc;
        case 0x11c8d4u: goto label_11c8d4;
        default: break;
    }

    ctx->pc = 0x11c8b8u;

    // 0x11c8b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11c8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11c8bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11c8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c8c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11c8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11c8c4: 0xc05e7f4  jal         func_179FD0
    ctx->pc = 0x11C8C4u;
    SET_GPR_U32(ctx, 31, 0x11C8CCu);
    ctx->pc = 0x11C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8C4u;
    // 0x11c8c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179FD0u, 0x11C8C4u, 0x11C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8CCu;
label_11c8cc:
    // 0x11c8cc: 0xc05e342  jal         func_178D08
    ctx->pc = 0x11C8CCu;
    SET_GPR_U32(ctx, 31, 0x11C8D4u);
    ctx->pc = 0x11C8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8CCu;
    // 0x11c8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D08u, 0x11C8CCu, 0x11C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8D4u;
label_11c8d4:
    // 0x11c8d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c8d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c8d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11c8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11c8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x11C8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8DCu;
        // 0x11c8e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C8E4u;
}
