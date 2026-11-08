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

// Function: entry_0014a408
// Address: 0x14a408 - 0x14a470
void entry_0014a408_0x14a408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a408_0x14a408");
#endif

    ctx->pc = 0x14a408u;

    // 0x14a408: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14a408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a40c: 0x731024  and         $v0, $v1, $s3
    ctx->pc = 0x14a40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x14a410: 0x14530036  bne         $v0, $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x14A410u;
    {
        const bool branch_taken_0x14a410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x14A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A410u;
        // 0x14a414: 0x8ec243d0  lw          $v0, 0x43D0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 17360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a410) {
            ctx->pc = 0x14A4ECu;
            return;
        }
    }
    ctx->pc = 0x14A418u;
    // 0x14a418: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x14a418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x14a41c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14A41Cu;
    {
        const bool branch_taken_0x14a41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A41Cu;
        // 0x14a420: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a41c) {
            ctx->pc = 0x14A470u;
            return;
        }
    }
    ctx->pc = 0x14A424u;
    // 0x14a424: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14a424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14a428: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14a428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a42c: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x14A42Cu;
    {
        const bool branch_taken_0x14a42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A42Cu;
        // 0x14a430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a42c) {
            ctx->pc = 0x14A4D4u;
            return;
        }
    }
    ctx->pc = 0x14A434u;
    // 0x14a434: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x14a434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x14a438: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a43c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x14A43Cu;
    {
        const bool branch_taken_0x14a43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a43c) {
            ctx->pc = 0x14A4D4u;
            return;
        }
    }
    ctx->pc = 0x14A444u;
    // 0x14a444: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14a444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14a448: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x14a448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x14a44c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14a44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a450: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14A450u;
    {
        const bool branch_taken_0x14a450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a450) {
            ctx->pc = 0x14A4D4u;
            return;
        }
    }
    ctx->pc = 0x14A458u;
    // 0x14a458: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x14a458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x14a45c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a460: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x14A460u;
    {
        const bool branch_taken_0x14a460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a460) {
            ctx->pc = 0x14A464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A460u;
            // 0x14a464: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A4D4u;
            return;
        }
    }
    ctx->pc = 0x14A468u;
    // 0x14a468: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x14A468u;
    {
        const bool branch_taken_0x14a468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a468) {
            ctx->pc = 0x14A4D4u;
            return;
        }
    }
    ctx->pc = 0x14A470u;
}
