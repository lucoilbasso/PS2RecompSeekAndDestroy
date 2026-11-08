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

// Function: entry_00132678
// Address: 0x132678 - 0x13267c
void entry_00132678_0x132678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132678_0x132678");
#endif

    ctx->pc = 0x132678u;

    // 0x132678: 0x8c4202f8  lw          $v0, 0x2F8($v0)
    ctx->pc = 0x132678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 760)));
    ctx->pc = 0x13267cu;
}
