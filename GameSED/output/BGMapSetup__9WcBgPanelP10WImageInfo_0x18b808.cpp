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

// Function: BGMapSetup__9WcBgPanelP10WImageInfo
// Address: 0x18b808 - 0x18b92c
void BGMapSetup__9WcBgPanelP10WImageInfo_0x18b808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BGMapSetup__9WcBgPanelP10WImageInfo_0x18b808");
#endif

    ctx->pc = 0x18b808u;

    // 0x18b808: 0x24890150  addiu       $t1, $a0, 0x150
    ctx->pc = 0x18b808u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x18b80c: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x18b80cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x18b810: 0xa5200000  sh          $zero, 0x0($t1)
    ctx->pc = 0x18b810u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x18b814: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x18b814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x18b818: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x18b818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x18b81c: 0x90e3eda0  lbu         $v1, -0x1260($a3)
    ctx->pc = 0x18b81cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x21EDA0u));
    // 0x18b820: 0xa1220003  sb          $v0, 0x3($t1)
    ctx->pc = 0x18b820u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b824: 0xa1230002  sb          $v1, 0x2($t1)
    ctx->pc = 0x18b824u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b828: 0x8cc2d630  lw          $v0, -0x29D0($a2)
    ctx->pc = 0x18b828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x18b82c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x18b82cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x18b830: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18b830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b834: 0x248801c0  addiu       $t0, $a0, 0x1C0
    ctx->pc = 0x18b834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x18b838: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b83c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b83cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b840: 0x340b8000  ori         $t3, $zero, 0x8000
    ctx->pc = 0x18b840u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18b844: 0xb5bbc  dsll32      $t3, $t3, 14
    ctx->pc = 0x18b844u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 14));
    // 0x18b848: 0xa520000c  sh          $zero, 0xC($t1)
    ctx->pc = 0x18b848u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x18b84c: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x18b84cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18b850: 0xa54f8  dsll        $t2, $t2, 19
    ctx->pc = 0x18b850u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 19);
    // 0x18b854: 0xe5210064  swc1        $f1, 0x64($t1)
    ctx->pc = 0x18b854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 100), bits); }
    // 0x18b858: 0xe520006c  swc1        $f0, 0x6C($t1)
    ctx->pc = 0x18b858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 108), bits); }
    // 0x18b85c: 0xe5210060  swc1        $f1, 0x60($t1)
    ctx->pc = 0x18b85cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 96), bits); }
    // 0x18b860: 0xe5200068  swc1        $f0, 0x68($t1)
    ctx->pc = 0x18b860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 104), bits); }
    // 0x18b864: 0xad200058  sw          $zero, 0x58($t1)
    ctx->pc = 0x18b864u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 0));
    // 0x18b868: 0xad20005c  sw          $zero, 0x5C($t1)
    ctx->pc = 0x18b868u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 92), GPR_U32(ctx, 0));
    // 0x18b86c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x18b86cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18b870: 0xfc8201c0  sd          $v0, 0x1C0($a0)
    ctx->pc = 0x18b870u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 448), GPR_U64(ctx, 2));
    // 0x18b874: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x18b874u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x18b878: 0xfc8301c8  sd          $v1, 0x1C8($a0)
    ctx->pc = 0x18b878u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 456), GPR_U64(ctx, 3));
    // 0x18b87c: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x18b87cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x18b880: 0xfc8201d0  sd          $v0, 0x1D0($a0)
    ctx->pc = 0x18b880u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 464), GPR_U64(ctx, 2));
    // 0x18b884: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x18b884u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x18b888: 0xfc8301d8  sd          $v1, 0x1D8($a0)
    ctx->pc = 0x18b888u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 472), GPR_U64(ctx, 3));
    // 0x18b88c: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x18b88cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x18b890: 0xfc8201e0  sd          $v0, 0x1E0($a0)
    ctx->pc = 0x18b890u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 480), GPR_U64(ctx, 2));
    // 0x18b894: 0xdca30028  ld          $v1, 0x28($a1)
    ctx->pc = 0x18b894u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x18b898: 0xfc8301e8  sd          $v1, 0x1E8($a0)
    ctx->pc = 0x18b898u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 488), GPR_U64(ctx, 3));
    // 0x18b89c: 0xdca20030  ld          $v0, 0x30($a1)
    ctx->pc = 0x18b89cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x18b8a0: 0xfc8201f0  sd          $v0, 0x1F0($a0)
    ctx->pc = 0x18b8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 496), GPR_U64(ctx, 2));
    // 0x18b8a4: 0xdca30038  ld          $v1, 0x38($a1)
    ctx->pc = 0x18b8a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x18b8a8: 0xfc8301f8  sd          $v1, 0x1F8($a0)
    ctx->pc = 0x18b8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 504), GPR_U64(ctx, 3));
    // 0x18b8ac: 0x95020018  lhu         $v0, 0x18($t0)
    ctx->pc = 0x18b8acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x18b8b0: 0xa5220008  sh          $v0, 0x8($t1)
    ctx->pc = 0x18b8b0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x18b8b4: 0x9503001a  lhu         $v1, 0x1A($t0)
    ctx->pc = 0x18b8b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26)));
    // 0x18b8b8: 0xa523000a  sh          $v1, 0xA($t1)
    ctx->pc = 0x18b8b8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x18b8bc: 0x95060018  lhu         $a2, 0x18($t0)
    ctx->pc = 0x18b8bcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x18b8c0: 0x95020004  lhu         $v0, 0x4($t0)
    ctx->pc = 0x18b8c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x18b8c4: 0x95070002  lhu         $a3, 0x2($t0)
    ctx->pc = 0x18b8c4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x18b8c8: 0x636b8  dsll        $a2, $a2, 26
    ctx->pc = 0x18b8c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 26);
    // 0x18b8cc: 0x9504001a  lhu         $a0, 0x1A($t0)
    ctx->pc = 0x18b8ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26)));
    // 0x18b8d0: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x18b8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x18b8d4: 0x9505000c  lhu         $a1, 0xC($t0)
    ctx->pc = 0x18b8d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x18b8d8: 0x73bb8  dsll        $a3, $a3, 14
    ctx->pc = 0x18b8d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 14);
    // 0x18b8dc: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x18b8dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18b8e0: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x18b8e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x18b8e4: 0x52cfc  dsll32      $a1, $a1, 19
    ctx->pc = 0x18b8e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 19));
    // 0x18b8e8: 0xca3025  or          $a2, $a2, $t2
    ctx->pc = 0x18b8e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x18b8ec: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x18b8ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x18b8f0: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x18b8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x18b8f4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x18b8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x18b8f8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x18b8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x18b8fc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18b8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18b900: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18b900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18b904: 0xfd030038  sd          $v1, 0x38($t0)
    ctx->pc = 0x18b904u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 3));
    // 0x18b908: 0x95050030  lhu         $a1, 0x30($t0)
    ctx->pc = 0x18b908u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x18b90c: 0x95020008  lhu         $v0, 0x8($t0)
    ctx->pc = 0x18b90cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x18b910: 0x9524000c  lhu         $a0, 0xC($t1)
    ctx->pc = 0x18b910u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x18b914: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18b914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18b918: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x18b918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x18b91c: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18b91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18b920: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18b920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18b924: 0x3e00008  jr          $ra
    ctx->pc = 0x18B924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B924u;
        // 0x18b928: 0xfd230018  sd          $v1, 0x18($t1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 9), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B92Cu;
}
