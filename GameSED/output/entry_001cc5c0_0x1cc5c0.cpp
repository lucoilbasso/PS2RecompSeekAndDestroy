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

// Function: entry_001cc5c0
// Address: 0x1cc5c0 - 0x1cc608
void entry_001cc5c0_0x1cc5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc5c0_0x1cc5c0");
#endif

    ctx->pc = 0x1cc5c0u;

    // 0x1cc5c0: 0x1560c0  sll         $t4, $s5, 3
    ctx->pc = 0x1cc5c0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x1cc5c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cc5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1cc5c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc5c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc5cc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cc5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cc5d0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1cc5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1cc5d4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cc5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1cc5d8: 0x1841821  addu        $v1, $t4, $a0
    ctx->pc = 0x1cc5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1cc5dc: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1cc5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1cc5e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cc5e4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cc5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cc5e8: 0x21742  srl         $v0, $v0, 29
    ctx->pc = 0x1cc5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
    // 0x1cc5ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cc5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cc5f0: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC5F0u;
    {
        const bool branch_taken_0x1cc5f0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5F0u;
        // 0x1cc5f4: 0x318c3  sra         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5f0) {
            ctx->pc = 0x1CC608u;
            return;
        }
    }
    ctx->pc = 0x1CC5F8u;
    // 0x1cc5f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC5F8u;
    {
        const bool branch_taken_0x1cc5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5F8u;
        // 0x1cc5fc: 0x3c34021  addu        $t0, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5f8) {
            ctx->pc = 0x1CC608u;
            return;
        }
    }
    ctx->pc = 0x1CC600u;
    // 0x1cc600: 0x3c31021  addu        $v0, $fp, $v1
    ctx->pc = 0x1cc600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1cc604: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1cc604u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1cc608u;
}
