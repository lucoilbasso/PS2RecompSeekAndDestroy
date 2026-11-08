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

// Function: entry_001b8c48
// Address: 0x1b8c48 - 0x1b8c50
void entry_001b8c48_0x1b8c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8c48_0x1b8c48");
#endif

    ctx->pc = 0x1b8c48u;

    // 0x1b8c48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b8c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8c4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b8c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b8c50u;
}
