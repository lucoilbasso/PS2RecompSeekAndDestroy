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

// Function: entry_0011ad58
// Address: 0x11ad58 - 0x11ad5c
void entry_0011ad58_0x11ad58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ad58_0x11ad58");
#endif

    ctx->pc = 0x11ad58u;

    // 0x11ad58: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x11ad58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    ctx->pc = 0x11ad5cu;
}
