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

// Function: entry_001c7f34
// Address: 0x1c7f34 - 0x1c7f60
void entry_001c7f34_0x1c7f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7f34_0x1c7f34");
#endif

    ctx->pc = 0x1c7f34u;

    // 0x1c7f34: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c7f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c7f38: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c7f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c7f3c: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1c7f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1c7f40: 0x283a024  and         $s4, $s4, $v1
    ctx->pc = 0x1c7f40u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x1c7f44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c7f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c7f48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c7f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c7f4c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1c7f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1c7f50: 0x284a025  or          $s4, $s4, $a0
    ctx->pc = 0x1c7f50u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 4));
    // 0x1c7f54: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c7f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c7f58: 0x283a024  and         $s4, $s4, $v1
    ctx->pc = 0x1c7f58u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x1c7f5c: 0x2823025  or          $a2, $s4, $v0
    ctx->pc = 0x1c7f5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    ctx->pc = 0x1c7f60u;
}
