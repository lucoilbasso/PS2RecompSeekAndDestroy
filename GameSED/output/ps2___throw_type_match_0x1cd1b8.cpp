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

// Function: __throw_type_match
// Address: 0x1cd1b8 - 0x1cd1e4
void ps2___throw_type_match_0x1cd1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___throw_type_match_0x1cd1b8");
#endif

    switch (ctx->pc) {
        case 0x1cd1ccu: goto label_1cd1cc;
        default: break;
    }

    ctx->pc = 0x1cd1b8u;

    // 0x1cd1b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd1bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd1c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd1c4: 0xc074266  jal         func_1D0998
    ctx->pc = 0x1CD1C4u;
    SET_GPR_U32(ctx, 31, 0x1CD1CCu);
    ctx->pc = 0x1CD1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1C4u;
    // 0x1cd1c8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0998u, 0x1CD1C4u, 0x1CD1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1CCu;
label_1cd1cc:
    // 0x1cd1cc: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x1cd1ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1cd1d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd1d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cd1d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd1d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD1DCu;
        // 0x1cd1e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD1E4u;
}
