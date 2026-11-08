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

// Function: entry_0019a1a4
// Address: 0x19a1a4 - 0x19a1a8
void entry_0019a1a4_0x19a1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a1a4_0x19a1a4");
#endif

    ctx->pc = 0x19a1a4u;

    // 0x19a1a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x19a1a8u;
}
