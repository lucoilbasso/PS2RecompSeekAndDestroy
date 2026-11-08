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

// Function: entry_00190b34
// Address: 0x190b34 - 0x190c08
void entry_00190b34_0x190b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190b34_0x190b34");
#endif

    ctx->pc = 0x190b34u;

    // 0x190b34: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x190b34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190b38: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190b38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190b3c: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x190b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x190b40: 0x3484000d  ori         $a0, $a0, 0xD
    ctx->pc = 0x190b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    // 0x190b44: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x190b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x190b48: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x190b48u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x190b4c: 0x24040056  addiu       $a0, $zero, 0x56
    ctx->pc = 0x190b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x190b50: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x190b50u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x190b54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x190b54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190b58: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x190b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x190b5c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x190b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x190b60: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x190b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190b64: 0x25670010  addiu       $a3, $t3, 0x10
    ctx->pc = 0x190b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190b68: 0xfd650008  sd          $a1, 0x8($t3)
    ctx->pc = 0x190b68u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 5));
    // 0x190b6c: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x190b6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x190b70: 0xa537c  dsll32      $t2, $t2, 13
    ctx->pc = 0x190b70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 13));
    // 0x190b74: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x190b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x190b78: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x190b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x190b7c: 0xc2180a  movz        $v1, $a2, $v0
    ctx->pc = 0x190b7cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x190b80: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x190b80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x190b84: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x190b84u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
    // 0x190b88: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x190b88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x190b8c: 0x16e1023  subu        $v0, $t3, $t6
    ctx->pc = 0x190b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x190b90: 0x240c0016  addiu       $t4, $zero, 0x16
    ctx->pc = 0x190b90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x190b94: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x190b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x190b98: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x190b98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x190b9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x190ba0: 0xfce80008  sd          $t0, 0x8($a3)
    ctx->pc = 0x190ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 8));
    // 0x190ba4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x190ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x190ba8: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x190ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x190bac: 0xfdc90008  sd          $t1, 0x8($t6)
    ctx->pc = 0x190bacu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 9));
    // 0x190bb0: 0x8d600b  movn        $t4, $a0, $t5
    ctx->pc = 0x190bb0u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x190bb4: 0xfdc20000  sd          $v0, 0x0($t6)
    ctx->pc = 0x190bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 2));
    // 0x190bb8: 0x1863025  or          $a2, $t4, $a2
    ctx->pc = 0x190bb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) | GPR_U64(ctx, 6));
    // 0x190bbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x190bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190bc0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x190bc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190bc4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x190bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x190bc8: 0x8e650270  lw          $a1, 0x270($s3)
    ctx->pc = 0x190bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
    // 0x190bcc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x190bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x190bd0: 0xc2600a  movz        $t4, $a2, $v0
    ctx->pc = 0x190bd0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 6));
    // 0x190bd4: 0x14a4000c  bne         $a1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x190BD4u;
    {
        const bool branch_taken_0x190bd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x190BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BD4u;
        // 0x190bd8: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190bd4) {
            ctx->pc = 0x190C08u;
            return;
        }
    }
    ctx->pc = 0x190BDCu;
    // 0x190bdc: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x190bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x190be0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190be4: 0x93a30023  lbu         $v1, 0x23($sp)
    ctx->pc = 0x190be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
    // 0x190be8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x190be8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x190bec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x190becu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x190bf0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x190bf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x190bf4: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x190bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x190bf8: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x190bf8u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x190bfc: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x190bfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x190c00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x190C00u;
    {
        const bool branch_taken_0x190c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C00u;
        // 0x190c04: 0xa3a30023  sb          $v1, 0x23($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190c00) {
            ctx->pc = 0x190C20u;
            return;
        }
    }
    ctx->pc = 0x190C08u;
}
