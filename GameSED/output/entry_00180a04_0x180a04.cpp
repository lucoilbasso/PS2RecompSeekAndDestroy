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

// Function: entry_00180a04
// Address: 0x180a04 - 0x180a08
void entry_00180a04_0x180a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180a04_0x180a04");
#endif

    ctx->pc = 0x180a04u;

    // 0x180a04: 0xaf22000c  sw          $v0, 0xC($t9)
    ctx->pc = 0x180a04u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x180a08u;
}
