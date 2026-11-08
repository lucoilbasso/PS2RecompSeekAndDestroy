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

// Function: entry_0012a478
// Address: 0x12a478 - 0x12a5c8
void entry_0012a478_0x12a478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a478_0x12a478");
#endif

    ctx->pc = 0x12a478u;

    // 0x12a478: 0x278789f4  addiu       $a3, $gp, -0x760C
    ctx->pc = 0x12a478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937076));
    // 0x12a47c: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x12a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x12a480: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x12a480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x12a484: 0x34634242  ori         $v1, $v1, 0x4242
    ctx->pc = 0x12a484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16962);
    // 0x12a488: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x12a488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x12a48c: 0x34634e26  ori         $v1, $v1, 0x4E26
    ctx->pc = 0x12a48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20006);
    // 0x12a490: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x12a490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12a494: 0x3c04a03a  lui         $a0, 0xA03A
    ctx->pc = 0x12a494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41018 << 16));
    // 0x12a498: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x12a498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x12a49c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x12a49cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12a4a0: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x12a4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x12a4a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12a4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12a4a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a4ac: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x12a4acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12a4b0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x12a4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a4b4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x12a4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x12a4b8: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x12a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x12a4bc: 0x24a80010  addiu       $t0, $a1, 0x10
    ctx->pc = 0x12a4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x12a4c0: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x12a4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x12a4c4: 0x24a90020  addiu       $t1, $a1, 0x20
    ctx->pc = 0x12a4c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x12a4c8: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x12a4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x12a4cc: 0x24aa0030  addiu       $t2, $a1, 0x30
    ctx->pc = 0x12a4ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12a4d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12a4d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12a4d4: 0x24ad0040  addiu       $t5, $a1, 0x40
    ctx->pc = 0x12a4d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x12a4d8: 0x8e8300d0  lw          $v1, 0xD0($s4)
    ctx->pc = 0x12a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x12a4dc: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x12a4dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a4e0: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x12a4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x12a4e4: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x12a4e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12a4e8: 0x94660030  lhu         $a2, 0x30($v1)
    ctx->pc = 0x12a4e8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x12a4ec: 0xdc640038  ld          $a0, 0x38($v1)
    ctx->pc = 0x12a4ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x12a4f0: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x12a4f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x12a4f4: 0xfcab0008  sd          $t3, 0x8($a1)
    ctx->pc = 0x12a4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 11));
    // 0x12a4f8: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x12a4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x12a4fc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x12a4fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x12a500: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x12a500u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x12a504: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x12a504u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x12a508: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x12a508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x12a50c: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x12a50cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x12a510: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x12a510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x12a514: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x12a514u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x12a518: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x12a518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12a51c: 0xfd2c0008  sd          $t4, 0x8($t1)
    ctx->pc = 0x12a51cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 12));
    // 0x12a520: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x12a520u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x12a524: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x12a524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x12a528: 0xaced0000  sw          $t5, 0x0($a3)
    ctx->pc = 0x12a528u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 13));
    // 0x12a52c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x12a52cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12a530: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x12a530u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x12a534: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x12a534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12a538: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12a538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a53c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12a540: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x12a540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12a544: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x12a544u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x12a548: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12a548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12a54c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x12a54cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12a550: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x12a550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12a554: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x12a554u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x12a558: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x12a558u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12a55c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x12a55cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x12a560: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x12a560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12a564: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12a564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a568: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x12a568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x12a56c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x12a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x12a570: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x12a570u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x12a574: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x12a574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12a578: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12a578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12a57c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12a57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12a580: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x12a580u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x12a584: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x12a584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12a588: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12a588u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x12a58c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x12a58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12a590: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x12a590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a594: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x12a594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x12a598: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x12a598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x12a59c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x12a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x12a5a0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12a5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12a5a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x12a5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12a5a8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x12a5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12a5ac: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x12a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x12a5b0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x12a5b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12a5b4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x12a5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x12a5b8: 0x8f8389f8  lw          $v1, -0x7608($gp)
    ctx->pc = 0x12a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937080)));
    // 0x12a5bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12a5c0: 0xaf8389f8  sw          $v1, -0x7608($gp)
    ctx->pc = 0x12a5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937080), GPR_U32(ctx, 3));
    // 0x12a5c4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x12a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->pc = 0x12a5c8u;
}
