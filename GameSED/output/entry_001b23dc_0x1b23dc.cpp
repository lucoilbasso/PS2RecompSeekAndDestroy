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

// Function: entry_001b23dc
// Address: 0x1b23dc - 0x1b2410
void entry_001b23dc_0x1b23dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b23dc_0x1b23dc");
#endif

    ctx->pc = 0x1b23dcu;

    // 0x1b23dc: 0x4810019  bgez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B23DCu;
    {
        const bool branch_taken_0x1b23dc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B23DCu;
        // 0x1b23e0: 0x3c070025  lui         $a3, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23dc) {
            ctx->pc = 0x1B2444u;
            return;
        }
    }
    ctx->pc = 0x1B23E4u;
    // 0x1b23e4: 0x41023  negu        $v0, $a0
    ctx->pc = 0x1b23e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1b23e8: 0x8ce3a980  lw          $v1, -0x5680($a3)
    ctx->pc = 0x1b23e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294945152)));
    // 0x1b23ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b23ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23f0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1b23f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1b23f4: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B23F4u;
    {
        const bool branch_taken_0x1b23f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B23F4u;
        // 0x1b23f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23f4) {
            ctx->pc = 0x1B2410u;
            return;
        }
    }
    ctx->pc = 0x1B23FCu;
    // 0x1b23fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2400: 0xace2a980  sw          $v0, -0x5680($a3)
    ctx->pc = 0x1b2400u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294945152), GPR_U32(ctx, 2));
    // 0x1b2404: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B2404u;
    {
        const bool branch_taken_0x1b2404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2404u;
        // 0x1b2408: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2404) {
            ctx->pc = 0x1B2450u;
            return;
        }
    }
    ctx->pc = 0x1B240Cu;
    // 0x1b240c: 0x0  nop
    ctx->pc = 0x1b240cu;
    // NOP
    ctx->pc = 0x1b2410u;
}
