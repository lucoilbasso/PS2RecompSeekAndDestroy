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

// Function: entry_0016bc98
// Address: 0x16bc98 - 0x16bca0
void entry_0016bc98_0x16bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bc98_0x16bc98");
#endif

    ctx->pc = 0x16bc98u;

    // 0x16bc98: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x16bc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x16bc9c: 0x0  nop
    ctx->pc = 0x16bc9cu;
    // NOP
    ctx->pc = 0x16bca0u;
}
