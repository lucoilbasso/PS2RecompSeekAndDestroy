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

// Function: entry_00129e20
// Address: 0x129e20 - 0x129e28
void entry_00129e20_0x129e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129e20_0x129e20");
#endif

    ctx->pc = 0x129e20u;

    // 0x129e20: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x129e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x129e24: 0x0  nop
    ctx->pc = 0x129e24u;
    // NOP
    ctx->pc = 0x129e28u;
}
