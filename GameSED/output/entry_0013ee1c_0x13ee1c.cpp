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

// Function: entry_0013ee1c
// Address: 0x13ee1c - 0x13ee24
void entry_0013ee1c_0x13ee1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ee1c_0x13ee1c");
#endif

    ctx->pc = 0x13ee1cu;

    // 0x13ee1c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x13ee1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ee20: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x13ee20u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x13ee24u;
}
