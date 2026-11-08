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

// Function: entry_001a5024
// Address: 0x1a5024 - 0x1a502c
void entry_001a5024_0x1a5024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5024_0x1a5024");
#endif

    ctx->pc = 0x1a5024u;

    // 0x1a5024: 0x24464f38  addiu       $a2, $v0, 0x4F38
    ctx->pc = 0x1a5024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20280));
    // 0x1a5028: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a5028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1a502cu;
}
