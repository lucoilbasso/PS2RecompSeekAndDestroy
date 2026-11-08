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

// Function: entry_0014edc0
// Address: 0x14edc0 - 0x14ee80
void entry_0014edc0_0x14edc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014edc0_0x14edc0");
#endif

    ctx->pc = 0x14edc0u;

label_14edc0:
    // 0x14edc0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14edc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14edc4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14edc8: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x14edc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x14edcc: 0xe460fffc  swc1        $f0, -0x4($v1)
    ctx->pc = 0x14edccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    // 0x14edd0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x14edd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14edd4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x14edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x14edd8: 0x46018042  mul.s       $f1, $f16, $f1
    ctx->pc = 0x14edd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x14eddc: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x14eddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14ede0: 0x481fff7  bgez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14EDE0u;
    {
        const bool branch_taken_0x14ede0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x14EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EDE0u;
        // 0x14ede4: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ede0) {
            ctx->pc = 0x14EDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14edc0;
        }
    }
    ctx->pc = 0x14EDE8u;
    // 0x14ede8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ede8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14edec: 0x260803b0  addiu       $t0, $s0, 0x3B0
    ctx->pc = 0x14edecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    // 0x14edf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14edf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14edf4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14edf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14edf8: 0x260603e0  addiu       $a2, $s0, 0x3E0
    ctx->pc = 0x14edf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
    // 0x14edfc: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x14edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x14ee00: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x14ee00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x14ee04: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x14ee04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x14ee08: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x14ee08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x14ee0c: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x14ee0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x14ee10: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x14ee10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x14ee14: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x14ee14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x14ee18: 0xe500001c  swc1        $f0, 0x1C($t0)
    ctx->pc = 0x14ee18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x14ee1c: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x14ee1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x14ee20: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14ee20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ee24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14ee24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14ee28: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x14ee28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14ee2c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14ee2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14ee30: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14ee30u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14ee34: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14ee34u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14ee38: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14ee38u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14ee3c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14ee3cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14ee40: 0xe5000040  swc1        $f0, 0x40($t0)
    ctx->pc = 0x14ee40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 64), bits); }
    // 0x14ee44: 0x26020400  addiu       $v0, $s0, 0x400
    ctx->pc = 0x14ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x14ee48: 0xe5000044  swc1        $f0, 0x44($t0)
    ctx->pc = 0x14ee48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 68), bits); }
    // 0x14ee4c: 0xad000048  sw          $zero, 0x48($t0)
    ctx->pc = 0x14ee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 0));
    // 0x14ee50: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x14ee50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ee54: 0xe5000060  swc1        $f0, 0x60($t0)
    ctx->pc = 0x14ee54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 96), bits); }
    // 0x14ee58: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x14ee58u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x14ee5c: 0xe5000064  swc1        $f0, 0x64($t0)
    ctx->pc = 0x14ee5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 100), bits); }
    // 0x14ee60: 0x260a0600  addiu       $t2, $s0, 0x600
    ctx->pc = 0x14ee60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x14ee64: 0xe5000068  swc1        $f0, 0x68($t0)
    ctx->pc = 0x14ee64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 104), bits); }
    // 0x14ee68: 0x260905b0  addiu       $t1, $s0, 0x5B0
    ctx->pc = 0x14ee68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
    // 0x14ee6c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14ee6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14ee70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14ee70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ee74: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x14ee74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee78: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x14ee78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14ee7c: 0x0  nop
    ctx->pc = 0x14ee7cu;
    // NOP
    ctx->pc = 0x14ee80u;
}
