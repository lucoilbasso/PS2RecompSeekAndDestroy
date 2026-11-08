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

// Function: entry_001319d4
// Address: 0x1319d4 - 0x131a10
void entry_001319d4_0x1319d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001319d4_0x1319d4");
#endif

    ctx->pc = 0x1319d4u;

    // 0x1319d4: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x1319d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x1319d8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1319d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1319dc: 0x2463a150  addiu       $v1, $v1, -0x5EB0
    ctx->pc = 0x1319dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943056));
    // 0x1319e0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1319e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1319e4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1319e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1319e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1319e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1319ec: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1319ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1319f0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1319f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1319f4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1319f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1319f8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1319f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1319fc: 0xae05007c  sw          $a1, 0x7C($s0)
    ctx->pc = 0x1319fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 5));
    // 0x131a00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131A00u;
    {
        const bool branch_taken_0x131a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x131A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A00u;
        // 0x131a04: 0xae040078  sw          $a0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a00) {
            ctx->pc = 0x131A10u;
            return;
        }
    }
    ctx->pc = 0x131A08u;
    // 0x131a08: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x131A08u;
    {
        const bool branch_taken_0x131a08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x131A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A08u;
        // 0x131a0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a08) {
            ctx->pc = 0x131A34u;
            return;
        }
    }
    ctx->pc = 0x131A10u;
}
