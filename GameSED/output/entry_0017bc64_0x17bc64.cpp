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

// Function: entry_0017bc64
// Address: 0x17bc64 - 0x17bc78
void entry_0017bc64_0x17bc64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bc64_0x17bc64");
#endif

    ctx->pc = 0x17bc64u;

    // 0x17bc64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x17bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x17bc68: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x17bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17bc6c: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x17bc6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17bc70: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x17bc70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x17bc74: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x17bc74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x17bc78u;
}
