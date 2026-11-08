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

// Function: entry_001ba86c
// Address: 0x1ba86c - 0x1ba870
void entry_001ba86c_0x1ba86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba86c_0x1ba86c");
#endif

    ctx->pc = 0x1ba86cu;

    // 0x1ba86c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ba86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1ba870u;
}
