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

// Function: entry_001a554c
// Address: 0x1a554c - 0x1a5554
void entry_001a554c_0x1a554c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a554c_0x1a554c");
#endif

    ctx->pc = 0x1a554cu;

    // 0x1a554c: 0x24463208  addiu       $a2, $v0, 0x3208
    ctx->pc = 0x1a554cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12808));
    // 0x1a5550: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x1a5550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x1a5554u;
}
