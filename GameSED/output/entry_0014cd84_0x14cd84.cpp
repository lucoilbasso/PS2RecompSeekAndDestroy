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

// Function: entry_0014cd84
// Address: 0x14cd84 - 0x14cd88
void entry_0014cd84_0x14cd84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cd84_0x14cd84");
#endif

    ctx->pc = 0x14cd84u;

    // 0x14cd84: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x14cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x14cd88u;
}
