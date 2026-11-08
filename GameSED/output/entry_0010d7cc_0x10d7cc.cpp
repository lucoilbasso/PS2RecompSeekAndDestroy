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

// Function: entry_0010d7cc
// Address: 0x10d7cc - 0x10d7d0
void entry_0010d7cc_0x10d7cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d7cc_0x10d7cc");
#endif

    ctx->pc = 0x10d7ccu;

    // 0x10d7cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x10d7d0u;
}
