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

// Function: entry_00114788
// Address: 0x114788 - 0x11478c
void entry_00114788_0x114788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114788_0x114788");
#endif

    ctx->pc = 0x114788u;

    // 0x114788: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x114788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x11478cu;
}
