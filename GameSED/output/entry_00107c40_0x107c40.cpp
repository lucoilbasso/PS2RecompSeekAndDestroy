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

// Function: entry_00107c40
// Address: 0x107c40 - 0x107c44
void entry_00107c40_0x107c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107c40_0x107c40");
#endif

    ctx->pc = 0x107c40u;

    // 0x107c40: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x107c40u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    ctx->pc = 0x107c44u;
}
