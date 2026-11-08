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

// Function: entry_001dcfb0
// Address: 0x1dcfb0 - 0x1dcfb8
void entry_001dcfb0_0x1dcfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcfb0_0x1dcfb0");
#endif

    ctx->pc = 0x1dcfb0u;

    // 0x1dcfb0: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1dcfb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1dcfb4: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1dcfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    ctx->pc = 0x1dcfb8u;
}
