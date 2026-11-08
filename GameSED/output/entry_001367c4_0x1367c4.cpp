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

// Function: entry_001367c4
// Address: 0x1367c4 - 0x136808
void entry_001367c4_0x1367c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001367c4_0x1367c4");
#endif

    ctx->pc = 0x1367c4u;

    // 0x1367c4: 0x54400059  bnel        $v0, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x1367C4u;
    {
        const bool branch_taken_0x1367c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1367c4) {
            ctx->pc = 0x1367C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1367C4u;
            // 0x1367c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13692Cu;
            return;
        }
    }
    ctx->pc = 0x1367CCu;
    // 0x1367cc: 0x8e8200d8  lw          $v0, 0xD8($s4)
    ctx->pc = 0x1367ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x1367d0: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x1367d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1367d4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1367d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1367d8: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1367D8u;
    {
        const bool branch_taken_0x1367d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1367DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367D8u;
        // 0x1367dc: 0x8c750000  lw          $s5, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367d8) {
            ctx->pc = 0x136910u;
            return;
        }
    }
    ctx->pc = 0x1367E0u;
    // 0x1367e0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1367e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1367e4: 0x24030946  addiu       $v1, $zero, 0x946
    ctx->pc = 0x1367e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x1367e8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1367e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1367ec: 0x14430030  bne         $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1367ECu;
    {
        const bool branch_taken_0x1367ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1367F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367ECu;
        // 0x1367f0: 0x24040106  addiu       $a0, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367ec) {
            ctx->pc = 0x1368B0u;
            return;
        }
    }
    ctx->pc = 0x1367F4u;
    // 0x1367f4: 0x8eb301b0  lw          $s3, 0x1B0($s5)
    ctx->pc = 0x1367f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 432)));
    // 0x1367f8: 0x1260004b  beqz        $s3, . + 4 + (0x4B << 2)
    ctx->pc = 0x1367F8u;
    {
        const bool branch_taken_0x1367f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1367FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1367F8u;
        // 0x1367fc: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1367f8) {
            ctx->pc = 0x136928u;
            return;
        }
    }
    ctx->pc = 0x136800u;
    // 0x136800: 0x24560110  addiu       $s6, $v0, 0x110
    ctx->pc = 0x136800u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x136804: 0x24040106  addiu       $a0, $zero, 0x106
    ctx->pc = 0x136804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    ctx->pc = 0x136808u;
}
