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

// Function: LoadImageInfo__6WcPolyP10WImageInfo
// Address: 0x1df320 - 0x1df3f0
void LoadImageInfo__6WcPolyP10WImageInfo_0x1df320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadImageInfo__6WcPolyP10WImageInfo_0x1df320");
#endif

    ctx->pc = 0x1df320u;

    // 0x1df320: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1df320u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df324: 0x24870188  addiu       $a3, $a0, 0x188
    ctx->pc = 0x1df324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 392));
    // 0x1df328: 0x248b0150  addiu       $t3, $a0, 0x150
    ctx->pc = 0x1df328u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1df32c: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x1df32cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1df330: 0xd6bbc  dsll32      $t5, $t5, 14
    ctx->pc = 0x1df330u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 14));
    // 0x1df334: 0xfc820188  sd          $v0, 0x188($a0)
    ctx->pc = 0x1df334u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 392), GPR_U64(ctx, 2));
    // 0x1df338: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x1df338u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1df33c: 0xc64f8  dsll        $t4, $t4, 19
    ctx->pc = 0x1df33cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 19);
    // 0x1df340: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x1df340u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1df344: 0xfc820190  sd          $v0, 0x190($a0)
    ctx->pc = 0x1df344u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 400), GPR_U64(ctx, 2));
    // 0x1df348: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x1df348u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1df34c: 0xfc830198  sd          $v1, 0x198($a0)
    ctx->pc = 0x1df34cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 408), GPR_U64(ctx, 3));
    // 0x1df350: 0xdca20018  ld          $v0, 0x18($a1)
    ctx->pc = 0x1df350u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1df354: 0xfc8201a0  sd          $v0, 0x1A0($a0)
    ctx->pc = 0x1df354u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 416), GPR_U64(ctx, 2));
    // 0x1df358: 0xdca30020  ld          $v1, 0x20($a1)
    ctx->pc = 0x1df358u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1df35c: 0xfc8301a8  sd          $v1, 0x1A8($a0)
    ctx->pc = 0x1df35cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 424), GPR_U64(ctx, 3));
    // 0x1df360: 0xdca20028  ld          $v0, 0x28($a1)
    ctx->pc = 0x1df360u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1df364: 0xfc8201b0  sd          $v0, 0x1B0($a0)
    ctx->pc = 0x1df364u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 432), GPR_U64(ctx, 2));
    // 0x1df368: 0xdca30030  ld          $v1, 0x30($a1)
    ctx->pc = 0x1df368u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1df36c: 0xfc8301b8  sd          $v1, 0x1B8($a0)
    ctx->pc = 0x1df36cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 440), GPR_U64(ctx, 3));
    // 0x1df370: 0xdca20038  ld          $v0, 0x38($a1)
    ctx->pc = 0x1df370u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1df374: 0xfc8201c0  sd          $v0, 0x1C0($a0)
    ctx->pc = 0x1df374u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 448), GPR_U64(ctx, 2));
    // 0x1df378: 0x94e30018  lhu         $v1, 0x18($a3)
    ctx->pc = 0x1df378u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1df37c: 0xa563000c  sh          $v1, 0xC($t3)
    ctx->pc = 0x1df37cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1df380: 0x94e2001a  lhu         $v0, 0x1A($a3)
    ctx->pc = 0x1df380u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x1df384: 0xa562000e  sh          $v0, 0xE($t3)
    ctx->pc = 0x1df384u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1df388: 0x94e80018  lhu         $t0, 0x18($a3)
    ctx->pc = 0x1df388u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1df38c: 0x94e40004  lhu         $a0, 0x4($a3)
    ctx->pc = 0x1df38cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1df390: 0x94e90002  lhu         $t1, 0x2($a3)
    ctx->pc = 0x1df390u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1df394: 0x846b8  dsll        $t0, $t0, 26
    ctx->pc = 0x1df394u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 26);
    // 0x1df398: 0x94e5001a  lhu         $a1, 0x1A($a3)
    ctx->pc = 0x1df398u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x1df39c: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1df39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1df3a0: 0x94e6000c  lhu         $a2, 0xC($a3)
    ctx->pc = 0x1df3a0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1df3a4: 0x94bb8  dsll        $t1, $t1, 14
    ctx->pc = 0x1df3a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 14);
    // 0x1df3a8: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x1df3a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1df3ac: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x1df3acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x1df3b0: 0x634fc  dsll32      $a2, $a2, 19
    ctx->pc = 0x1df3b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 19));
    // 0x1df3b4: 0x94ea0030  lhu         $t2, 0x30($a3)
    ctx->pc = 0x1df3b4u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1df3b8: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x1df3b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1df3bc: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x1df3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x1df3c0: 0x10c4025  or          $t0, $t0, $t4
    ctx->pc = 0x1df3c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 12));
    // 0x1df3c4: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x1df3c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x1df3c8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1df3c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1df3cc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1df3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1df3d0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1df3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1df3d4: 0x4a102d  daddu       $v0, $v0, $t2
    ctx->pc = 0x1df3d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
    // 0x1df3d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1df3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1df3dc: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x1df3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x1df3e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1df3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1df3e4: 0xfce30038  sd          $v1, 0x38($a3)
    ctx->pc = 0x1df3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 3));
    // 0x1df3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF3E8u;
        // 0x1df3ec: 0xfd620010  sd          $v0, 0x10($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF3F0u;
}
