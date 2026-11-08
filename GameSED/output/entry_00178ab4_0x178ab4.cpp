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

// Function: entry_00178ab4
// Address: 0x178ab4 - 0x178ab8
void entry_00178ab4_0x178ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178ab4_0x178ab4");
#endif

    ctx->pc = 0x178ab4u;

    // 0x178ab4: 0xa080ffbc  sb          $zero, -0x44($a0)
    ctx->pc = 0x178ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967228), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x178ab8u;
}
