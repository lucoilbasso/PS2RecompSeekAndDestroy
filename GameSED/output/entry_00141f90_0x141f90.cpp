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

// Function: entry_00141f90
// Address: 0x141f90 - 0x141f94
void entry_00141f90_0x141f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141f90_0x141f90");
#endif

    ctx->pc = 0x141f90u;

    // 0x141f90: 0xacb00134  sw          $s0, 0x134($a1)
    ctx->pc = 0x141f90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 16));
    ctx->pc = 0x141f94u;
}
