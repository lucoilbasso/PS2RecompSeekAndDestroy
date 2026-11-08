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

// Function: entry_001a0b2c
// Address: 0x1a0b2c - 0x1a0b34
void entry_001a0b2c_0x1a0b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0b2c_0x1a0b2c");
#endif

    ctx->pc = 0x1a0b2cu;

    // 0x1a0b2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0b2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0b30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    ctx->pc = 0x1a0b34u;
}
