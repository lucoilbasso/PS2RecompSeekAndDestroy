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

// Function: entry_001522e4
// Address: 0x1522e4 - 0x1522e8
void entry_001522e4_0x1522e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001522e4_0x1522e4");
#endif

    ctx->pc = 0x1522e4u;

    // 0x1522e4: 0x24e200b0  addiu       $v0, $a3, 0xB0
    ctx->pc = 0x1522e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
    ctx->pc = 0x1522e8u;
}
