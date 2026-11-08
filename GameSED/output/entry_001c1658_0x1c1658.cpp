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

// Function: entry_001c1658
// Address: 0x1c1658 - 0x1c1670
void entry_001c1658_0x1c1658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1658_0x1c1658");
#endif

    ctx->pc = 0x1c1658u;

    // 0x1c1658: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x1c1658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1c165c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1660: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1c1660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c1664: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1c1664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1c1668: 0xac4406cc  sw          $a0, 0x6CC($v0)
    ctx->pc = 0x1c1668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 4));
    // 0x1c166c: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x1c166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    ctx->pc = 0x1c1670u;
}
