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

// Function: entry_00127634
// Address: 0x127634 - 0x127704
void entry_00127634_0x127634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127634_0x127634");
#endif

    ctx->pc = 0x127634u;

    // 0x127634: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x127634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x127638: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x127638u;
    {
        const bool branch_taken_0x127638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127638) {
            ctx->pc = 0x12763Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127638u;
            // 0x12763c: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1275E0u;
            return;
        }
    }
    ctx->pc = 0x127640u;
    // 0x127640: 0x5640006f  bnel        $s2, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x127640u;
    {
        const bool branch_taken_0x127640 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x127640) {
            ctx->pc = 0x127644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127640u;
            // 0x127644: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127800u;
            return;
        }
    }
    ctx->pc = 0x127648u;
    // 0x127648: 0x278589e4  addiu       $a1, $gp, -0x761C
    ctx->pc = 0x127648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937060));
    // 0x12764c: 0x3c064002  lui         $a2, 0x4002
    ctx->pc = 0x12764cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16386 << 16));
    // 0x127650: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x127650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x127654: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x127654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x127658: 0x34c68001  ori         $a2, $a2, 0x8001
    ctx->pc = 0x127658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32769);
    // 0x12765c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x12765cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x127660: 0x24074444  addiu       $a3, $zero, 0x4444
    ctx->pc = 0x127660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17476));
    // 0x127664: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x127664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127668: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x127668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x12766c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x12766cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x127670: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x127670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x127674: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x127674u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x127678: 0xfc470008  sd          $a3, 0x8($v0)
    ctx->pc = 0x127678u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 7));
    // 0x12767c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12767cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x127680: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x127680u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127684: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x127684u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x127688: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x127688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12768c: 0x7ba40050  lq          $a0, 0x50($sp)
    ctx->pc = 0x12768cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127690: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x127690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127694: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x127694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x127698: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x127698u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x12769c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x12769cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x1276a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1276a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1276a4: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x1276a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1276a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1276a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1276ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1276acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1276b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1276b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1276b4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1276b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1276b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1276b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1276bc: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x1276bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1276c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1276c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1276c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1276c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1276c8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1276c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1276cc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1276ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1276d0: 0x8f8589d8  lw          $a1, -0x7628($gp)
    ctx->pc = 0x1276d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x1276d4: 0x28a20029  slti        $v0, $a1, 0x29
    ctx->pc = 0x1276d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x1276d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1276D8u;
    {
        const bool branch_taken_0x1276d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276D8u;
        // 0x1276dc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276d8) {
            ctx->pc = 0x127704u;
            return;
        }
    }
    ctx->pc = 0x1276E0u;
    // 0x1276e0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x1276e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1276e4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1276E4u;
    {
        const bool branch_taken_0x1276e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276E4u;
        // 0x1276e8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276e4) {
            ctx->pc = 0x127704u;
            return;
        }
    }
    ctx->pc = 0x1276ECu;
    // 0x1276ec: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x1276ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x1276f0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1276F0u;
    {
        const bool branch_taken_0x1276f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1276F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276F0u;
        // 0x1276f4: 0x8f9089e0  lw          $s0, -0x7620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276f0) {
            ctx->pc = 0x127708u;
            return;
        }
    }
    ctx->pc = 0x1276F8u;
    // 0x1276f8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1276f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1276fc: 0x104800ab  beq         $v0, $t0, . + 4 + (0xAB << 2)
    ctx->pc = 0x1276FCu;
    {
        const bool branch_taken_0x1276fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x127700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276FCu;
        // 0x127700: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276fc) {
            ctx->pc = 0x1279ACu;
            return;
        }
    }
    ctx->pc = 0x127704u;
}
