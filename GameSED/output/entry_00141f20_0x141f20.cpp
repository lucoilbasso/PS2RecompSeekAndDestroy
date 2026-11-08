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

// Function: entry_00141f20
// Address: 0x141f20 - 0x141f24
void entry_00141f20_0x141f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141f20_0x141f20");
#endif

    ctx->pc = 0x141f20u;

    // 0x141f20: 0xacb000f8  sw          $s0, 0xF8($a1)
    ctx->pc = 0x141f20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 16));
    ctx->pc = 0x141f24u;
}
