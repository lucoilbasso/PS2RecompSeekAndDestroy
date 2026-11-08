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

// Function: entry_001d8b18
// Address: 0x1d8b18 - 0x1d8b28
void entry_001d8b18_0x1d8b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8b18_0x1d8b18");
#endif

    ctx->pc = 0x1d8b18u;

    // 0x1d8b18: 0x26300034  addiu       $s0, $s1, 0x34
    ctx->pc = 0x1d8b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x1d8b1c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1d8b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d8b20: 0x8e06fff0  lw          $a2, -0x10($s0)
    ctx->pc = 0x1d8b20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
    // 0x1d8b24: 0x0  nop
    ctx->pc = 0x1d8b24u;
    // NOP
    ctx->pc = 0x1d8b28u;
}
