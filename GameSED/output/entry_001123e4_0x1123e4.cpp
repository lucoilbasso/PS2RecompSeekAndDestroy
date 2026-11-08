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

// Function: entry_001123e4
// Address: 0x1123e4 - 0x1123f8
void entry_001123e4_0x1123e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001123e4_0x1123e4");
#endif

    ctx->pc = 0x1123e4u;

    // 0x1123e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1123e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1123e8: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x1123e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1123ec: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1123ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1123f0: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1123f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1123f4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1123f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x1123f8u;
}
