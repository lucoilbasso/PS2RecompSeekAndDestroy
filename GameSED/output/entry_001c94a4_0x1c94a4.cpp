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

// Function: entry_001c94a4
// Address: 0x1c94a4 - 0x1c94d4
void entry_001c94a4_0x1c94a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c94a4_0x1c94a4");
#endif

    ctx->pc = 0x1c94a4u;

    // 0x1c94a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c94a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c94a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c94a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c94ac: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1c94acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c94b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c94b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c94b4: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1c94b4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1c94b8: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x1c94b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x1c94bc: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x1c94bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1c94c0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c94c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c94c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c94c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c94c8: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1c94c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1c94cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C94CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94CCu;
        // 0x1c94d0: 0x1c21025  or          $v0, $t6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C94CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C94D4u;
}
