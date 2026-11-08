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

// Function: entry_001224d0
// Address: 0x1224d0 - 0x122500
void entry_001224d0_0x1224d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001224d0_0x1224d0");
#endif

    ctx->pc = 0x1224d0u;

    // 0x1224d0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1224d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1224d4: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1224D4u;
    {
        const bool branch_taken_0x1224d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1224D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224D4u;
        // 0x1224d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224d4) {
            ctx->pc = 0x12253Cu;
            return;
        }
    }
    ctx->pc = 0x1224DCu;
    // 0x1224dc: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1224dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x1224e0: 0x8ec2015c  lw          $v0, 0x15C($s6)
    ctx->pc = 0x1224e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 348)));
    // 0x1224e4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1224E4u;
    {
        const bool branch_taken_0x1224e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1224e4) {
            ctx->pc = 0x1224E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1224E4u;
            // 0x1224e8: 0xaed3015c  sw          $s3, 0x15C($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 348), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122500u;
            return;
        }
    }
    ctx->pc = 0x1224ECu;
    // 0x1224ec: 0x56a0000a  bnel        $s5, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1224ECu;
    {
        const bool branch_taken_0x1224ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1224ec) {
            ctx->pc = 0x1224F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1224ECu;
            // 0x1224f0: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122518u;
            return;
        }
    }
    ctx->pc = 0x1224F4u;
    // 0x1224f4: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1224f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x1224f8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x1224f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x1224fc: 0xaed3015c  sw          $s3, 0x15C($s6)
    ctx->pc = 0x1224fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 348), GPR_U32(ctx, 19));
    ctx->pc = 0x122500u;
}
