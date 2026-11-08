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

// Function: entry_0014f654
// Address: 0x14f654 - 0x14f670
void entry_0014f654_0x14f654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f654_0x14f654");
#endif

    ctx->pc = 0x14f654u;

    // 0x14f654: 0x8e020c0c  lw          $v0, 0xC0C($s0)
    ctx->pc = 0x14f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3084)));
    // 0x14f658: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F658u;
    {
        const bool branch_taken_0x14f658 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F658u;
        // 0x14f65c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f658) {
            ctx->pc = 0x14F670u;
            return;
        }
    }
    ctx->pc = 0x14F660u;
    // 0x14f660: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x14f660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x14f664: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F664u;
    {
        const bool branch_taken_0x14f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F664u;
        // 0x14f668: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f664) {
            ctx->pc = 0x14F674u;
            return;
        }
    }
    ctx->pc = 0x14F66Cu;
    // 0x14f66c: 0x0  nop
    ctx->pc = 0x14f66cu;
    // NOP
    ctx->pc = 0x14f670u;
}
