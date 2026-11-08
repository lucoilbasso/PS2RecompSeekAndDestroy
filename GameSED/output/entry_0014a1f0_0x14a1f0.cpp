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

// Function: entry_0014a1f0
// Address: 0x14a1f0 - 0x14a1f8
void entry_0014a1f0_0x14a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a1f0_0x14a1f0");
#endif

    ctx->pc = 0x14a1f0u;

    // 0x14a1f0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14a1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x14a1f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a1f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    ctx->pc = 0x14a1f8u;
}
