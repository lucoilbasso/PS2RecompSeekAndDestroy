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

// Function: entry_001b2664
// Address: 0x1b2664 - 0x1b2668
void entry_001b2664_0x1b2664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2664_0x1b2664");
#endif

    ctx->pc = 0x1b2664u;

    // 0x1b2664: 0x2670b180  addiu       $s0, $s3, -0x4E80
    ctx->pc = 0x1b2664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294947200));
    ctx->pc = 0x1b2668u;
}
