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

// Function: entry_001392d4
// Address: 0x1392d4 - 0x1392dc
void entry_001392d4_0x1392d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001392d4_0x1392d4");
#endif

    ctx->pc = 0x1392d4u;

    // 0x1392d4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1392d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1392d8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1392d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x1392dcu;
}
