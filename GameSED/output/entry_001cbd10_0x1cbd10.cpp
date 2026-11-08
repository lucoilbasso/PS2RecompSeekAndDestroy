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

// Function: entry_001cbd10
// Address: 0x1cbd10 - 0x1cbd18
void entry_001cbd10_0x1cbd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbd10_0x1cbd10");
#endif

    ctx->pc = 0x1cbd10u;

    // 0x1cbd10: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1cbd10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1cbd14: 0x24420c18  addiu       $v0, $v0, 0xC18
    ctx->pc = 0x1cbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3096));
    ctx->pc = 0x1cbd18u;
}
