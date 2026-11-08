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

// Function: entry_00180d74
// Address: 0x180d74 - 0x180d7c
void entry_00180d74_0x180d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180d74_0x180d74");
#endif

    ctx->pc = 0x180d74u;

    // 0x180d74: 0xc5800014  lwc1        $f0, 0x14($t4)
    ctx->pc = 0x180d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180d78: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x180d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->pc = 0x180d7cu;
}
