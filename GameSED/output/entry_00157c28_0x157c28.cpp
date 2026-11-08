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

// Function: entry_00157c28
// Address: 0x157c28 - 0x157c50
void entry_00157c28_0x157c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157c28_0x157c28");
#endif

    ctx->pc = 0x157c28u;

    // 0x157c28: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x157c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x157c2c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x157C2Cu;
    {
        const bool branch_taken_0x157c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C2Cu;
        // 0x157c30: 0x266403b0  addiu       $a0, $s3, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c2c) {
            ctx->pc = 0x157CB8u;
            return;
        }
    }
    ctx->pc = 0x157C34u;
    // 0x157c34: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x157c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x157c38: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x157C38u;
    {
        const bool branch_taken_0x157c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157c38) {
            ctx->pc = 0x157C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157C38u;
            // 0x157c3c: 0x8fd40000  lw          $s4, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157C50u;
            return;
        }
    }
    ctx->pc = 0x157C40u;
    // 0x157c40: 0x266403b0  addiu       $a0, $s3, 0x3B0
    ctx->pc = 0x157c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
    // 0x157c44: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x157C44u;
    {
        const bool branch_taken_0x157c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C44u;
        // 0x157c48: 0x26430140  addiu       $v1, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c44) {
            ctx->pc = 0x157CBCu;
            return;
        }
    }
    ctx->pc = 0x157C4Cu;
    // 0x157c4c: 0x0  nop
    ctx->pc = 0x157c4cu;
    // NOP
    ctx->pc = 0x157c50u;
}
