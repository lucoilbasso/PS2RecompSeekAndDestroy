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

// Function: entry_0010b948
// Address: 0x10b948 - 0x10b950
void entry_0010b948_0x10b948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b948_0x10b948");
#endif

    ctx->pc = 0x10b948u;

    // 0x10b948: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x10b948u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b94c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10b94cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    ctx->pc = 0x10b950u;
}
