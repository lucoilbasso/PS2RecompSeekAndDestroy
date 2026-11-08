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

// Function: entry_00112a48
// Address: 0x112a48 - 0x112a50
void entry_00112a48_0x112a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112a48_0x112a48");
#endif

    ctx->pc = 0x112a48u;

    // 0x112a48: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x112a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x112a4c: 0x8c70fff0  lw          $s0, -0x10($v1)
    ctx->pc = 0x112a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    ctx->pc = 0x112a50u;
}
