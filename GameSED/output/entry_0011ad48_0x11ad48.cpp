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

// Function: entry_0011ad48
// Address: 0x11ad48 - 0x11ad4c
void entry_0011ad48_0x11ad48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ad48_0x11ad48");
#endif

    ctx->pc = 0x11ad48u;

    // 0x11ad48: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x11ad48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    ctx->pc = 0x11ad4cu;
}
