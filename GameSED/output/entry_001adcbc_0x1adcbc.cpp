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

// Function: entry_001adcbc
// Address: 0x1adcbc - 0x1adcd0
void entry_001adcbc_0x1adcbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adcbc_0x1adcbc");
#endif

    ctx->pc = 0x1adcbcu;

    // 0x1adcbc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1adcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1adcc0: 0x26d1ffff  addiu       $s1, $s6, -0x1
    ctx->pc = 0x1adcc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1adcc4: 0x2e39821  addu        $s3, $s7, $v1
    ctx->pc = 0x1adcc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1adcc8: 0x3c39021  addu        $s2, $fp, $v1
    ctx->pc = 0x1adcc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1adccc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1adcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x1adcd0u;
}
