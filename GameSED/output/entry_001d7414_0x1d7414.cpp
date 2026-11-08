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

// Function: entry_001d7414
// Address: 0x1d7414 - 0x1d7430
void entry_001d7414_0x1d7414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7414_0x1d7414");
#endif

    ctx->pc = 0x1d7414u;

    // 0x1d7414: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d7414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1d7418: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1d7418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1d741c: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1d741cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1d7420: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1d7420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1d7424: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d7424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d7428: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1D7428u;
    {
        const bool branch_taken_0x1d7428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7428u;
        // 0x1d742c: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7428) {
            ctx->pc = 0x1D73B8u;
            return;
        }
    }
    ctx->pc = 0x1D7430u;
}
