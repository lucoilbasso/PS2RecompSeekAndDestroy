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

// Function: entry_001197dc
// Address: 0x1197dc - 0x1197f8
void entry_001197dc_0x1197dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001197dc_0x1197dc");
#endif

    ctx->pc = 0x1197dcu;

    // 0x1197dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1197dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1197e0: 0x240324d0  addiu       $v1, $zero, 0x24D0
    ctx->pc = 0x1197e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x1197e4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1197e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1197e8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1197e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1197ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1197ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1197f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1197f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1197f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1197f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1197f8u;
}
