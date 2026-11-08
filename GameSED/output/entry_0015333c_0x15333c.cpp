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

// Function: entry_0015333c
// Address: 0x15333c - 0x15337c
void entry_0015333c_0x15333c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015333c_0x15333c");
#endif

    ctx->pc = 0x15333cu;

    // 0x15333c: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x15333cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x153340: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x153340u;
    {
        const bool branch_taken_0x153340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153340u;
        // 0x153344: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153340) {
            ctx->pc = 0x1535E0u;
            return;
        }
    }
    ctx->pc = 0x153348u;
    // 0x153348: 0x30428800  andi        $v0, $v0, 0x8800
    ctx->pc = 0x153348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)34816);
    // 0x15334c: 0x544000a4  bnel        $v0, $zero, . + 4 + (0xA4 << 2)
    ctx->pc = 0x15334Cu;
    {
        const bool branch_taken_0x15334c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15334c) {
            ctx->pc = 0x153350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15334Cu;
            // 0x153350: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1535E0u;
            return;
        }
    }
    ctx->pc = 0x153354u;
    // 0x153354: 0x262506dc  addiu       $a1, $s1, 0x6DC
    ctx->pc = 0x153354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    // 0x153358: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x153358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x15335c: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x15335cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x153360: 0x8ca4003c  lw          $a0, 0x3C($a1)
    ctx->pc = 0x153360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x153364: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x153364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x153368: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x153368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x15336c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15336Cu;
    {
        const bool branch_taken_0x15336c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15336Cu;
        // 0x153370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15336c) {
            ctx->pc = 0x15337Cu;
            return;
        }
    }
    ctx->pc = 0x153374u;
    // 0x153374: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x153374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x153378: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x153378u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x15337cu;
}
