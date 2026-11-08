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

// Function: entry_0018d060
// Address: 0x18d060 - 0x18d064
void entry_0018d060_0x18d060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d060_0x18d060");
#endif

    ctx->pc = 0x18d060u;

    // 0x18d060: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x18d060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x18d064u;
}
