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

// Function: entry_0017de88
// Address: 0x17de88 - 0x17dea4
void entry_0017de88_0x17de88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017de88_0x17de88");
#endif

    ctx->pc = 0x17de88u;

    // 0x17de88: 0xadaf0038  sw          $t7, 0x38($t5)
    ctx->pc = 0x17de88u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 15));
    // 0x17de8c: 0xadb0003c  sw          $s0, 0x3C($t5)
    ctx->pc = 0x17de8cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 60), GPR_U32(ctx, 16));
    // 0x17de90: 0x2453e768  addiu       $s3, $v0, -0x1898
    ctx->pc = 0x17de90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961000));
    // 0x17de94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17de94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de98: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DE98u;
    {
        const bool branch_taken_0x17de98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE98u;
        // 0x17de9c: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de98) {
            ctx->pc = 0x17DEA4u;
            return;
        }
    }
    ctx->pc = 0x17DEA0u;
    // 0x17dea0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17dea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x17dea4u;
}
