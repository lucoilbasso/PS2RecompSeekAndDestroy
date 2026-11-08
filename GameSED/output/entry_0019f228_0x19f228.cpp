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

// Function: entry_0019f228
// Address: 0x19f228 - 0x19f244
void entry_0019f228_0x19f228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f228_0x19f228");
#endif

    ctx->pc = 0x19f228u;

    // 0x19f228: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x19F228u;
    {
        const bool branch_taken_0x19f228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f228) {
            ctx->pc = 0x19F260u;
            return;
        }
    }
    ctx->pc = 0x19F230u;
    // 0x19f230: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x19f230u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19f234: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19f234u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f238: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x19f238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19f23c: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19f23cu;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19f240: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19f240u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    ctx->pc = 0x19f244u;
}
