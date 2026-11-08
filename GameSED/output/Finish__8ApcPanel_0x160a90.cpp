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

// Function: Finish__8ApcPanel
// Address: 0x160a90 - 0x160ac4
void Finish__8ApcPanel_0x160a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__8ApcPanel_0x160a90");
#endif

    switch (ctx->pc) {
        case 0x160aa4u: goto label_160aa4;
        case 0x160aacu: goto label_160aac;
        case 0x160ab4u: goto label_160ab4;
        default: break;
    }

    ctx->pc = 0x160a90u;

    // 0x160a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x160a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x160a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x160a98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x160a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x160a9c: 0xc0568c8  jal         func_15A320
    ctx->pc = 0x160A9Cu;
    SET_GPR_U32(ctx, 31, 0x160AA4u);
    ctx->pc = 0x160AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160A9Cu;
    // 0x160aa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A320u, 0x160A9Cu, 0x160AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160AA4u;
label_160aa4:
    // 0x160aa4: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x160AA4u;
    SET_GPR_U32(ctx, 31, 0x160AACu);
    ctx->pc = 0x160AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160AA4u;
    // 0x160aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x160AA4u, 0x160AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160AACu;
label_160aac:
    // 0x160aac: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x160AACu;
    SET_GPR_U32(ctx, 31, 0x160AB4u);
    ctx->pc = 0x160AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160AACu;
    // 0x160ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x160AACu, 0x160AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160AB4u;
label_160ab4:
    // 0x160ab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160ab8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x160ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160abc: 0x3e00008  jr          $ra
    ctx->pc = 0x160ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160ABCu;
        // 0x160ac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160AC4u;
}
