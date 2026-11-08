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

// Function: entry_001313b0
// Address: 0x1313b0 - 0x1313b4
void entry_001313b0_0x1313b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001313b0_0x1313b0");
#endif

    ctx->pc = 0x1313b0u;

    // 0x1313b0: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x1313b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1313b4u;
}
