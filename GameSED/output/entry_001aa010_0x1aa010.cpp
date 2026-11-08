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

// Function: entry_001aa010
// Address: 0x1aa010 - 0x1aa018
void entry_001aa010_0x1aa010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa010_0x1aa010");
#endif

    ctx->pc = 0x1aa010u;

    // 0x1aa010: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aa010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aa014: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x1aa014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    ctx->pc = 0x1aa018u;
}
