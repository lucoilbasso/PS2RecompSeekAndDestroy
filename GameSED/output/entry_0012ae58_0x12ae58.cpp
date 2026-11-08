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

// Function: entry_0012ae58
// Address: 0x12ae58 - 0x12ae5c
void entry_0012ae58_0x12ae58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ae58_0x12ae58");
#endif

    ctx->pc = 0x12ae58u;

    // 0x12ae58: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x12ae58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    ctx->pc = 0x12ae5cu;
}
