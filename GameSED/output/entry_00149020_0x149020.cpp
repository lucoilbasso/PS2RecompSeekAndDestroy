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

// Function: entry_00149020
// Address: 0x149020 - 0x149024
void entry_00149020_0x149020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149020_0x149020");
#endif

    ctx->pc = 0x149020u;

    // 0x149020: 0x244226c0  addiu       $v0, $v0, 0x26C0
    ctx->pc = 0x149020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9920));
    ctx->pc = 0x149024u;
}
