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

// Function: entry_0014a7cc
// Address: 0x14a7cc - 0x14a7d0
void entry_0014a7cc_0x14a7cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a7cc_0x14a7cc");
#endif

    ctx->pc = 0x14a7ccu;

    // 0x14a7cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x14a7d0u;
}
