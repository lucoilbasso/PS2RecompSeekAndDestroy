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

// Function: entry_0012baa0
// Address: 0x12baa0 - 0x12baac
void entry_0012baa0_0x12baa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012baa0_0x12baa0");
#endif

    ctx->pc = 0x12baa0u;

    // 0x12baa0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x12baa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x12baa4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x12baa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12baa8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x12baa8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x12baacu;
}
