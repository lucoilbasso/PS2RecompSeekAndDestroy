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

// Function: entry_0011a424
// Address: 0x11a424 - 0x11a448
void entry_0011a424_0x11a424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a424_0x11a424");
#endif

    ctx->pc = 0x11a424u;

    // 0x11a424: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11a424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11a428: 0x24483608  addiu       $t0, $v0, 0x3608
    ctx->pc = 0x11a428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 13832));
    // 0x11a42c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x11a42cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a430: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x11a430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x11a434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a438: 0xaf838968  sw          $v1, -0x7698($gp)
    ctx->pc = 0x11a438u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936936), GPR_U32(ctx, 3));
    // 0x11a43c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11a43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a440: 0x3409fffa  ori         $t1, $zero, 0xFFFA
    ctx->pc = 0x11a440u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x11a444: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x11a444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x11a448u;
}
