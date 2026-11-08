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

// Function: caseD_11
// Address: 0x16c410 - 0x16c434
void caseD_11_0x16c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x16c410");
#endif

    ctx->pc = 0x16c410u;

    // 0x16c410: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x16c410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x16c414: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16c414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16c418: 0xae220260  sw          $v0, 0x260($s1)
    ctx->pc = 0x16c418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
    // 0x16c41c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x16c41cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x16c420: 0x8c623630  lw          $v0, 0x3630($v1)
    ctx->pc = 0x16c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13872)));
    // 0x16c424: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16c424u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16c428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c42c: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x16c42cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
    // 0x16c430: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x16c430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    ctx->pc = 0x16c434u;
}
