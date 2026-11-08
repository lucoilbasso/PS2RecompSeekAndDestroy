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

// Function: entry_001b329c
// Address: 0x1b329c - 0x1b32a4
void entry_001b329c_0x1b329c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b329c_0x1b329c");
#endif

    ctx->pc = 0x1b329cu;

    // 0x1b329c: 0x3230000f  andi        $s0, $s1, 0xF
    ctx->pc = 0x1b329cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x1b32a0: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x1b32a0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b32a4u;
}
