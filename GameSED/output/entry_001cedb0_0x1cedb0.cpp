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

// Function: entry_001cedb0
// Address: 0x1cedb0 - 0x1cedb8
void entry_001cedb0_0x1cedb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cedb0_0x1cedb0");
#endif

    ctx->pc = 0x1cedb0u;

    // 0x1cedb0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1cedb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1cedb4: 0x24420da0  addiu       $v0, $v0, 0xDA0
    ctx->pc = 0x1cedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
    ctx->pc = 0x1cedb8u;
}
