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

// Function: entry_001535e0
// Address: 0x1535e0 - 0x15361c
void entry_001535e0_0x1535e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001535e0_0x1535e0");
#endif

    ctx->pc = 0x1535e0u;

    // 0x1535e0: 0x30428800  andi        $v0, $v0, 0x8800
    ctx->pc = 0x1535e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)34816);
    // 0x1535e4: 0x5440007c  bnel        $v0, $zero, . + 4 + (0x7C << 2)
    ctx->pc = 0x1535E4u;
    {
        const bool branch_taken_0x1535e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1535e4) {
            ctx->pc = 0x1535E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1535E4u;
            // 0x1535e8: 0x2625079c  addiu       $a1, $s1, 0x79C (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1948));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1537D8u;
            return;
        }
    }
    ctx->pc = 0x1535ECu;
    // 0x1535ec: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x1535ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x1535f0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1535F0u;
    {
        const bool branch_taken_0x1535f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535F0u;
        // 0x1535f4: 0x2626071c  addiu       $a2, $s1, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535f0) {
            ctx->pc = 0x1536E4u;
            return;
        }
    }
    ctx->pc = 0x1535F8u;
    // 0x1535f8: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1535f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1535fc: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x1535fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x153600: 0x8cc4003c  lw          $a0, 0x3C($a2)
    ctx->pc = 0x153600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x153604: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x153604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x153608: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x153608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x15360c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15360Cu;
    {
        const bool branch_taken_0x15360c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15360Cu;
        // 0x153610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15360c) {
            ctx->pc = 0x15361Cu;
            return;
        }
    }
    ctx->pc = 0x153614u;
    // 0x153614: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x153614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x153618: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x153618u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x15361cu;
}
