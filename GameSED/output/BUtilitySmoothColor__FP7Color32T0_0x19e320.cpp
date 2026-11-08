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

// Function: BUtilitySmoothColor__FP7Color32T0
// Address: 0x19e320 - 0x19e470
void BUtilitySmoothColor__FP7Color32T0_0x19e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilitySmoothColor__FP7Color32T0_0x19e320");
#endif

    ctx->pc = 0x19e320u;

    // 0x19e320: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x19e320u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19e324: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19e324u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e328: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x19e328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19e32c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x19e32cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e330: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x19e330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19e334: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E334u;
    {
        const bool branch_taken_0x19e334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E334u;
        // 0x19e338: 0x90a60003  lbu         $a2, 0x3($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e334) {
            ctx->pc = 0x19E358u;
            goto label_19e358;
        }
    }
    ctx->pc = 0x19E33Cu;
    // 0x19e33c: 0x671023  subu        $v0, $v1, $a3
    ctx->pc = 0x19e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19e340: 0x704610e8  pminw       $v0, $v0, $a2
    ctx->pc = 0x19e340u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19e344: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19e344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e348: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19e348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e34c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x19e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e350: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19E350u;
    {
        const bool branch_taken_0x19e350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E350u;
        // 0x19e354: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e350) {
            ctx->pc = 0x19E380u;
            goto label_19e380;
        }
    }
    ctx->pc = 0x19E358u;
label_19e358:
    // 0x19e358: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x19e358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x19e35c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E35Cu;
    {
        const bool branch_taken_0x19e35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e35c) {
            ctx->pc = 0x19E360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E35Cu;
            // 0x19e360: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E380u;
            goto label_19e380;
        }
    }
    ctx->pc = 0x19E364u;
    // 0x19e364: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x19e364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19e368: 0x1031023  subu        $v0, $t0, $v1
    ctx->pc = 0x19e368u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x19e36c: 0x704610e8  pminw       $v0, $v0, $a2
    ctx->pc = 0x19e36cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19e370: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19e370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e374: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19e374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e378: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19e378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e37c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x19e37cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_19e380:
    // 0x19e380: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x19e380u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19e384: 0x90a70001  lbu         $a3, 0x1($a1)
    ctx->pc = 0x19e384u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x19e388: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x19e388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19e38c: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x19e38cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x19e390: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x19e390u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e394: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x19e394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19e398: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E398u;
    {
        const bool branch_taken_0x19e398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E398u;
        // 0x19e39c: 0x90a60003  lbu         $a2, 0x3($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e398) {
            ctx->pc = 0x19E3C0u;
            goto label_19e3c0;
        }
    }
    ctx->pc = 0x19E3A0u;
    // 0x19e3a0: 0x671023  subu        $v0, $v1, $a3
    ctx->pc = 0x19e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19e3a4: 0x704610e8  pminw       $v0, $v0, $a2
    ctx->pc = 0x19e3a4u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19e3a8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e3ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19e3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e3b0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x19e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e3b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19E3B4u;
    {
        const bool branch_taken_0x19e3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3B4u;
        // 0x19e3b8: 0xa1030000  sb          $v1, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e3b4) {
            ctx->pc = 0x19E3E8u;
            goto label_19e3e8;
        }
    }
    ctx->pc = 0x19E3BCu;
    // 0x19e3bc: 0x0  nop
    ctx->pc = 0x19e3bcu;
    // NOP
label_19e3c0:
    // 0x19e3c0: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x19e3c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x19e3c4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E3C4u;
    {
        const bool branch_taken_0x19e3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e3c4) {
            ctx->pc = 0x19E3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E3C4u;
            // 0x19e3c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E3E8u;
            goto label_19e3e8;
        }
    }
    ctx->pc = 0x19E3CCu;
    // 0x19e3cc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x19e3ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19e3d0: 0x1231023  subu        $v0, $t1, $v1
    ctx->pc = 0x19e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x19e3d4: 0x704610e8  pminw       $v0, $v0, $a2
    ctx->pc = 0x19e3d4u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19e3d8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e3dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19e3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e3e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e3e4: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x19e3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
label_19e3e8:
    // 0x19e3e8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x19e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x19e3ec: 0x90a70002  lbu         $a3, 0x2($a1)
    ctx->pc = 0x19e3ecu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x19e3f0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x19e3f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19e3f4: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x19e3f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x19e3f8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x19e3f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e3fc: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x19e3fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19e400: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E400u;
    {
        const bool branch_taken_0x19e400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E400u;
        // 0x19e404: 0x90a60003  lbu         $a2, 0x3($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e400) {
            ctx->pc = 0x19E428u;
            goto label_19e428;
        }
    }
    ctx->pc = 0x19E408u;
    // 0x19e408: 0x671023  subu        $v0, $v1, $a3
    ctx->pc = 0x19e408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19e40c: 0x704610e8  pminw       $v0, $v0, $a2
    ctx->pc = 0x19e40cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19e410: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19e410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e414: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19e414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e418: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x19e418u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e41c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19E41Cu;
    {
        const bool branch_taken_0x19e41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E41Cu;
        // 0x19e420: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e41c) {
            ctx->pc = 0x19E450u;
            goto label_19e450;
        }
    }
    ctx->pc = 0x19E424u;
    // 0x19e424: 0x0  nop
    ctx->pc = 0x19e424u;
    // NOP
label_19e428:
    // 0x19e428: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x19e428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x19e42c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E42Cu;
    {
        const bool branch_taken_0x19e42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e42c) {
            ctx->pc = 0x19E430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E42Cu;
            // 0x19e430: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E450u;
            goto label_19e450;
        }
    }
    ctx->pc = 0x19E434u;
    // 0x19e434: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x19e434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19e438: 0x1031023  subu        $v0, $t0, $v1
    ctx->pc = 0x19e438u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x19e43c: 0x704610e8  pminw       $v0, $v0, $a2
    ctx->pc = 0x19e43cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x19e440: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x19e440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e444: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19e444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e448: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19e448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e44c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x19e44cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_19e450:
    // 0x19e450: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x19e450u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x19e454: 0x15400004  bnez        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E454u;
    {
        const bool branch_taken_0x19e454 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e454) {
            ctx->pc = 0x19E468u;
            goto label_19e468;
        }
    }
    ctx->pc = 0x19E45Cu;
    // 0x19e45c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19e460: 0x8c43d640  lw          $v1, -0x29C0($v0)
    ctx->pc = 0x19e460u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x25D640u));
    // 0x19e464: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x19e464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_19e468:
    // 0x19e468: 0x3e00008  jr          $ra
    ctx->pc = 0x19E468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E468u;
        // 0x19e46c: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E470u;
}
