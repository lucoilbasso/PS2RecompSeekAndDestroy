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

// Function: entry_00100f58
// Address: 0x100f58 - 0x100f5c
void entry_00100f58_0x100f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100f58_0x100f58");
#endif

    ctx->pc = 0x100f58u;

    // 0x100f58: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x100f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    ctx->pc = 0x100f5cu;
}
