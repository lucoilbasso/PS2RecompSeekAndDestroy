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

// Function: entry_001ce5bc
// Address: 0x1ce5bc - 0x1ce618
void entry_001ce5bc_0x1ce5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce5bc_0x1ce5bc");
#endif

    ctx->pc = 0x1ce5bcu;

    // 0x1ce5bc: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x1ce5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x1ce5c0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ce5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ce5c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ce5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce5c8: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x1ce5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x1ce5cc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1ce5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ce5d0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1ce5d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1ce5d4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1ce5d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1ce5d8: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x1ce5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x1ce5dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ce5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ce5e0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ce5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ce5e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ce5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ce5e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ce5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ce5ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ce5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ce5f0: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x1ce5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x1ce5f4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1ce5f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1ce5f8: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x1ce5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x1ce5fc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ce5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce600: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x1ce600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x1ce604: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ce604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1ce608: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x1ce608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x1ce60c: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x1ce60cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1ce610: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE610u;
        // 0x1ce614: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE618u;
}
