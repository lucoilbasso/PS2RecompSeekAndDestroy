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

// Function: entry_00138b84
// Address: 0x138b84 - 0x138b88
void entry_00138b84_0x138b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138b84_0x138b84");
#endif

    ctx->pc = 0x138b84u;

    // 0x138b84: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x138b84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    ctx->pc = 0x138b88u;
}
