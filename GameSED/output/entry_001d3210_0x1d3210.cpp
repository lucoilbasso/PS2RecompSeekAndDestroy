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

// Function: entry_001d3210
// Address: 0x1d3210 - 0x1d3240
void entry_001d3210_0x1d3210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3210_0x1d3210");
#endif

    ctx->pc = 0x1d3210u;

    // 0x1d3210: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d3210u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3214: 0x3c02fe10  lui         $v0, 0xFE10
    ctx->pc = 0x1d3214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65040 << 16));
    // 0x1d3218: 0x16183f  dsra32      $v1, $s6, 0
    ctx->pc = 0x1d3218u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x1d321c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1d321cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1d3220: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1d3220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1d3224: 0x2c4b024  and         $s6, $s6, $a0
    ctx->pc = 0x1d3224u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 4));
    // 0x1d3228: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d3228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d322c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d322cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d3230: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1d3230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1d3234: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d3234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d3238: 0x2673fbcd  addiu       $s3, $s3, -0x433
    ctx->pc = 0x1d3238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966221));
    // 0x1d323c: 0x2c3b025  or          $s6, $s6, $v1
    ctx->pc = 0x1d323cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    ctx->pc = 0x1d3240u;
}
