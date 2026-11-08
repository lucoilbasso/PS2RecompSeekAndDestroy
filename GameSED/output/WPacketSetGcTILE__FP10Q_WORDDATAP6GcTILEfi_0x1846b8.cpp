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

// Function: WPacketSetGcTILE__FP10Q_WORDDATAP6GcTILEfi
// Address: 0x1846b8 - 0x18489c
void WPacketSetGcTILE__FP10Q_WORDDATAP6GcTILEfi_0x1846b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPacketSetGcTILE__FP10Q_WORDDATAP6GcTILEfi_0x1846b8");
#endif

    ctx->pc = 0x1846b8u;

    // 0x1846b8: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x1846b8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846bc: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1846bcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846c0: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x1846c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1846c4: 0x1c0c82d  daddu       $t9, $t6, $zero
    ctx->pc = 0x1846c4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846c8: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x1846c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x1846cc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1846ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1846d0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1846D0u;
    {
        const bool branch_taken_0x1846d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1846D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1846D0u;
        // 0x1846d4: 0x63bf8  dsll        $a3, $a2, 15 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << 15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1846d0) {
            ctx->pc = 0x184718u;
            goto label_184718;
        }
    }
    ctx->pc = 0x1846D8u;
    // 0x1846d8: 0x91e20007  lbu         $v0, 0x7($t7)
    ctx->pc = 0x1846d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 7)));
    // 0x1846dc: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x1846dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1846e0: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1846e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1846e4: 0x25c30010  addiu       $v1, $t6, 0x10
    ctx->pc = 0x1846e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x1846e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1846e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1846ec: 0xfdc50008  sd          $a1, 0x8($t6)
    ctx->pc = 0x1846ecu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 5));
    // 0x1846f0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1846f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1846f4: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x1846f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1846f8: 0xfdc20000  sd          $v0, 0x0($t6)
    ctx->pc = 0x1846f8u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 2));
    // 0x1846fc: 0x25d80020  addiu       $t8, $t6, 0x20
    ctx->pc = 0x1846fcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x184700: 0x91e20002  lbu         $v0, 0x2($t7)
    ctx->pc = 0x184700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x184704: 0x91e40003  lbu         $a0, 0x3($t7)
    ctx->pc = 0x184704u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 3)));
    // 0x184708: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x184708u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x18470c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18470cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x184710: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x184710u;
    {
        const bool branch_taken_0x184710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184710u;
        // 0x184714: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184710) {
            ctx->pc = 0x184748u;
            goto label_184748;
        }
    }
    ctx->pc = 0x184718u;
