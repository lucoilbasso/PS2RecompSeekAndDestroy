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

// Function: entry_00190c24
// Address: 0x190c24 - 0x190d38
void entry_00190c24_0x190c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190c24_0x190c24");
#endif

    switch (ctx->pc) {
        case 0x190d2cu: goto label_190d2c;
        default: break;
    }

    ctx->pc = 0x190c24u;

    // 0x190c24: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x190c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x190c28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x190c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x190c2c: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x190c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x190c30: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x190c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x190c34: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x190c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c38: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x190c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x190c3c: 0x31ff8  dsll        $v1, $v1, 31
    ctx->pc = 0x190c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 31);
    // 0x190c40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x190c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x190c44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x190c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x190c48: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x190c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x190c4c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x190c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x190c50: 0x3463242e  ori         $v1, $v1, 0x242E
    ctx->pc = 0x190c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9262);
    // 0x190c54: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x190c54u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x190c58: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190c58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190c5c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x190c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x190c60: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x190c60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190c68: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190c68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190c6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x190c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190c70: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x190c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c74: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x190c74u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x190c78: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x190c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c7c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x190c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x190c80: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190c80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190c84: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x190c84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x190c88: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x190c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c8c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190c8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190c90: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x190c90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x190c94: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x190c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190c98: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x190c98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c9c: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x190c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190ca0: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190ca0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190ca4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x190ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x190ca8: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x190ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190cac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x190cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x190cb0: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190cb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190cb4: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x190cb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x190cb8: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x190cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x190cbc: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x190cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x190cc0: 0x7a620250  lq          $v0, 0x250($s3)
    ctx->pc = 0x190cc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 592)));
    // 0x190cc4: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x190cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190cc8: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x190cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190ccc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x190cccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x190cd0: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x190cd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x190cd4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x190cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x190cd8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x190cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x190cdc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x190cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x190ce0: 0x7a630260  lq          $v1, 0x260($s3)
    ctx->pc = 0x190ce0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x190ce4: 0x1651023  subu        $v0, $t3, $a1
    ctx->pc = 0x190ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x190ce8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x190ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x190cec: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x190cecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x190cf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x190cf4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x190cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x190cf8: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x190cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x190cfc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x190cfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x190d00: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x190d00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x190d04: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x190d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x190d08: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x190d08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x190d0c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x190d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x190d10: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x190d10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x190d14: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x190d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x190d18: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x190d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x190d1c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x190d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x190d20: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x190d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x190d24: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x190D24u;
    SET_GPR_U32(ctx, 31, 0x190D2Cu);
    ctx->pc = 0x190D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190D24u;
    // 0x190d28: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x190D24u, 0x190D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D2Cu;
label_190d2c:
    // 0x190d2c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x190d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x190d30: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x190d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x190d34: 0x0  nop
    ctx->pc = 0x190d34u;
    // NOP
    ctx->pc = 0x190d38u;
}
