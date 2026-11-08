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

// Function: entry_00180290
// Address: 0x180290 - 0x180294
void entry_00180290_0x180290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180290_0x180290");
#endif

    ctx->pc = 0x180290u;

    // 0x180290: 0xa5c50002  sh          $a1, 0x2($t6)
    ctx->pc = 0x180290u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x180294u;
}
