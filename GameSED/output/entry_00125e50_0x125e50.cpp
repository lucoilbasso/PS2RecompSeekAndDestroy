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

// Function: entry_00125e50
// Address: 0x125e50 - 0x125f58
void entry_00125e50_0x125e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125e50_0x125e50");
#endif

    switch (ctx->pc) {
        case 0x125ee0u: goto label_125ee0;
        default: break;
    }

    ctx->pc = 0x125e50u;

    // 0x125e50: 0x161180  sll         $v0, $s6, 6
    ctx->pc = 0x125e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x125e54: 0x8c8901b0  lw          $t1, 0x1B0($a0)
    ctx->pc = 0x125e54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x125e58: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x125e58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x125e5c: 0x25230010  addiu       $v1, $t1, 0x10
    ctx->pc = 0x125e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x125e60: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x125e60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x125e64: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x125e64u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
    // 0x125e68: 0x8d2a0020  lw          $t2, 0x20($t1)
    ctx->pc = 0x125e68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x125e6c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x125e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x125e70: 0xc5220024  lwc1        $f2, 0x24($t1)
    ctx->pc = 0x125e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125e74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e78: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x125e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125e7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e80: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x125e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125e84: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x125e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e88: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x125e88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x125e8c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x125e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125e90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x125e90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125e94: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x125e94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x125e98: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x125e98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x125e9c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x125e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x125ea0: 0xc5220024  lwc1        $f2, 0x24($t1)
    ctx->pc = 0x125ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125ea4: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x125ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125ea8: 0xc5210014  lwc1        $f1, 0x14($t1)
    ctx->pc = 0x125ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125eac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x125eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x125eb0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x125eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x125eb4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x125eb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x125eb8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x125eb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x125ebc: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x125ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125ec0: 0xc5220024  lwc1        $f2, 0x24($t1)
    ctx->pc = 0x125ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125ec4: 0xc5210018  lwc1        $f1, 0x18($t1)
    ctx->pc = 0x125ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125ec8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x125ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x125ecc: 0xe7b5007c  swc1        $f21, 0x7C($sp)
    ctx->pc = 0x125eccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x125ed0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x125ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x125ed4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x125ed4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x125ed8: 0xc06f120  jal         func_1BC480
    ctx->pc = 0x125ED8u;
    SET_GPR_U32(ctx, 31, 0x125EE0u);
    ctx->pc = 0x125EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125ED8u;
    // 0x125edc: 0xe7a10078  swc1        $f1, 0x78($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC480u, 0x125ED8u, 0x125EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125EE0u;
label_125ee0:
    // 0x125ee0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x125ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125ee4: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x125ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x125ee8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x125ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125eec: 0x3484f000  ori         $a0, $a0, 0xF000
    ctx->pc = 0x125eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
    // 0x125ef0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x125ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x125ef4: 0x24a5f000  addiu       $a1, $a1, -0x1000
    ctx->pc = 0x125ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963200));
    // 0x125ef8: 0x2442a000  addiu       $v0, $v0, -0x6000
    ctx->pc = 0x125ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942720));
    // 0x125efc: 0x85882b  sltu        $s1, $a0, $a1
    ctx->pc = 0x125efcu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x125f00: 0x2c424001  sltiu       $v0, $v0, 0x4001
    ctx->pc = 0x125f00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x125f04: 0x24639c00  addiu       $v1, $v1, -0x6400
    ctx->pc = 0x125f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941696));
    // 0x125f08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125f0c: 0x2c633801  sltiu       $v1, $v1, 0x3801
    ctx->pc = 0x125f0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14337) ? 1 : 0);
    // 0x125f10: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x125f10u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x125f14: 0x83880a  movz        $s1, $a0, $v1
    ctx->pc = 0x125f14u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x125f18: 0x16200040  bnez        $s1, . + 4 + (0x40 << 2)
    ctx->pc = 0x125F18u;
    {
        const bool branch_taken_0x125f18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x125F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F18u;
        // 0x125f1c: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f18) {
            ctx->pc = 0x12601Cu;
            return;
        }
    }
    ctx->pc = 0x125F20u;
    // 0x125f20: 0x16a00035  bnez        $s5, . + 4 + (0x35 << 2)
    ctx->pc = 0x125F20u;
    {
        const bool branch_taken_0x125f20 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x125F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F20u;
        // 0x125f24: 0x7ba20040  lq          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f20) {
            ctx->pc = 0x125FF8u;
            return;
        }
    }
    ctx->pc = 0x125F28u;
    // 0x125f28: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x125f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x125f2c: 0x2472d650  addiu       $s2, $v1, -0x29B0
    ctx->pc = 0x125f2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x125f30: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x125f30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x125f34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x125F34u;
    {
        const bool branch_taken_0x125f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F34u;
        // 0x125f38: 0x8fb300f8  lw          $s3, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f34) {
            ctx->pc = 0x125F58u;
            return;
        }
    }
    ctx->pc = 0x125F3Cu;
    // 0x125f3c: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x125f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x125f40: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x125f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x125f44: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x125f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x125f48: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x125f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x125f4c: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x125f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x125f50: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x125F50u;
    {
        const bool branch_taken_0x125f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125F50u;
        // 0x125f54: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f50) {
            ctx->pc = 0x125F8Cu;
            return;
        }
    }
    ctx->pc = 0x125F58u;
}
