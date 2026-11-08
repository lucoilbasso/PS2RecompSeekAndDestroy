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

// Function: WorldJobHandler__8ApcField
// Address: 0x13e9c8 - 0x13e9f4
void WorldJobHandler__8ApcField_0x13e9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WorldJobHandler__8ApcField_0x13e9c8");
#endif

    switch (ctx->pc) {
        case 0x13e9dcu: goto label_13e9dc;
        case 0x13e9e4u: goto label_13e9e4;
        default: break;
    }

    ctx->pc = 0x13e9c8u;

    // 0x13e9c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e9cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13e9d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13e9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13e9d4: 0xc04f072  jal         func_13C1C8
    ctx->pc = 0x13E9D4u;
    SET_GPR_U32(ctx, 31, 0x13E9DCu);
    ctx->pc = 0x13E9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E9D4u;
    // 0x13e9d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C1C8u, 0x13E9D4u, 0x13E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E9DCu;
label_13e9dc:
    // 0x13e9dc: 0xc062260  jal         func_188980
    ctx->pc = 0x13E9DCu;
    SET_GPR_U32(ctx, 31, 0x13E9E4u);
    ctx->pc = 0x13E9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E9DCu;
    // 0x13e9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188980u, 0x13E9DCu, 0x13E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E9E4u;
label_13e9e4:
    // 0x13e9e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e9e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e9e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13e9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13e9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x13E9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9ECu;
        // 0x13e9f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E9F4u;
}
