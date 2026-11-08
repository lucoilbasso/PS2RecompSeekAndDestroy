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

// Function: entry_00176c2c
// Address: 0x176c2c - 0x176c30
void entry_00176c2c_0x176c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176c2c_0x176c2c");
#endif

    ctx->pc = 0x176c2cu;

    // 0x176c2c: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x176c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    ctx->pc = 0x176c30u;
}
