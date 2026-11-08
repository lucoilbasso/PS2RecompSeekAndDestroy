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

// Function: entry_0013b314
// Address: 0x13b314 - 0x13b31c
void entry_0013b314_0x13b314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b314_0x13b314");
#endif

    ctx->pc = 0x13b314u;

    // 0x13b314: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x13b314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x13b318: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x13b318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x13b31cu;
}
