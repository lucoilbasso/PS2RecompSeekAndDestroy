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

// Function: entry_0015e850
// Address: 0x15e850 - 0x15e854
void entry_0015e850_0x15e850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e850_0x15e850");
#endif

    ctx->pc = 0x15e850u;

    // 0x15e850: 0x24900da0  addiu       $s0, $a0, 0xDA0
    ctx->pc = 0x15e850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3488));
    ctx->pc = 0x15e854u;
}
