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

// Function: entry_001d0794
// Address: 0x1d0794 - 0x1d0798
void entry_001d0794_0x1d0794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0794_0x1d0794");
#endif

    ctx->pc = 0x1d0794u;

    // 0x1d0794: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x1d0794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    ctx->pc = 0x1d0798u;
}
