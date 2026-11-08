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

// Function: entry_001b3550
// Address: 0x1b3550 - 0x1b3578
void entry_001b3550_0x1b3550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3550_0x1b3550");
#endif

    ctx->pc = 0x1b3550u;

    // 0x1b3550: 0x24050440  addiu       $a1, $zero, 0x440
    ctx->pc = 0x1b3550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x1b3554: 0x8c82aa00  lw          $v0, -0x5600($a0)
    ctx->pc = 0x1b3554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945280)));
    // 0x1b3558: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1b3558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1b355c: 0x2463a710  addiu       $v1, $v1, -0x58F0
    ctx->pc = 0x1b355cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944528));
    // 0x1b3560: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1b3560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1b3564: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1b3564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b3568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b356c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1b356cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1b3570: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1b3570u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3574: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x1b3574u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x1b3578u;
}
