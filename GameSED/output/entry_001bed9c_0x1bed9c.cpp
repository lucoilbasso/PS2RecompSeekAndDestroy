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

// Function: entry_001bed9c
// Address: 0x1bed9c - 0x1bedcc
void entry_001bed9c_0x1bed9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bed9c_0x1bed9c");
#endif

    ctx->pc = 0x1bed9cu;

    // 0x1bed9c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1bed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1beda0: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x1beda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1beda4: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x1beda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1beda8: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x1beda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bedac: 0x2c33818  mult        $a3, $s6, $v1
    ctx->pc = 0x1bedacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1bedb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bedb4: 0xf71821  addu        $v1, $a3, $s7
    ctx->pc = 0x1bedb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x1bedb8: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x1bedb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1bedbc: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x1bedbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bedc0: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x1bedc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x1bedc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bedc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bedc8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1bedc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1bedccu;
}
