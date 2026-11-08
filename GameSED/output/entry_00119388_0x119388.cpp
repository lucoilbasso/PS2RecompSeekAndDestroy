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

// Function: entry_00119388
// Address: 0x119388 - 0x11938c
void entry_00119388_0x119388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119388_0x119388");
#endif

    ctx->pc = 0x119388u;

    // 0x119388: 0x3463869f  ori         $v1, $v1, 0x869F
    ctx->pc = 0x119388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34463);
    ctx->pc = 0x11938cu;
}
