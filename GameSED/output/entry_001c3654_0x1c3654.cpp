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

// Function: entry_001c3654
// Address: 0x1c3654 - 0x1c3658
void entry_001c3654_0x1c3654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3654_0x1c3654");
#endif

    ctx->pc = 0x1c3654u;

    // 0x1c3654: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1c3654u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->pc = 0x1c3658u;
}
