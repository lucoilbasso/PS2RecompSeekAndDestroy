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

// Function: entry_0013db3c
// Address: 0x13db3c - 0x13dc60
void entry_0013db3c_0x13db3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013db3c_0x13db3c");
#endif

    ctx->pc = 0x13db3cu;

    // 0x13db3c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x13db3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db40: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x13db40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x13db44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13db44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db48: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x13db48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x13db4c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x13db4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x13db50: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x13db50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x13db54: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x13db54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x13db58: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x13db58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x13db5c: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x13db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x13db60: 0x3c070020  lui         $a3, 0x20
    ctx->pc = 0x13db60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32 << 16));
    // 0x13db64: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x13db64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x13db68: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x13db68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x13db6c: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x13db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x13db70: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x13db70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x13db74: 0x3484000d  ori         $a0, $a0, 0xD
    ctx->pc = 0x13db74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    // 0x13db78: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13db78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db7c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x13db7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x13db80: 0x90e2c478  lbu         $v0, -0x3B88($a3)
    ctx->pc = 0x13db80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x1FC478u));
    // 0x13db84: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x13db84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13db88: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x13db88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x13db8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13db8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13db90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13db90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13db94: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x13db94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x13db98: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x13db98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13db9c: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x13db9cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x13dba0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x13dba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13dba4: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x13dba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x13dba8: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x13dba8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x13dbac: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x13dbacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x13dbb0: 0xfe450008  sd          $a1, 0x8($s2)
    ctx->pc = 0x13dbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x13dbb4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x13dbb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x13dbb8: 0x2491023  subu        $v0, $s2, $t1
    ctx->pc = 0x13dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x13dbbc: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x13dbbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x13dbc0: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x13dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x13dbc4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x13dbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13dbc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13dbcc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x13dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13dbd0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x13dbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x13dbd4: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x13dbd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x13dbd8: 0x34e7c000  ori         $a3, $a3, 0xC000
    ctx->pc = 0x13dbd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)49152);
    // 0x13dbdc: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x13dbdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x13dbe0: 0x34e78001  ori         $a3, $a3, 0x8001
    ctx->pc = 0x13dbe0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32769);
    // 0x13dbe4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13dbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13dbe8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x13dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x13dbec: 0x2408444e  addiu       $t0, $zero, 0x444E
    ctx->pc = 0x13dbecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17486));
    // 0x13dbf0: 0xfd2a0008  sd          $t2, 0x8($t1)
    ctx->pc = 0x13dbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 10));
    // 0x13dbf4: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x13dbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x13dbf8: 0x2484ebb0  addiu       $a0, $a0, -0x1450
    ctx->pc = 0x13dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962096));
    // 0x13dbfc: 0xafb000d4  sw          $s0, 0xD4($sp)
    ctx->pc = 0x13dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 16));
    // 0x13dc00: 0x2463ec70  addiu       $v1, $v1, -0x1390
    ctx->pc = 0x13dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x13dc04: 0xfcc70000  sd          $a3, 0x0($a2)
    ctx->pc = 0x13dc04u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
    // 0x13dc08: 0xffa80058  sd          $t0, 0x58($sp)
    ctx->pc = 0x13dc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 8));
    // 0x13dc0c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x13dc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x13dc10: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x13dc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x13dc14: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x13dc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
    // 0x13dc18: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x13dc18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13dc1c: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x13dc1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13dc20: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x13dc20u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x13dc24: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x13dc24u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x13dc28: 0xd8d20000  lqc2        $vf18, 0x0($a2)
    ctx->pc = 0x13dc28u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13dc2c: 0xd8b30000  lqc2        $vf19, 0x0($a1)
    ctx->pc = 0x13dc2cu;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13dc30: 0xd8740000  lqc2        $vf20, 0x0($v1)
    ctx->pc = 0x13dc30u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(FAST_READ128(0x21EC70u));
    // 0x13dc34: 0xd8750010  lqc2        $vf21, 0x10($v1)
    ctx->pc = 0x13dc34u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(FAST_READ128(0x21EC80u));
    // 0x13dc38: 0xd8760020  lqc2        $vf22, 0x20($v1)
    ctx->pc = 0x13dc38u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(FAST_READ128(0x21EC90u));
    // 0x13dc3c: 0xd8770030  lqc2        $vf23, 0x30($v1)
    ctx->pc = 0x13dc3cu;
    ctx->vu0_vf[23] = _mm_castsi128_ps(FAST_READ128(0x21ECA0u));
    // 0x13dc40: 0x97c20002  lhu         $v0, 0x2($fp)
    ctx->pc = 0x13dc40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x13dc44: 0x104000ba  beqz        $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x13DC44u;
    {
        const bool branch_taken_0x13dc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC44u;
        // 0x13dc48: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc44) {
            ctx->pc = 0x13DF30u;
            return;
        }
    }
    ctx->pc = 0x13DC4Cu;
    // 0x13dc4c: 0x266200a0  addiu       $v0, $s3, 0xA0
    ctx->pc = 0x13dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x13dc50: 0xafb100d8  sw          $s1, 0xD8($sp)
    ctx->pc = 0x13dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 17));
    // 0x13dc54: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x13dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x13dc58: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x13dc58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc5c: 0x0  nop
    ctx->pc = 0x13dc5cu;
    // NOP
    ctx->pc = 0x13dc60u;
}
