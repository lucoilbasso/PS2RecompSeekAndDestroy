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

// Function: entry_00152cf8
// Address: 0x152cf8 - 0x152d08
void entry_00152cf8_0x152cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152cf8_0x152cf8");
#endif

    ctx->pc = 0x152cf8u;

    // 0x152cf8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x152cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x152cfc: 0xae430854  sw          $v1, 0x854($s2)
    ctx->pc = 0x152cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2132), GPR_U32(ctx, 3));
    // 0x152d00: 0xae420858  sw          $v0, 0x858($s2)
    ctx->pc = 0x152d00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2136), GPR_U32(ctx, 2));
    // 0x152d04: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x152d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->pc = 0x152d08u;
}