label_184718:
    // 0x184718: 0x25c50010  addiu       $a1, $t6, 0x10
    ctx->pc = 0x184718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x18471c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x18471cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x184720: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x184720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x184724: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x184724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x184728: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x184728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x18472c: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x18472cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x184730: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x184730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x184734: 0xfdc30000  sd          $v1, 0x0($t6)
    ctx->pc = 0x184734u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 3));
    // 0x184738: 0xfdc40008  sd          $a0, 0x8($t6)
    ctx->pc = 0x184738u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 4));
    // 0x18473c: 0x25d80020  addiu       $t8, $t6, 0x20
    ctx->pc = 0x18473cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x184740: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x184740u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x184744: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x184744u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_184748:
    // 0x184748: 0x300702d  daddu       $t6, $t8, $zero
    ctx->pc = 0x184748u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18474c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x18474cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x184750: 0x6337c  dsll32      $a2, $a2, 13
    ctx->pc = 0x184750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
    // 0x184754: 0x1d91823  subu        $v1, $t6, $t9
    ctx->pc = 0x184754u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 25)));
    // 0x184758: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x184758u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x18475c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x18475cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x184760: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x184760u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x184764: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x184764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x184768: 0xff2c0008  sd          $t4, 0x8($t9)
    ctx->pc = 0x184768u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 8), GPR_U64(ctx, 12));
    // 0x18476c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x18476cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x184770: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x184770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x184774: 0xff230000  sd          $v1, 0x0($t9)
    ctx->pc = 0x184774u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 3));
    // 0x184778: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x184778u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18477c: 0xeb2025  or          $a0, $a3, $t3
    ctx->pc = 0x18477cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x184780: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x184780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184784: 0x3402c000  ori         $v0, $zero, 0xC000
    ctx->pc = 0x184784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x184788: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x184788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x18478c: 0x240d0046  addiu       $t5, $zero, 0x46
    ctx->pc = 0x18478cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x184790: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x184790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x184794: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x184794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x184798: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x184798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18479c: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x18479cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1847a0: 0xa57f8  dsll        $t2, $t2, 31
    ctx->pc = 0x1847a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 31);
    // 0x1847a4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1847a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1847a8: 0x2408044e  addiu       $t0, $zero, 0x44E
    ctx->pc = 0x1847a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1102));
    // 0x1847ac: 0x1a2280b  movn        $a1, $t5, $v0
    ctx->pc = 0x1847acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
    // 0x1847b0: 0xff080008  sd          $t0, 0x8($t8)
    ctx->pc = 0x1847b0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 8));
    // 0x1847b4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1847b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1847b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1847b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1847bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1847bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1847c0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1847c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1847c4: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x1847c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x1847c8: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x1847c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x1847cc: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x1847ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1847d0: 0xff040000  sd          $a0, 0x0($t8)
    ctx->pc = 0x1847d0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 4));
    // 0x1847d4: 0x24c6e750  addiu       $a2, $a2, -0x18B0
    ctx->pc = 0x1847d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960976));
    // 0x1847d8: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x1847d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x1847dc: 0x8de20004  lw          $v0, 0x4($t7)
    ctx->pc = 0x1847dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x1847e0: 0xfceb0008  sd          $t3, 0x8($a3)
    ctx->pc = 0x1847e0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 11));
    // 0x1847e4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1847e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1847e8: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x1847e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1847ec: 0xc5e10010  lwc1        $f1, 0x10($t7)
    ctx->pc = 0x1847ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1847f0: 0xc5e00014  lwc1        $f0, 0x14($t7)
    ctx->pc = 0x1847f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1847f4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1847f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1847f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1847f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1847fc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1847fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x184800: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x184800u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x184804: 0x70801c88  pextlw      $v1, $a0, $zero
    ctx->pc = 0x184804u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x184808: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x184808u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18480c: 0x48a24000  qmtc2.ni    $v0, $vf8
    ctx->pc = 0x18480cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x184810: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x184810u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x184814: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x184814u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x184818: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x184818u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x18481c: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x18481cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x184820: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x184820u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x184824: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x184824u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x184828: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x184828u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18482c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18482cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x184830: 0x4bec617d  vftoi4.xyzw $vf12, $vf12
    ctx->pc = 0x184830u;
    { __m128 src = ctx->vu0_vf[12]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x184834: 0xf92c0000  sqc2        $vf12, 0x0($t1)
    ctx->pc = 0x184834u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x184838: 0xc5e3001c  lwc1        $f3, 0x1C($t7)
    ctx->pc = 0x184838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18483c: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x18483cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184840: 0xc5e20018  lwc1        $f2, 0x18($t7)
    ctx->pc = 0x184840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x184844: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x184844u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x184848: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x184848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x18484c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x18484cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x184850: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x184850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x184854: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x184854u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x184858: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x184858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x18485c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18485cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x184860: 0x70801c88  pextlw      $v1, $a0, $zero
    ctx->pc = 0x184860u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x184864: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x184864u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x184868: 0x48a24000  qmtc2.ni    $v0, $vf8
    ctx->pc = 0x184868u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18486c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x18486cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x184870: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x184870u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x184874: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x184874u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x184878: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x184878u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x18487c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18487cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x184880: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x184880u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x184884: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x184884u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x184888: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x184888u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18488c: 0x4bec617d  vftoi4.xyzw $vf12, $vf12
    ctx->pc = 0x18488cu;
    { __m128 src = ctx->vu0_vf[12]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x184890: 0xf8ac0000  sqc2        $vf12, 0x0($a1)
    ctx->pc = 0x184890u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x184894: 0x3e00008  jr          $ra
    ctx->pc = 0x184894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184894u;
        // 0x184898: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18489Cu;
}
