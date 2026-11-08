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

// Function: entry_001005e0
// Address: 0x1005e0 - 0x1005e8
void entry_001005e0_0x1005e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001005e0_0x1005e0");
#endif

    ctx->pc = 0x1005e0u;

    // 0x1005e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1005e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1005e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1005e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    ctx->pc = 0x1005e8u;
}
