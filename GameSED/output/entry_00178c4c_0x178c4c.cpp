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

// Function: entry_00178c4c
// Address: 0x178c4c - 0x178c50
void entry_00178c4c_0x178c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178c4c_0x178c4c");
#endif

    ctx->pc = 0x178c4cu;

    // 0x178c4c: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x178c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x178c50u;
}
