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

// Function: entry_001501b0
// Address: 0x1501b0 - 0x1501e4
void entry_001501b0_0x1501b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001501b0_0x1501b0");
#endif

    ctx->pc = 0x1501b0u;

    // 0x1501b0: 0x30428800  andi        $v0, $v0, 0x8800
    ctx->pc = 0x1501b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)34816);
    // 0x1501b4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1501B4u;
    {
        const bool branch_taken_0x1501b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1501B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501B4u;
        // 0x1501b8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1501b4) {
            ctx->pc = 0x1501E4u;
            return;
        }
    }
    ctx->pc = 0x1501BCu;
    // 0x1501bc: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x1501bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x1501c0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1501c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1501c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1501C4u;
    {
        const bool branch_taken_0x1501c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1501c4) {
            ctx->pc = 0x1501E4u;
            return;
        }
    }
    ctx->pc = 0x1501CCu;
    // 0x1501cc: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1501CCu;
    {
        const bool branch_taken_0x1501cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1501D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501CCu;
        // 0x1501d0: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1501cc) {
            ctx->pc = 0x1501E4u;
            return;
        }
    }
    ctx->pc = 0x1501D4u;
    // 0x1501d4: 0x8e020844  lw          $v0, 0x844($s0)
    ctx->pc = 0x1501d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2116)));
    // 0x1501d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1501d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1501dc: 0xae020844  sw          $v0, 0x844($s0)
    ctx->pc = 0x1501dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
    // 0x1501e0: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x1501e0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1501e4u;
}
