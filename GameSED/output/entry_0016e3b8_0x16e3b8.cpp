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

// Function: entry_0016e3b8
// Address: 0x16e3b8 - 0x16e3bc
void entry_0016e3b8_0x16e3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e3b8_0x16e3b8");
#endif

    ctx->pc = 0x16e3b8u;

    // 0x16e3b8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x16e3b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->pc = 0x16e3bcu;
}
