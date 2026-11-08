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

// Function: entry_001a0008
// Address: 0x1a0008 - 0x1a000c
void entry_001a0008_0x1a0008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0008_0x1a0008");
#endif

    ctx->pc = 0x1a0008u;

    // 0x1a0008: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1a0008u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x1a000cu;
}
