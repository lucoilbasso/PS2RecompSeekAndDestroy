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

// Function: entry_0012b760
// Address: 0x12b760 - 0x12b858
void entry_0012b760_0x12b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b760_0x12b760");
#endif

    ctx->pc = 0x12b760u;

    // 0x12b760: 0xafb000f4  sw          $s0, 0xF4($sp)
    ctx->pc = 0x12b760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 16));
    // 0x12b764: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x12b764u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x12b768: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x12b768u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x12b76c: 0x35298005  ori         $t1, $t1, 0x8005
    ctx->pc = 0x12b76cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32773);
    // 0x12b770: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x12b770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x12b774: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x12b774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12b778: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x12b778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12b77c: 0x3c0b0007  lui         $t3, 0x7
    ctx->pc = 0x12b77cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)7 << 16));
    // 0x12b780: 0x356b000d  ori         $t3, $t3, 0xD
    ctx->pc = 0x12b780u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)13);
    // 0x12b784: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x12b784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x12b788: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x12b788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12b78c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x12b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12b790: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x12b790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x12b794: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x12b794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x12b798: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x12b798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x12b79c: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x12b79cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x12b7a0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x12b7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x12b7a4: 0xfc490000  sd          $t1, 0x0($v0)
    ctx->pc = 0x12b7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 9));
    // 0x12b7a8: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x12b7a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12b7ac: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x12b7acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x12b7b0: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x12b7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12b7b4: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x12b7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x12b7b8: 0x240b0060  addiu       $t3, $zero, 0x60
    ctx->pc = 0x12b7b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12b7bc: 0x24680030  addiu       $t0, $v1, 0x30
    ctx->pc = 0x12b7bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12b7c0: 0x240a004e  addiu       $t2, $zero, 0x4E
    ctx->pc = 0x12b7c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x12b7c4: 0xdf848c90  ld          $a0, -0x7370($gp)
    ctx->pc = 0x12b7c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x12b7c8: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x12b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x12b7cc: 0xfd0a0008  sd          $t2, 0x8($t0)
    ctx->pc = 0x12b7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 10));
    // 0x12b7d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12b7d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7d4: 0xfd040000  sd          $a0, 0x0($t0)
    ctx->pc = 0x12b7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 4));
    // 0x12b7d8: 0x246c0050  addiu       $t4, $v1, 0x50
    ctx->pc = 0x12b7d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x12b7dc: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x12b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x12b7e0: 0x246d0060  addiu       $t5, $v1, 0x60
    ctx->pc = 0x12b7e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x12b7e4: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x12b7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x12b7e8: 0x240e0006  addiu       $t6, $zero, 0x6
    ctx->pc = 0x12b7e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12b7ec: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x12b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x12b7f0: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x12b7f0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7f4: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x12b7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x12b7f8: 0x27be00a0  addiu       $fp, $sp, 0xA0
    ctx->pc = 0x12b7f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12b7fc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12b7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x12b800: 0x27af00b0  addiu       $t7, $sp, 0xB0
    ctx->pc = 0x12b800u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12b804: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x12b804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x12b808: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x12b808u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12b80c: 0xfd8b0000  sd          $t3, 0x0($t4)
    ctx->pc = 0x12b80cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 11));
    // 0x12b810: 0x27ab0080  addiu       $t3, $sp, 0x80
    ctx->pc = 0x12b810u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12b814: 0xfd870008  sd          $a3, 0x8($t4)
    ctx->pc = 0x12b814u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 7));
    // 0x12b818: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x12b818u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b81c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12b81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12b820: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12b820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12b824: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x12b824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x12b828: 0x8e2400d0  lw          $a0, 0xD0($s1)
    ctx->pc = 0x12b828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x12b82c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x12b82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x12b830: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x12b830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12b834: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x12b834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x12b838: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x12b838u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12b83c: 0x94850030  lhu         $a1, 0x30($a0)
    ctx->pc = 0x12b83cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x12b840: 0xdc820038  ld          $v0, 0x38($a0)
    ctx->pc = 0x12b840u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x12b844: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x12b844u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x12b848: 0xfdae0008  sd          $t6, 0x8($t5)
    ctx->pc = 0x12b848u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 14));
    // 0x12b84c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x12b84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x12b850: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12b850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12b854: 0xfda20000  sd          $v0, 0x0($t5)
    ctx->pc = 0x12b854u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x12b858u;
}
