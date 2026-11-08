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

// Function: entry_001c2f0c
// Address: 0x1c2f0c - 0x1c2f24
void entry_001c2f0c_0x1c2f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2f0c_0x1c2f0c");
#endif

    ctx->pc = 0x1c2f0cu;

    // 0x1c2f0c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1c2f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1c2f10: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x1c2f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1c2f14: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x1c2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x1c2f18: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1c2f18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c2f1c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1c2f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c2f20: 0x38510001  xori        $s1, $v0, 0x1
    ctx->pc = 0x1c2f20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->pc = 0x1c2f24u;
}
