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

// Function: entry_001539dc
// Address: 0x1539dc - 0x153a00
void entry_001539dc_0x1539dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001539dc_0x1539dc");
#endif

    ctx->pc = 0x1539dcu;

    // 0x1539dc: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x1539dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x1539e0: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x1539e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
    // 0x1539e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1539e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1539e8: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1539E8u;
    {
        const bool branch_taken_0x1539e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1539e8) {
            ctx->pc = 0x1539ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1539E8u;
            // 0x1539ec: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153A64u;
            return;
        }
    }
    ctx->pc = 0x1539F0u;
    // 0x1539f0: 0x8e220688  lw          $v0, 0x688($s1)
    ctx->pc = 0x1539f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1672)));
    // 0x1539f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1539F4u;
    {
        const bool branch_taken_0x1539f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1539F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539F4u;
        // 0x1539f8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1539f4) {
            ctx->pc = 0x153A00u;
            return;
        }
    }
    ctx->pc = 0x1539FCu;
    // 0x1539fc: 0xae220688  sw          $v0, 0x688($s1)
    ctx->pc = 0x1539fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1672), GPR_U32(ctx, 2));
    ctx->pc = 0x153a00u;
}
