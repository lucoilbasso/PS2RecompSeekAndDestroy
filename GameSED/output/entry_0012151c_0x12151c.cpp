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

// Function: entry_0012151c
// Address: 0x12151c - 0x121524
void entry_0012151c_0x12151c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012151c_0x12151c");
#endif

    ctx->pc = 0x12151cu;

    // 0x12151c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x12151cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x121520: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x121520u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x121524u;
}
