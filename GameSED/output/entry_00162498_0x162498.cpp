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

// Function: entry_00162498
// Address: 0x162498 - 0x1624b4
void entry_00162498_0x162498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162498_0x162498");
#endif

    ctx->pc = 0x162498u;

    // 0x162498: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x162498u;
    {
        const bool branch_taken_0x162498 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x16249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162498u;
        // 0x16249c: 0x2644ffc0  addiu       $a0, $s2, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162498) {
            ctx->pc = 0x1624B4u;
            return;
        }
    }
    ctx->pc = 0x1624A0u;
    // 0x1624a0: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1624a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1624a4: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1624a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1624a8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1624a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1624ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1624acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1624b0: 0x2464ffc0  addiu       $a0, $v1, -0x40
    ctx->pc = 0x1624b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    ctx->pc = 0x1624b4u;
}
