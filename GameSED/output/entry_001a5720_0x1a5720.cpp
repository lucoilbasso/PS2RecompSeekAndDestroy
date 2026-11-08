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

// Function: entry_001a5720
// Address: 0x1a5720 - 0x1a5724
void entry_001a5720_0x1a5720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5720_0x1a5720");
#endif

    ctx->pc = 0x1a5720u;

    // 0x1a5720: 0xa4a0001a  sh          $zero, 0x1A($a1)
    ctx->pc = 0x1a5720u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 26), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1a5724u;
}
