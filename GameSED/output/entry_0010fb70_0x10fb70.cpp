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

// Function: entry_0010fb70
// Address: 0x10fb70 - 0x10fb7c
void entry_0010fb70_0x10fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fb70_0x10fb70");
#endif

    ctx->pc = 0x10fb70u;

    // 0x10fb70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fb74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fb74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fb78: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->pc = 0x10fb7cu;
}
