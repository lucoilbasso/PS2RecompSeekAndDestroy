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

// Function: entry_0012c234
// Address: 0x12c234 - 0x12c23c
void entry_0012c234_0x12c234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c234_0x12c234");
#endif

    ctx->pc = 0x12c234u;

    // 0x12c234: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12c234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12c238: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12c238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x12c23cu;
}
