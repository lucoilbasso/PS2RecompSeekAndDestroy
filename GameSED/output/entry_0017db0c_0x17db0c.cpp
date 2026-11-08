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

// Function: entry_0017db0c
// Address: 0x17db0c - 0x17db14
void entry_0017db0c_0x17db0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017db0c_0x17db0c");
#endif

    ctx->pc = 0x17db0cu;

    // 0x17db0c: 0xa1a00000  sb          $zero, 0x0($t5)
    ctx->pc = 0x17db0cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17db10: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x17db10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    ctx->pc = 0x17db14u;
}
