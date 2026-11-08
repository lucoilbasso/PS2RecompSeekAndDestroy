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

// Function: entry_001261f8
// Address: 0x1261f8 - 0x1261fc
void entry_001261f8_0x1261f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001261f8_0x1261f8");
#endif

    ctx->pc = 0x1261f8u;

    // 0x1261f8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1261f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    ctx->pc = 0x1261fcu;
}
