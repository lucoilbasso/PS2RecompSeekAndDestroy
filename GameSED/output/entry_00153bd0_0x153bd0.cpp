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

// Function: entry_00153bd0
// Address: 0x153bd0 - 0x153bd8
void entry_00153bd0_0x153bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153bd0_0x153bd0");
#endif

    ctx->pc = 0x153bd0u;

    // 0x153bd0: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x153bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x153bd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x153bd8u;
}
