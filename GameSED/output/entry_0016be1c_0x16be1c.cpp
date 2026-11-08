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

// Function: entry_0016be1c
// Address: 0x16be1c - 0x16be20
void entry_0016be1c_0x16be1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016be1c_0x16be1c");
#endif

    ctx->pc = 0x16be1cu;

    // 0x16be1c: 0x2442b420  addiu       $v0, $v0, -0x4BE0
    ctx->pc = 0x16be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947872));
    ctx->pc = 0x16be20u;
}
