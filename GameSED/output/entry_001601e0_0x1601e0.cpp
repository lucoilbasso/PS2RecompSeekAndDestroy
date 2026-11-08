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

// Function: entry_001601e0
// Address: 0x1601e0 - 0x160208
void entry_001601e0_0x1601e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001601e0_0x1601e0");
#endif

    ctx->pc = 0x1601e0u;

    // 0x1601e0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1601e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1601e4: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x1601e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1601e8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1601E8u;
    {
        const bool branch_taken_0x1601e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1601e8) {
            ctx->pc = 0x1601ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1601E8u;
            // 0x1601ec: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160208u;
            return;
        }
    }
    ctx->pc = 0x1601F0u;
    // 0x1601f0: 0x26820154  addiu       $v0, $s4, 0x154
    ctx->pc = 0x1601f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 340));
    // 0x1601f4: 0x112043  sra         $a0, $s1, 1
    ctx->pc = 0x1601f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
    // 0x1601f8: 0x111883  sra         $v1, $s1, 2
    ctx->pc = 0x1601f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 2));
    // 0x1601fc: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x1601fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x160200: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x160200u;
    {
        const bool branch_taken_0x160200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160200u;
        // 0x160204: 0xa0430002  sb          $v1, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160200) {
            ctx->pc = 0x160248u;
            return;
        }
    }
    ctx->pc = 0x160208u;
}
