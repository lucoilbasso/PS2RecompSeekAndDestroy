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

// Function: entry_00129504
// Address: 0x129504 - 0x129508
void entry_00129504_0x129504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129504_0x129504");
#endif

    ctx->pc = 0x129504u;

    // 0x129504: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x129504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x129508u;
}
