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

// Function: entry_00138b34
// Address: 0x138b34 - 0x138b3c
void entry_00138b34_0x138b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138b34_0x138b34");
#endif

    ctx->pc = 0x138b34u;

    // 0x138b34: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138b38: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x138b38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    ctx->pc = 0x138b3cu;
}
