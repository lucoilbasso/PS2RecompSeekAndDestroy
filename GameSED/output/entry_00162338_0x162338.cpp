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

// Function: entry_00162338
// Address: 0x162338 - 0x162354
void entry_00162338_0x162338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162338_0x162338");
#endif

    ctx->pc = 0x162338u;

    // 0x162338: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x162338u;
    {
        const bool branch_taken_0x162338 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x16233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162338u;
        // 0x16233c: 0x2644ffc0  addiu       $a0, $s2, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162338) {
            ctx->pc = 0x162354u;
            return;
        }
    }
    ctx->pc = 0x162340u;
    // 0x162340: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x162340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x162344: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x162344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x162348: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x162348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x16234c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x162350: 0x2464ffc0  addiu       $a0, $v1, -0x40
    ctx->pc = 0x162350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    ctx->pc = 0x162354u;
}
