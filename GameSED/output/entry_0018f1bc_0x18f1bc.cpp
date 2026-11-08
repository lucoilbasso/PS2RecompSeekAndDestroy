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

// Function: entry_0018f1bc
// Address: 0x18f1bc - 0x18f1c0
void entry_0018f1bc_0x18f1bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f1bc_0x18f1bc");
#endif

    ctx->pc = 0x18f1bcu;

    // 0x18f1bc: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x18f1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x18f1c0u;
}
