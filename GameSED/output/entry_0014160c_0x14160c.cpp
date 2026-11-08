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

// Function: entry_0014160c
// Address: 0x14160c - 0x141610
void entry_0014160c_0x14160c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014160c_0x14160c");
#endif

    ctx->pc = 0x14160cu;

    // 0x14160c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x14160cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    ctx->pc = 0x141610u;
}
