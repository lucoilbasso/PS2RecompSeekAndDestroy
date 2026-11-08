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

// Function: entry_0011ad60
// Address: 0x11ad60 - 0x11ad64
void entry_0011ad60_0x11ad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ad60_0x11ad60");
#endif

    ctx->pc = 0x11ad60u;

    // 0x11ad60: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x11ad60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->pc = 0x11ad64u;
}
