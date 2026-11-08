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

// Function: entry_0011a6d4
// Address: 0x11a6d4 - 0x11a6d8
void entry_0011a6d4_0x11a6d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a6d4_0x11a6d4");
#endif

    ctx->pc = 0x11a6d4u;

    // 0x11a6d4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x11a6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    ctx->pc = 0x11a6d8u;
}
