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

// Function: entry_001c8ee8
// Address: 0x1c8ee8 - 0x1c8eec
void entry_001c8ee8_0x1c8ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8ee8_0x1c8ee8");
#endif

    ctx->pc = 0x1c8ee8u;

    // 0x1c8ee8: 0xff2b0000  sd          $t3, 0x0($t9)
    ctx->pc = 0x1c8ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 11));
    ctx->pc = 0x1c8eecu;
}
