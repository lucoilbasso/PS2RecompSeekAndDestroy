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

// Function: entry_00136968
// Address: 0x136968 - 0x13696c
void entry_00136968_0x136968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136968_0x136968");
#endif

    ctx->pc = 0x136968u;

    // 0x136968: 0x2610a430  addiu       $s0, $s0, -0x5BD0
    ctx->pc = 0x136968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943792));
    ctx->pc = 0x13696cu;
}
