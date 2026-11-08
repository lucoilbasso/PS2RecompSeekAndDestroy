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

// Function: entry_001b952c
// Address: 0x1b952c - 0x1b9530
void entry_001b952c_0x1b952c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b952c_0x1b952c");
#endif

    ctx->pc = 0x1b952cu;

    // 0x1b952c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b952cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1b9530u;
}
