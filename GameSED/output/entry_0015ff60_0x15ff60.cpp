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

// Function: entry_0015ff60
// Address: 0x15ff60 - 0x15ff6c
void entry_0015ff60_0x15ff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ff60_0x15ff60");
#endif

    ctx->pc = 0x15ff60u;

    // 0x15ff60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ff60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15ff64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ff68: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x15ff68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x15ff6cu;
}
