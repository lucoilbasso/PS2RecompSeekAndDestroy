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

// Function: entry_0017b094
// Address: 0x17b094 - 0x17b098
void entry_0017b094_0x17b094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b094_0x17b094");
#endif

    ctx->pc = 0x17b094u;

    // 0x17b094: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x17b094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    ctx->pc = 0x17b098u;
}
