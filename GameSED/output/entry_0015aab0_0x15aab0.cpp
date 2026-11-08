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

// Function: entry_0015aab0
// Address: 0x15aab0 - 0x15aac8
void entry_0015aab0_0x15aab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aab0_0x15aab0");
#endif

    ctx->pc = 0x15aab0u;

    // 0x15aab0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x15aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15aab4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15AAB4u;
    {
        const bool branch_taken_0x15aab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAB4u;
        // 0x15aab8: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aab4) {
            ctx->pc = 0x15AAC8u;
            return;
        }
    }
    ctx->pc = 0x15AABCu;
    // 0x15aabc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15aac0: 0x706210c8  pmaxw       $v0, $v1, $v0
    ctx->pc = 0x15aac0u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x15aac4: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x15aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    ctx->pc = 0x15aac8u;
}
