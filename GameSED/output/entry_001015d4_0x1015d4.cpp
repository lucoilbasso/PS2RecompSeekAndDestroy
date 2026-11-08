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

// Function: entry_001015d4
// Address: 0x1015d4 - 0x1015d8
void entry_001015d4_0x1015d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001015d4_0x1015d4");
#endif

    ctx->pc = 0x1015d4u;

    // 0x1015d4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1015d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x1015d8u;
}
