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

// Function: entry_001282e0
// Address: 0x1282e0 - 0x128318
void entry_001282e0_0x1282e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001282e0_0x1282e0");
#endif

    ctx->pc = 0x1282e0u;

    // 0x1282e0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1282e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1282e4: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x1282e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x1282e8: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1282e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x1282ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1282ECu;
    {
        const bool branch_taken_0x1282ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1282F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282ECu;
        // 0x1282f0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282ec) {
            ctx->pc = 0x128318u;
            return;
        }
    }
    ctx->pc = 0x1282F4u;
    // 0x1282f4: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x1282f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x1282f8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1282f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1282fc: 0x2484d650  addiu       $a0, $a0, -0x29B0
    ctx->pc = 0x1282fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956624));
    // 0x128300: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x128300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x128304: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x128304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x128308: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x128308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x12830c: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x12830cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x128310: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x128310u;
    {
        const bool branch_taken_0x128310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128310u;
        // 0x128314: 0xac830098  sw          $v1, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128310) {
            ctx->pc = 0x12836Cu;
            return;
        }
    }
    ctx->pc = 0x128318u;
}
