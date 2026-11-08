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

// Function: entry_00180e1c
// Address: 0x180e1c - 0x180e24
void entry_00180e1c_0x180e1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180e1c_0x180e1c");
#endif

    ctx->pc = 0x180e1cu;

    // 0x180e1c: 0xc5800014  lwc1        $f0, 0x14($t4)
    ctx->pc = 0x180e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180e20: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x180e20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->pc = 0x180e24u;
}
