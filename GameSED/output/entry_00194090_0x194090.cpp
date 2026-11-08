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

// Function: entry_00194090
// Address: 0x194090 - 0x1940ac
void entry_00194090_0x194090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194090_0x194090");
#endif

    ctx->pc = 0x194090u;

    // 0x194090: 0x1671023  subu        $v0, $t3, $a3
    ctx->pc = 0x194090u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x194094: 0x2224023  subu        $t0, $s1, $v0
    ctx->pc = 0x194094u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x194098: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x194098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19409c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x19409Cu;
    {
        const bool branch_taken_0x19409c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19409c) {
            ctx->pc = 0x1940A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19409Cu;
            // 0x1940a0: 0x9202000f  lbu         $v0, 0xF($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1940F8u;
            return;
        }
    }
    ctx->pc = 0x1940A4u;
    // 0x1940a4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1940A4u;
    {
        const bool branch_taken_0x1940a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1940a4) {
            ctx->pc = 0x1940A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1940A4u;
            // 0x1940a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1940ACu;
            return;
        }
    }
    ctx->pc = 0x1940ACu;
}
