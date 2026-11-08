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

// Function: entry_0014c4cc
// Address: 0x14c4cc - 0x14c4f8
void entry_0014c4cc_0x14c4cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c4cc_0x14c4cc");
#endif

    ctx->pc = 0x14c4ccu;

    // 0x14c4cc: 0x8c433628  lw          $v1, 0x3628($v0)
    ctx->pc = 0x14c4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x14c4d0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14C4D0u;
    {
        const bool branch_taken_0x14c4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C4D0u;
        // 0x14c4d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c4d0) {
            ctx->pc = 0x14C4F8u;
            return;
        }
    }
    ctx->pc = 0x14C4D8u;
    // 0x14c4d8: 0x8e22024c  lw          $v0, 0x24C($s1)
    ctx->pc = 0x14c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x14c4dc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C4DCu;
    {
        const bool branch_taken_0x14c4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c4dc) {
            ctx->pc = 0x14C4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C4DCu;
            // 0x14c4e0: 0x8e30024c  lw          $s0, 0x24C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C4FCu;
            return;
        }
    }
    ctx->pc = 0x14C4E4u;
    // 0x14c4e4: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x14c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x14c4e8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x14c4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x14c4ec: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14C4ECu;
    {
        const bool branch_taken_0x14c4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C4ECu;
        // 0x14c4f0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c4ec) {
            ctx->pc = 0x14C570u;
            return;
        }
    }
    ctx->pc = 0x14C4F4u;
    // 0x14c4f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14c4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14c4f8u;
}
