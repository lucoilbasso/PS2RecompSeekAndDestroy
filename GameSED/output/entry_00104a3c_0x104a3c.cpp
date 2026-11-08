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

// Function: entry_00104a3c
// Address: 0x104a3c - 0x104a44
void entry_00104a3c_0x104a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104a3c_0x104a3c");
#endif

    ctx->pc = 0x104a3cu;

    // 0x104a3c: 0x8f8388a0  lw          $v1, -0x7760($gp)
    ctx->pc = 0x104a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x104a40: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x104a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x104a44u;
}
