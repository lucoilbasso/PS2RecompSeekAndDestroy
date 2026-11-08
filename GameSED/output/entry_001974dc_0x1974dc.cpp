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

// Function: entry_001974dc
// Address: 0x1974dc - 0x1974e8
void entry_001974dc_0x1974dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001974dc_0x1974dc");
#endif

    ctx->pc = 0x1974dcu;

    // 0x1974dc: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x1974dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1974e0: 0x8ed301b0  lw          $s3, 0x1B0($s6)
    ctx->pc = 0x1974e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 432)));
    // 0x1974e4: 0x0  nop
    ctx->pc = 0x1974e4u;
    // NOP
    ctx->pc = 0x1974e8u;
}
