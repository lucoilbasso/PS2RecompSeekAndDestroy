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

// Function: entry_001990f4
// Address: 0x1990f4 - 0x1990f8
void entry_001990f4_0x1990f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001990f4_0x1990f4");
#endif

    ctx->pc = 0x1990f4u;

    // 0x1990f4: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1990f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    ctx->pc = 0x1990f8u;
}
