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

// Function: entry_0013c284
// Address: 0x13c284 - 0x13c28c
void entry_0013c284_0x13c284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c284_0x13c284");
#endif

    ctx->pc = 0x13c284u;

    // 0x13c284: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13c284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x13c288: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x13c288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->pc = 0x13c28cu;
}
