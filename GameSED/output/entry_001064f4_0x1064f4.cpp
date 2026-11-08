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

// Function: entry_001064f4
// Address: 0x1064f4 - 0x106518
void entry_001064f4_0x1064f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001064f4_0x1064f4");
#endif

    switch (ctx->pc) {
        case 0x106504u: goto label_106504;
        default: break;
    }

    ctx->pc = 0x1064f4u;

    // 0x1064f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1064f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1064f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064fc: 0xc06a584  jal         func_1A9610
    ctx->pc = 0x1064FCu;
    SET_GPR_U32(ctx, 31, 0x106504u);
    ctx->pc = 0x106500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1064FCu;
    // 0x106500: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9610u, 0x1064FCu, 0x106504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106504u;
label_106504:
    // 0x106504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106508: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x106508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10650c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10650cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106510: 0x3e00008  jr          $ra
    ctx->pc = 0x106510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106510u;
        // 0x106514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106518u;
}
