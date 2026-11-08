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

// Function: entry_0015a0cc
// Address: 0x15a0cc - 0x15a0d0
void entry_0015a0cc_0x15a0cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a0cc_0x15a0cc");
#endif

    ctx->pc = 0x15a0ccu;

    // 0x15a0cc: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x15a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->pc = 0x15a0d0u;
}
