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

// Function: copysign
// Address: 0x1c8170 - 0x1c81b4
void copysign_0x1c8170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copysign_0x1c8170");
#endif

    ctx->pc = 0x1c8170u;

    // 0x1c8170: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c8170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8174: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c8174u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8178: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c8178u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c817c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1c817cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1c8180: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c8180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8184: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1c8184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1c8188: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c818c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1c818cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1c8190: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c8190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c8194: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c8194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8198: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c8198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c819c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x1c819cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1c81a0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1c81a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1c81a4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1c81a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c81a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c81a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c81ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C81ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81ACu;
        // 0x1c81b0: 0xc31025  or          $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C81ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C81B4u;
}
