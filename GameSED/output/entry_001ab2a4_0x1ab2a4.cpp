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

// Function: entry_001ab2a4
// Address: 0x1ab2a4 - 0x1ab3b0
void entry_001ab2a4_0x1ab2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab2a4_0x1ab2a4");
#endif

    ctx->pc = 0x1ab2a4u;

    // 0x1ab2a4: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x1ab2a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ab2a8: 0x30c37fff  andi        $v1, $a2, 0x7FFF
    ctx->pc = 0x1ab2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x1ab2ac: 0x7dc20050  sq          $v0, 0x50($t6)
    ctx->pc = 0x1ab2acu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 80), GPR_VEC(ctx, 2));
    // 0x1ab2b0: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x1ab2b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1ab2b4: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1ab2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x1ab2b8: 0x3c07f3ff  lui         $a3, 0xF3FF
    ctx->pc = 0x1ab2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62463 << 16));
    // 0x1ab2bc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1ab2bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1ab2c0: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1ab2c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1ab2c4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1ab2c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1ab2c8: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1ab2c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1ab2cc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1ab2ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1ab2d0: 0xddc40050  ld          $a0, 0x50($t6)
    ctx->pc = 0x1ab2d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 80)));
    // 0x1ab2d4: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1ab2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1ab2d8: 0xddc50000  ld          $a1, 0x0($t6)
    ctx->pc = 0x1ab2d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1ab2dc: 0xc643c  dsll32      $t4, $t4, 16
    ctx->pc = 0x1ab2dcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 16));
    // 0x1ab2e0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1ab2e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ab2e4: 0xddcb0008  ld          $t3, 0x8($t6)
    ctx->pc = 0x1ab2e4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x1ab2e8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1ab2e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ab2ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ab2ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ab2f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ab2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab2f4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1ab2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ab2f8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ab2f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1ab2fc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ab2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ab300: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ab300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab304: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1ab304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1ab308: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1ab308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1ab30c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1ab30cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ab310: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1ab310u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1ab314: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x1ab314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x1ab318: 0x6343b  dsra        $a2, $a2, 16
    ctx->pc = 0x1ab318u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> 16);
    // 0x1ab31c: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x1ab31cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
    // 0x1ab320: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x1ab320u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x1ab324: 0xcc3025  or          $a2, $a2, $t4
    ctx->pc = 0x1ab324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
    // 0x1ab328: 0x8443b  dsra        $t0, $t0, 16
    ctx->pc = 0x1ab328u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> 16);
    // 0x1ab32c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ab32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ab330: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x1ab330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x1ab334: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1ab334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ab338: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1ab338u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ab33c: 0x73b3c  dsll32      $a3, $a3, 12
    ctx->pc = 0x1ab33cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
    // 0x1ab340: 0xf4c3c  dsll32      $t1, $t7, 16
    ctx->pc = 0x1ab340u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) << (32 + 16));
    // 0x1ab344: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x1ab344u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x1ab348: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ab348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1ab34c: 0x1485025  or          $t2, $t2, $t0
    ctx->pc = 0x1ab34cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x1ab350: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x1ab350u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x1ab354: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x1ab354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x1ab358: 0xd6e3c  dsll32      $t5, $t5, 24
    ctx->pc = 0x1ab358u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 24));
    // 0x1ab35c: 0x94c3b  dsra        $t1, $t1, 16
    ctx->pc = 0x1ab35cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> 16);
    // 0x1ab360: 0x18643c  dsll32      $t4, $t8, 16
    ctx->pc = 0x1ab360u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) << (32 + 16));
    // 0x1ab364: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x1ab364u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x1ab368: 0x12c4825  or          $t1, $t1, $t4
    ctx->pc = 0x1ab368u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 12));
    // 0x1ab36c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1ab36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ab370: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x1ab370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1ab374: 0x24070052  addiu       $a3, $zero, 0x52
    ctx->pc = 0x1ab374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1ab378: 0x24080053  addiu       $t0, $zero, 0x53
    ctx->pc = 0x1ab378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1ab37c: 0xfdc40050  sd          $a0, 0x50($t6)
    ctx->pc = 0x1ab37cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 80), GPR_U64(ctx, 4));
    // 0x1ab380: 0xfdc50000  sd          $a1, 0x0($t6)
    ctx->pc = 0x1ab380u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 5));
    // 0x1ab384: 0xfdcb0008  sd          $t3, 0x8($t6)
    ctx->pc = 0x1ab384u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 11));
    // 0x1ab388: 0xfdc60010  sd          $a2, 0x10($t6)
    ctx->pc = 0x1ab388u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 16), GPR_U64(ctx, 6));
    // 0x1ab38c: 0xfdc20018  sd          $v0, 0x18($t6)
    ctx->pc = 0x1ab38cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 24), GPR_U64(ctx, 2));
    // 0x1ab390: 0xfdc90020  sd          $t1, 0x20($t6)
    ctx->pc = 0x1ab390u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 32), GPR_U64(ctx, 9));
    // 0x1ab394: 0xfdc30028  sd          $v1, 0x28($t6)
    ctx->pc = 0x1ab394u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 40), GPR_U64(ctx, 3));
    // 0x1ab398: 0xfdca0030  sd          $t2, 0x30($t6)
    ctx->pc = 0x1ab398u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 48), GPR_U64(ctx, 10));
    // 0x1ab39c: 0xfdc70038  sd          $a3, 0x38($t6)
    ctx->pc = 0x1ab39cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 56), GPR_U64(ctx, 7));
    // 0x1ab3a0: 0xfdc80048  sd          $t0, 0x48($t6)
    ctx->pc = 0x1ab3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 72), GPR_U64(ctx, 8));
    // 0x1ab3a4: 0xfdc00040  sd          $zero, 0x40($t6)
    ctx->pc = 0x1ab3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 64), GPR_U64(ctx, 0));
    // 0x1ab3a8: 0xf  sync
    ctx->pc = 0x1ab3a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ab3ac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ab3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x1ab3b0u;
}
