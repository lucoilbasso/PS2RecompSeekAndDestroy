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

// Function: entry_00148738
// Address: 0x148738 - 0x148740
void entry_00148738_0x148738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148738_0x148738");
#endif

    ctx->pc = 0x148738u;

    // 0x148738: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x148738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x14873c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x14873cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    ctx->pc = 0x148740u;
}
