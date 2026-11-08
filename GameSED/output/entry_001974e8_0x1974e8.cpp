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

// Function: entry_001974e8
// Address: 0x1974e8 - 0x197504
void entry_001974e8_0x1974e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001974e8_0x1974e8");
#endif

    ctx->pc = 0x1974e8u;

    // 0x1974e8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1974e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1974ec: 0x105e0005  beq         $v0, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x1974ECu;
    {
        const bool branch_taken_0x1974ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x1974F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974ECu;
        // 0x1974f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974ec) {
            ctx->pc = 0x197504u;
            return;
        }
    }
    ctx->pc = 0x1974F4u;
    // 0x1974f4: 0x94820154  lhu         $v0, 0x154($a0)
    ctx->pc = 0x1974f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1974f8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1974f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1974fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1974FCu;
    {
        const bool branch_taken_0x1974fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974FCu;
        // 0x197500: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974fc) {
            ctx->pc = 0x197530u;
            return;
        }
    }
    ctx->pc = 0x197504u;
}
