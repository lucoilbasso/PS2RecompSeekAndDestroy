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

// Function: entry_0013fce4
// Address: 0x13fce4 - 0x13fce8
void entry_0013fce4_0x13fce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fce4_0x13fce4");
#endif

    ctx->pc = 0x13fce4u;

    // 0x13fce4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13fce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->pc = 0x13fce8u;
}
