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

// Function: entry_001c1c30
// Address: 0x1c1c30 - 0x1c1c50
void entry_001c1c30_0x1c1c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1c30_0x1c1c30");
#endif

    ctx->pc = 0x1c1c30u;

    // 0x1c1c30: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1c1c30u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c1c34: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1C34u;
    {
        const bool branch_taken_0x1c1c34 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C34u;
        // 0x1c1c38: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c34) {
            ctx->pc = 0x1C1C50u;
            return;
        }
    }
    ctx->pc = 0x1C1C3Cu;
    // 0x1c1c3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c1c40: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1c1c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1c1c44: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C1C44u;
    {
        const bool branch_taken_0x1c1c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C44u;
        // 0x1c1c48: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c44) {
            ctx->pc = 0x1C1C18u;
            return;
        }
    }
    ctx->pc = 0x1C1C4Cu;
    // 0x1c1c4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c1c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1c1c50u;
}
