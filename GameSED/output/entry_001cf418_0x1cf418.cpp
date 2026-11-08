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

// Function: entry_001cf418
// Address: 0x1cf418 - 0x1cf464
void entry_001cf418_0x1cf418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf418_0x1cf418");
#endif

    ctx->pc = 0x1cf418u;

    // 0x1cf418: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x1cf418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    // 0x1cf41c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1cf41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1cf420: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1cf420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1cf424: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1cf424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1cf428: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x1cf428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x1cf42c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1cf42cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1cf430: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1cf430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1cf434: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1cf434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1cf438: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x1cf438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1cf43c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1cf43cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1cf440: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x1cf440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x1cf444: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x1cf444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x1cf448: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1cf448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1cf44c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1cf44cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1cf450: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1cf450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1cf454: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1cf454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1cf458: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1cf458u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf45c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF464u;
}
