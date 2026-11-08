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

// Function: entry_001159c4
// Address: 0x1159c4 - 0x1159c8
void entry_001159c4_0x1159c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001159c4_0x1159c4");
#endif

    ctx->pc = 0x1159c4u;

    // 0x1159c4: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x1159c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x1159c8u;
}
