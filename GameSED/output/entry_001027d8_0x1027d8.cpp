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

// Function: entry_001027d8
// Address: 0x1027d8 - 0x102828
void entry_001027d8_0x1027d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001027d8_0x1027d8");
#endif

    ctx->pc = 0x1027d8u;

    // 0x1027d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1027d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1027dc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1027dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1027e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1027e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1027e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1027e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1027e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1027e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1027ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1027ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1027f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1027f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1027f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1027f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1027f8: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x1027f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x1027fc: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x1027fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x102800: 0x1482004b  bne         $a0, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x102800u;
    {
        const bool branch_taken_0x102800 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x102804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102800u;
        // 0x102804: 0x8c720044  lw          $s2, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102800) {
            ctx->pc = 0x102930u;
            return;
        }
    }
    ctx->pc = 0x102808u;
    // 0x102808: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x102808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x10280c: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x10280Cu;
    {
        const bool branch_taken_0x10280c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10280c) {
            ctx->pc = 0x102810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10280Cu;
            // 0x102810: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1028B0u;
            return;
        }
    }
    ctx->pc = 0x102814u;
    // 0x102814: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x102814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x102818: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x102818u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10281c: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x10281Cu;
    {
        const bool branch_taken_0x10281c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x102820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10281Cu;
        // 0x102820: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10281c) {
            ctx->pc = 0x1028A0u;
            return;
        }
    }
    ctx->pc = 0x102824u;
    // 0x102824: 0x0  nop
    ctx->pc = 0x102824u;
    // NOP
    ctx->pc = 0x102828u;
}
