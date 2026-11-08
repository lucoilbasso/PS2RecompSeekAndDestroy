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

// Function: entry_00110d68
// Address: 0x110d68 - 0x110d74
void entry_00110d68_0x110d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110d68_0x110d68");
#endif

    ctx->pc = 0x110d68u;

    // 0x110d68: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x110d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x110d6c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x110d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x110d70: 0x8c70fff0  lw          $s0, -0x10($v1)
    ctx->pc = 0x110d70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    ctx->pc = 0x110d74u;
}
