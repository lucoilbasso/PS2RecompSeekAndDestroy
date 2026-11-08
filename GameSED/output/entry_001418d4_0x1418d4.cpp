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

// Function: entry_001418d4
// Address: 0x1418d4 - 0x1418d8
void entry_001418d4_0x1418d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001418d4_0x1418d4");
#endif

    ctx->pc = 0x1418d4u;

    // 0x1418d4: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x1418d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->pc = 0x1418d8u;
}
