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

// Function: entry_00169168
// Address: 0x169168 - 0x169180
void entry_00169168_0x169168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169168_0x169168");
#endif

    ctx->pc = 0x169168u;

    // 0x169168: 0x10620051  beq         $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x169168u;
    {
        const bool branch_taken_0x169168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169168u;
        // 0x16916c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169168) {
            ctx->pc = 0x1692B0u;
            return;
        }
    }
    ctx->pc = 0x169170u;
    // 0x169170: 0x5062008f  beql        $v1, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x169170u;
    {
        const bool branch_taken_0x169170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x169170) {
            ctx->pc = 0x169174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169170u;
            // 0x169174: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1693B0u;
            return;
        }
    }
    ctx->pc = 0x169178u;
    // 0x169178: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x169178u;
    {
        const bool branch_taken_0x169178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169178u;
        // 0x16917c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169178) {
            ctx->pc = 0x169444u;
            return;
        }
    }
    ctx->pc = 0x169180u;
}
