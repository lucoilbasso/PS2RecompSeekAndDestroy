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

// Function: entry_001e05d8
// Address: 0x1e05d8 - 0x1e05dc
void entry_001e05d8_0x1e05d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e05d8_0x1e05d8");
#endif

    ctx->pc = 0x1e05d8u;

    // 0x1e05d8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1e05d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1e05dcu;
}
