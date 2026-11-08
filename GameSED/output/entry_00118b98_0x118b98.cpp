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

// Function: entry_00118b98
// Address: 0x118b98 - 0x118b9c
void entry_00118b98_0x118b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118b98_0x118b98");
#endif

    ctx->pc = 0x118b98u;

    // 0x118b98: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x118b98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x118b9cu;
}
