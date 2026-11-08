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

// Function: entry_0016c3a8
// Address: 0x16c3a8 - 0x16c3ac
void entry_0016c3a8_0x16c3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c3a8_0x16c3a8");
#endif

    ctx->pc = 0x16c3a8u;

    // 0x16c3a8: 0x8c52b830  lw          $s2, -0x47D0($v0)
    ctx->pc = 0x16c3a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    ctx->pc = 0x16c3acu;
}
