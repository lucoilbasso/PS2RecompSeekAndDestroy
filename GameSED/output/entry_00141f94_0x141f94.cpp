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

// Function: entry_00141f94
// Address: 0x141f94 - 0x141f9c
void entry_00141f94_0x141f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141f94_0x141f94");
#endif

    ctx->pc = 0x141f94u;

    // 0x141f94: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x141f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x141f98: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x141f98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x141f9cu;
}
