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

// Function: entry_00114d08
// Address: 0x114d08 - 0x114d10
void entry_00114d08_0x114d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114d08_0x114d08");
#endif

    ctx->pc = 0x114d08u;

    // 0x114d08: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x114d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x114d0c: 0x26050284  addiu       $a1, $s0, 0x284
    ctx->pc = 0x114d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    ctx->pc = 0x114d10u;
}
