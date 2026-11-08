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

// Function: entry_001c443c
// Address: 0x1c443c - 0x1c4448
void entry_001c443c_0x1c443c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c443c_0x1c443c");
#endif

    ctx->pc = 0x1c443cu;

    // 0x1c443c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c443cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4440: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c4440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c4444: 0x0  nop
    ctx->pc = 0x1c4444u;
    // NOP
    ctx->pc = 0x1c4448u;
}
