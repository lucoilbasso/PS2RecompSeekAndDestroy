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

// Function: entry_001933a4
// Address: 0x1933a4 - 0x1933c8
void entry_001933a4_0x1933a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001933a4_0x1933a4");
#endif

    ctx->pc = 0x1933a4u;

    // 0x1933a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1933a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1933a8: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1933A8u;
    {
        const bool branch_taken_0x1933a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1933ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933A8u;
        // 0x1933ac: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1933a8) {
            ctx->pc = 0x1933C8u;
            return;
        }
    }
    ctx->pc = 0x1933B0u;
    // 0x1933b0: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x1933b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x1933b4: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x1933b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1933b8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x1933b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1933bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1933BCu;
    {
        const bool branch_taken_0x1933bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1933C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933BCu;
        // 0x1933c0: 0xfce20008  sd          $v0, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1933bc) {
            ctx->pc = 0x1933D8u;
            return;
        }
    }
    ctx->pc = 0x1933C4u;
    // 0x1933c4: 0x0  nop
    ctx->pc = 0x1933c4u;
    // NOP
    ctx->pc = 0x1933c8u;
}
