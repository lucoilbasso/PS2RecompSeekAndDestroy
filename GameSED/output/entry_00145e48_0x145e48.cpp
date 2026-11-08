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

// Function: entry_00145e48
// Address: 0x145e48 - 0x145e4c
void entry_00145e48_0x145e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145e48_0x145e48");
#endif

    ctx->pc = 0x145e48u;

    // 0x145e48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x145e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x145e4cu;
}
