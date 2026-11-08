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

// Function: entry_0014a200
// Address: 0x14a200 - 0x14a20c
void entry_0014a200_0x14a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a200_0x14a200");
#endif

    ctx->pc = 0x14a200u;

    // 0x14a200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14a200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a204: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14a204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14a208: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14a208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x14a20cu;
}
