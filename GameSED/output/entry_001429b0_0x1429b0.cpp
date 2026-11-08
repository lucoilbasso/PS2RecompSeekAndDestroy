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

// Function: entry_001429b0
// Address: 0x1429b0 - 0x1429b8
void entry_001429b0_0x1429b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001429b0_0x1429b0");
#endif

    ctx->pc = 0x1429b0u;

    // 0x1429b0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1429b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1429b4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1429b4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x1429b8u;
}
