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

// Function: entry_001d761c
// Address: 0x1d761c - 0x1d7638
void entry_001d761c_0x1d761c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d761c_0x1d761c");
#endif

    ctx->pc = 0x1d761cu;

    // 0x1d761c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d761cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1d7620: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1d7620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1d7624: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1d7624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1d7628: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1d7628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1d762c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d762cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d7630: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1D7630u;
    {
        const bool branch_taken_0x1d7630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7630u;
        // 0x1d7634: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7630) {
            ctx->pc = 0x1D75C0u;
            return;
        }
    }
    ctx->pc = 0x1D7638u;
}
