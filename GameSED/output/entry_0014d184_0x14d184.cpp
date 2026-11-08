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

// Function: entry_0014d184
// Address: 0x14d184 - 0x14d188
void entry_0014d184_0x14d184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d184_0x14d184");
#endif

    ctx->pc = 0x14d184u;

    // 0x14d184: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x14d184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    ctx->pc = 0x14d188u;
}
