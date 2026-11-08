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

// Function: entry_0018f5ac
// Address: 0x18f5ac - 0x18f6ac
void entry_0018f5ac_0x18f5ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f5ac_0x18f5ac");
#endif

    ctx->pc = 0x18f5acu;

    // 0x18f5ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18f5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18f5b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18f5b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f5b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18f5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x18f5b8: 0x26070188  addiu       $a3, $s0, 0x188
    ctx->pc = 0x18f5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
    // 0x18f5bc: 0x260b0150  addiu       $t3, $s0, 0x150
    ctx->pc = 0x18f5bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x18f5c0: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x18f5c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18f5c4: 0xc64f8  dsll        $t4, $t4, 19
    ctx->pc = 0x18f5c4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 19);
    // 0x18f5c8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x18f5c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18f5cc: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x18f5ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18f5d0: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x18f5d0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f5d4: 0xfe020188  sd          $v0, 0x188($s0)
    ctx->pc = 0x18f5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 392), GPR_U64(ctx, 2));
    // 0x18f5d8: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x18f5d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x18f5dc: 0xfe020190  sd          $v0, 0x190($s0)
    ctx->pc = 0x18f5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 400), GPR_U64(ctx, 2));
    // 0x18f5e0: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x18f5e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x18f5e4: 0xfe030198  sd          $v1, 0x198($s0)
    ctx->pc = 0x18f5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 408), GPR_U64(ctx, 3));
    // 0x18f5e8: 0xdca20018  ld          $v0, 0x18($a1)
    ctx->pc = 0x18f5e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x18f5ec: 0xfe0201a0  sd          $v0, 0x1A0($s0)
    ctx->pc = 0x18f5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 416), GPR_U64(ctx, 2));
    // 0x18f5f0: 0xdca30020  ld          $v1, 0x20($a1)
    ctx->pc = 0x18f5f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x18f5f4: 0xfe0301a8  sd          $v1, 0x1A8($s0)
    ctx->pc = 0x18f5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 424), GPR_U64(ctx, 3));
    // 0x18f5f8: 0xdca20028  ld          $v0, 0x28($a1)
    ctx->pc = 0x18f5f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x18f5fc: 0xfe0201b0  sd          $v0, 0x1B0($s0)
    ctx->pc = 0x18f5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 432), GPR_U64(ctx, 2));
    // 0x18f600: 0xdca30030  ld          $v1, 0x30($a1)
    ctx->pc = 0x18f600u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x18f604: 0xfe0301b8  sd          $v1, 0x1B8($s0)
    ctx->pc = 0x18f604u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 440), GPR_U64(ctx, 3));
    // 0x18f608: 0xdca20038  ld          $v0, 0x38($a1)
    ctx->pc = 0x18f608u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x18f60c: 0xfe0201c0  sd          $v0, 0x1C0($s0)
    ctx->pc = 0x18f60cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 448), GPR_U64(ctx, 2));
    // 0x18f610: 0x94e30018  lhu         $v1, 0x18($a3)
    ctx->pc = 0x18f610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x18f614: 0xa563000c  sh          $v1, 0xC($t3)
    ctx->pc = 0x18f614u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x18f618: 0x94e2001a  lhu         $v0, 0x1A($a3)
    ctx->pc = 0x18f618u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x18f61c: 0xa562000e  sh          $v0, 0xE($t3)
    ctx->pc = 0x18f61cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x18f620: 0x94e80018  lhu         $t0, 0x18($a3)
    ctx->pc = 0x18f620u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x18f624: 0x94e40004  lhu         $a0, 0x4($a3)
    ctx->pc = 0x18f624u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18f628: 0x94e90002  lhu         $t1, 0x2($a3)
    ctx->pc = 0x18f628u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x18f62c: 0x846b8  dsll        $t0, $t0, 26
    ctx->pc = 0x18f62cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 26);
    // 0x18f630: 0x94e5001a  lhu         $a1, 0x1A($a3)
    ctx->pc = 0x18f630u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x18f634: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x18f634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x18f638: 0x94e6000c  lhu         $a2, 0xC($a3)
    ctx->pc = 0x18f638u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x18f63c: 0x94bb8  dsll        $t1, $t1, 14
    ctx->pc = 0x18f63cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 14);
    // 0x18f640: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x18f640u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18f644: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x18f644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x18f648: 0x94ea0030  lhu         $t2, 0x30($a3)
    ctx->pc = 0x18f648u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x18f64c: 0x634fc  dsll32      $a2, $a2, 19
    ctx->pc = 0x18f64cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 19));
    // 0x18f650: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x18f650u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x18f654: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x18f654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x18f658: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x18f658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x18f65c: 0x10c4025  or          $t0, $t0, $t4
    ctx->pc = 0x18f65cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 12));
    // 0x18f660: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x18f660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x18f664: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x18f664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x18f668: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x18f668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x18f66c: 0x4a102d  daddu       $v0, $v0, $t2
    ctx->pc = 0x18f66cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
    // 0x18f670: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18f670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18f674: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18f674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18f678: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18f678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18f67c: 0xfce30038  sd          $v1, 0x38($a3)
    ctx->pc = 0x18f67cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 3));
    // 0x18f680: 0xfd620010  sd          $v0, 0x10($t3)
    ctx->pc = 0x18f680u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 2));
    // 0x18f684: 0x96030158  lhu         $v1, 0x158($s0)
    ctx->pc = 0x18f684u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x18f688: 0xde020178  ld          $v0, 0x178($s0)
    ctx->pc = 0x18f688u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x18f68c: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x18f68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x18f690: 0xa6030158  sh          $v1, 0x158($s0)
    ctx->pc = 0x18f690u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x18f694: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x18f694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x18f698: 0x9603015a  lhu         $v1, 0x15A($s0)
    ctx->pc = 0x18f698u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 346)));
    // 0x18f69c: 0xfe020178  sd          $v0, 0x178($s0)
    ctx->pc = 0x18f69cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 2));
    // 0x18f6a0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F6A0u;
    {
        const bool branch_taken_0x18f6a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6A0u;
        // 0x18f6a4: 0x328c0  sll         $a1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f6a0) {
            ctx->pc = 0x18F6ACu;
            return;
        }
    }
    ctx->pc = 0x18F6A8u;
    // 0x18f6a8: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x18f6a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x18f6acu;
}
