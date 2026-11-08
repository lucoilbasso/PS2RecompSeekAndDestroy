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

// Function: entry_0019e44c
// Address: 0x19e44c - 0x19e450
void entry_0019e44c_0x19e44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e44c_0x19e44c");
#endif

    ctx->pc = 0x19e44cu;

    // 0x19e44c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x19e44cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x19e450u;
}
