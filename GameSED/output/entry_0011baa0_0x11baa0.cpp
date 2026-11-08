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

// Function: entry_0011baa0
// Address: 0x11baa0 - 0x11baa4
void entry_0011baa0_0x11baa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011baa0_0x11baa0");
#endif

    ctx->pc = 0x11baa0u;

    // 0x11baa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11baa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->pc = 0x11baa4u;
}
