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

// Function: entry_0019edbc
// Address: 0x19edbc - 0x19edc8
void entry_0019edbc_0x19edbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019edbc_0x19edbc");
#endif

    ctx->pc = 0x19edbcu;

    // 0x19edbc: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x19edbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19edc0: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19edc0u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19edc4: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19edc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    ctx->pc = 0x19edc8u;
}
