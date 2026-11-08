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

// Function: SetTextureImage__7WcSheetP10WImageInfo
// Address: 0x1df678 - 0x1df794
void SetTextureImage__7WcSheetP10WImageInfo_0x1df678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTextureImage__7WcSheetP10WImageInfo_0x1df678");
#endif

    ctx->pc = 0x1df678u;

    // 0x1df678: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1df678u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df67c: 0x24870190  addiu       $a3, $a0, 0x190
    ctx->pc = 0x1df67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x1df680: 0x248a0150  addiu       $t2, $a0, 0x150
    ctx->pc = 0x1df680u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1df684: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x1df684u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1df688: 0xc63bc  dsll32      $t4, $t4, 14
    ctx->pc = 0x1df688u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 14));
    // 0x1df68c: 0xfc820190  sd          $v0, 0x190($a0)
    ctx->pc = 0x1df68cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 400), GPR_U64(ctx, 2));
    // 0x1df690: 0x340b8000  ori         $t3, $zero, 0x8000
    ctx->pc = 0x1df690u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1df694: 0xb5cf8  dsll        $t3, $t3, 19
    ctx->pc = 0x1df694u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 19);
    // 0x1df698: 0x240d0010  addiu       $t5, $zero, 0x10
    ctx->pc = 0x1df698u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1df69c: 0x3c0e0026  lui         $t6, 0x26
    ctx->pc = 0x1df69cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)38 << 16));
    // 0x1df6a0: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x1df6a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1df6a4: 0xfc820198  sd          $v0, 0x198($a0)
    ctx->pc = 0x1df6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 408), GPR_U64(ctx, 2));
    // 0x1df6a8: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x1df6a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1df6ac: 0xfc8301a0  sd          $v1, 0x1A0($a0)
    ctx->pc = 0x1df6acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 416), GPR_U64(ctx, 3));
    // 0x1df6b0: 0xdca20018  ld          $v0, 0x18($a1)
    ctx->pc = 0x1df6b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1df6b4: 0xfc8201a8  sd          $v0, 0x1A8($a0)
    ctx->pc = 0x1df6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 424), GPR_U64(ctx, 2));
    // 0x1df6b8: 0xdca30020  ld          $v1, 0x20($a1)
    ctx->pc = 0x1df6b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1df6bc: 0xfc8301b0  sd          $v1, 0x1B0($a0)
    ctx->pc = 0x1df6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 432), GPR_U64(ctx, 3));
    // 0x1df6c0: 0xdca20028  ld          $v0, 0x28($a1)
    ctx->pc = 0x1df6c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1df6c4: 0xfc8201b8  sd          $v0, 0x1B8($a0)
    ctx->pc = 0x1df6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 440), GPR_U64(ctx, 2));
    // 0x1df6c8: 0xdca30030  ld          $v1, 0x30($a1)
    ctx->pc = 0x1df6c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1df6cc: 0xfc8301c0  sd          $v1, 0x1C0($a0)
    ctx->pc = 0x1df6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 448), GPR_U64(ctx, 3));
    // 0x1df6d0: 0xdca20038  ld          $v0, 0x38($a1)
    ctx->pc = 0x1df6d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1df6d4: 0xfc8201c8  sd          $v0, 0x1C8($a0)
    ctx->pc = 0x1df6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 456), GPR_U64(ctx, 2));
    // 0x1df6d8: 0x94e30018  lhu         $v1, 0x18($a3)
    ctx->pc = 0x1df6d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1df6dc: 0xa543000c  sh          $v1, 0xC($t2)
    ctx->pc = 0x1df6dcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1df6e0: 0x94e2001a  lhu         $v0, 0x1A($a3)
    ctx->pc = 0x1df6e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x1df6e4: 0xa542000e  sh          $v0, 0xE($t2)
    ctx->pc = 0x1df6e4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1df6e8: 0x94e80018  lhu         $t0, 0x18($a3)
    ctx->pc = 0x1df6e8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1df6ec: 0x94e50004  lhu         $a1, 0x4($a3)
    ctx->pc = 0x1df6ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1df6f0: 0x94e90002  lhu         $t1, 0x2($a3)
    ctx->pc = 0x1df6f0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1df6f4: 0x846b8  dsll        $t0, $t0, 26
    ctx->pc = 0x1df6f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 26);
    // 0x1df6f8: 0x94e2001a  lhu         $v0, 0x1A($a3)
    ctx->pc = 0x1df6f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x1df6fc: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x1df6fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x1df700: 0x94e6000c  lhu         $a2, 0xC($a3)
    ctx->pc = 0x1df700u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1df704: 0x94bb8  dsll        $t1, $t1, 14
    ctx->pc = 0x1df704u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 14);
    // 0x1df708: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x1df708u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1df70c: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1df70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1df710: 0x634fc  dsll32      $a2, $a2, 19
    ctx->pc = 0x1df710u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 19));
    // 0x1df714: 0x10b4025  or          $t0, $t0, $t3
    ctx->pc = 0x1df714u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 11));
    // 0x1df718: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1df718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1df71c: 0x94e60030  lhu         $a2, 0x30($a3)
    ctx->pc = 0x1df71cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1df720: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x1df720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x1df724: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x1df724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x1df728: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1df728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1df72c: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x1df72cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1df730: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1df730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1df734: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1df734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1df738: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x1df738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x1df73c: 0xfce30038  sd          $v1, 0x38($a3)
    ctx->pc = 0x1df73cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 3));
    // 0x1df740: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x1df740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x1df744: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1df744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1df748: 0xdd450018  ld          $a1, 0x18($t2)
    ctx->pc = 0x1df748u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x1df74c: 0xfd430010  sd          $v1, 0x10($t2)
    ctx->pc = 0x1df74cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 3));
    // 0x1df750: 0xad2825  or          $a1, $a1, $t5
    ctx->pc = 0x1df750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 13));
    // 0x1df754: 0xfd450018  sd          $a1, 0x18($t2)
    ctx->pc = 0x1df754u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 24), GPR_U64(ctx, 5));
    // 0x1df758: 0xddc2d610  ld          $v0, -0x29F0($t6)
    ctx->pc = 0x1df758u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 14), 4294956560)));
    // 0x1df75c: 0xfc820170  sd          $v0, 0x170($a0)
    ctx->pc = 0x1df75cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 368), GPR_U64(ctx, 2));
    // 0x1df760: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1df760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1df764: 0xdc43d618  ld          $v1, -0x29E8($v0)
    ctx->pc = 0x1df764u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x25D618u));
    // 0x1df768: 0xfc830178  sd          $v1, 0x178($a0)
    ctx->pc = 0x1df768u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 376), GPR_U64(ctx, 3));
    // 0x1df76c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1df76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1df770: 0xdc43d620  ld          $v1, -0x29E0($v0)
    ctx->pc = 0x1df770u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x25D620u));
    // 0x1df774: 0xfc830180  sd          $v1, 0x180($a0)
    ctx->pc = 0x1df774u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 384), GPR_U64(ctx, 3));
    // 0x1df778: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1df778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1df77c: 0xdc43d628  ld          $v1, -0x29D8($v0)
    ctx->pc = 0x1df77cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x25D628u));
    // 0x1df780: 0xfc830188  sd          $v1, 0x188($a0)
    ctx->pc = 0x1df780u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 392), GPR_U64(ctx, 3));
    // 0x1df784: 0x8c8201dc  lw          $v0, 0x1DC($a0)
    ctx->pc = 0x1df784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 476)));
    // 0x1df788: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1df788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1df78c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF78Cu;
        // 0x1df790: 0xac8201dc  sw          $v0, 0x1DC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF794u;
}
