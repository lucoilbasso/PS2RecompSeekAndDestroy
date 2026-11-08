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

// Function: entry_0019acd8
// Address: 0x19acd8 - 0x19ace0
void entry_0019acd8_0x19acd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019acd8_0x19acd8");
#endif

    ctx->pc = 0x19acd8u;

    // 0x19acd8: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x19acd8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19acdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19acdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x19ace0u;
}
