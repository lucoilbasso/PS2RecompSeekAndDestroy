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

// Function: entry_001990e4
// Address: 0x1990e4 - 0x1990e8
void entry_001990e4_0x1990e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001990e4_0x1990e4");
#endif

    ctx->pc = 0x1990e4u;

    // 0x1990e4: 0x24e60050  addiu       $a2, $a3, 0x50
    ctx->pc = 0x1990e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    ctx->pc = 0x1990e8u;
}
