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

// Function: entry_0019f98c
// Address: 0x19f98c - 0x19f9ac
void entry_0019f98c_0x19f98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f98c_0x19f98c");
#endif

    ctx->pc = 0x19f98cu;

    // 0x19f98c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x19f98cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x19f990: 0x521ffe5  bgez        $t1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x19F990u;
    {
        const bool branch_taken_0x19f990 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x19F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F990u;
        // 0x19f994: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f990) {
            ctx->pc = 0x19F928u;
            return;
        }
    }
    ctx->pc = 0x19F998u;
    // 0x19f998: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x19f998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x19f99c: 0x2442e530  addiu       $v0, $v0, -0x1AD0
    ctx->pc = 0x19f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x19f9a0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x19f9a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19f9a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F9A4u;
    {
        const bool branch_taken_0x19f9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9A4u;
        // 0x19f9a8: 0xaf84915c  sw          $a0, -0x6EA4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9a4) {
            ctx->pc = 0x19F9B8u;
            return;
        }
    }
    ctx->pc = 0x19F9ACu;
}
