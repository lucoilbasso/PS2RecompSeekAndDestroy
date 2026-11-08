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

// Function: entry_00195db0
// Address: 0x195db0 - 0x195db4
void entry_00195db0_0x195db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195db0_0x195db0");
#endif

    ctx->pc = 0x195db0u;

    // 0x195db0: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x195db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    ctx->pc = 0x195db4u;
}
