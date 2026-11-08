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

// Function: entry_001d6288
// Address: 0x1d6288 - 0x1d629c
void entry_001d6288_0x1d6288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6288_0x1d6288");
#endif

    ctx->pc = 0x1d6288u;

    // 0x1d6288: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d6288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d628c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1d628cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1d6290: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d6290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d6294: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x1d6294u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1d6298: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d6298u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    ctx->pc = 0x1d629cu;
}
