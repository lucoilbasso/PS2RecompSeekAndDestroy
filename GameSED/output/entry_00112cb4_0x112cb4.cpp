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

// Function: entry_00112cb4
// Address: 0x112cb4 - 0x112cb8
void entry_00112cb4_0x112cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112cb4_0x112cb4");
#endif

    ctx->pc = 0x112cb4u;

    // 0x112cb4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x112cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x112cb8u;
}
