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

// Function: entry_001d6018
// Address: 0x1d6018 - 0x1d6048
void entry_001d6018_0x1d6018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6018_0x1d6018");
#endif

    ctx->pc = 0x1d6018u;

    // 0x1d6018: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x1d6018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x1d601c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d601cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d6020: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d6020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d6024: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1d6024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d6028: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x1d6028u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x1d602c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d602cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d6030: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d6030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6034: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d6034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1d6038: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x1d6038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1d603c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1d603cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1d6040: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d6040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d6044: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x1d6044u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    ctx->pc = 0x1d6048u;
}
