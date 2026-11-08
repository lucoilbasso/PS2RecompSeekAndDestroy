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

// Function: entry_001429a4
// Address: 0x1429a4 - 0x1429b0
void entry_001429a4_0x1429a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001429a4_0x1429a4");
#endif

    ctx->pc = 0x1429a4u;

    // 0x1429a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1429a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1429a8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1429a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1429ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1429acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1429b0u;
}
