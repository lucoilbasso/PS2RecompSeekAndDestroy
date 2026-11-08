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

// Function: GetGroundHeight__7ApcUnitb
// Address: 0x14be88 - 0x14c0b4
void GetGroundHeight__7ApcUnitb_0x14be88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGroundHeight__7ApcUnitb_0x14be88");
#endif

    switch (ctx->pc) {
        case 0x14bee8u: goto label_14bee8;
        default: break;
    }

    ctx->pc = 0x14be88u;

    // 0x14be88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14be88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14be8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14be8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14be90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14be90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14be94: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14be98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14be98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14be9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14be9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14bea0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14bea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14bea4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14bea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x14bea8: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x14bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x14beac: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x14beacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x14beb0: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x14BEB0u;
    {
        const bool branch_taken_0x14beb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BEB0u;
        // 0x14beb4: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14beb0) {
            ctx->pc = 0x14C088u;
            goto label_14c088;
        }
    }
    ctx->pc = 0x14BEB8u;
    // 0x14beb8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x14beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x14bebc: 0x26300200  addiu       $s0, $s1, 0x200
    ctx->pc = 0x14bebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x14bec0: 0x8e320170  lw          $s2, 0x170($s1)
    ctx->pc = 0x14bec0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x14bec4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14bec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bec8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14becc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14beccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bed0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x14bed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x14bed4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x14bed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14bed8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14bed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bedc: 0x247300d0  addiu       $s3, $v1, 0xD0
    ctx->pc = 0x14bedcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x14bee0: 0xc05129a  jal         func_144A68
    ctx->pc = 0x14BEE0u;
    SET_GPR_U32(ctx, 31, 0x14BEE8u);
    ctx->pc = 0x14BEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BEE0u;
    // 0x14bee4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x14BEE0u, 0x14BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BEE8u;
label_14bee8:
    // 0x14bee8: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x14bee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x14beec: 0xe62001e8  swc1        $f0, 0x1E8($s1)
    ctx->pc = 0x14beecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 488), bits); }
    // 0x14bef0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x14bef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14bef4: 0x24844020  addiu       $a0, $a0, 0x4020
    ctx->pc = 0x14bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16416));
    // 0x14bef8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x14bef8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14befc: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x14befcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x14bf00: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x14bf00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14bf04: 0xc62101e8  lwc1        $f1, 0x1E8($s1)
    ctx->pc = 0x14bf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bf08: 0xfe230208  sd          $v1, 0x208($s1)
    ctx->pc = 0x14bf08u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 520), GPR_U64(ctx, 3));
    // 0x14bf0c: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x14bf0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14bf10: 0xfe220210  sd          $v0, 0x210($s1)
    ctx->pc = 0x14bf10u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 528), GPR_U64(ctx, 2));
    // 0x14bf14: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x14bf14u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x14bf18: 0xfe230218  sd          $v1, 0x218($s1)
    ctx->pc = 0x14bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 536), GPR_U64(ctx, 3));
    // 0x14bf1c: 0xdc820020  ld          $v0, 0x20($a0)
    ctx->pc = 0x14bf1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14bf20: 0xfe220220  sd          $v0, 0x220($s1)
    ctx->pc = 0x14bf20u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 544), GPR_U64(ctx, 2));
    // 0x14bf24: 0xdc830028  ld          $v1, 0x28($a0)
    ctx->pc = 0x14bf24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x14bf28: 0xae2501f8  sw          $a1, 0x1F8($s1)
    ctx->pc = 0x14bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 5));
    // 0x14bf2c: 0xfe230228  sd          $v1, 0x228($s1)
    ctx->pc = 0x14bf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 552), GPR_U64(ctx, 3));
    // 0x14bf30: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x14bf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bf34: 0x8e430328  lw          $v1, 0x328($s2)
    ctx->pc = 0x14bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x14bf38: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14bf38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14bf3c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14bf3cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14bf40: 0xe62001e0  swc1        $f0, 0x1E0($s1)
    ctx->pc = 0x14bf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 480), bits); }
    // 0x14bf44: 0x9062402c  lbu         $v0, 0x402C($v1)
    ctx->pc = 0x14bf44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16428)));
    // 0x14bf48: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x14BF48u;
    {
        const bool branch_taken_0x14bf48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bf48) {
            ctx->pc = 0x14BF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BF48u;
            // 0x14bf4c: 0x8c62402c  lw          $v0, 0x402C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BF54u;
            goto label_14bf54;
        }
    }
    ctx->pc = 0x14BF50u;
    // 0x14bf50: 0x8c624018  lw          $v0, 0x4018($v1)
    ctx->pc = 0x14bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16408)));
label_14bf54:
    // 0x14bf54: 0xae2201ec  sw          $v0, 0x1EC($s1)
    ctx->pc = 0x14bf54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 2));
    // 0x14bf58: 0x262501d0  addiu       $a1, $s1, 0x1D0
    ctx->pc = 0x14bf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    // 0x14bf5c: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x14bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x14bf60: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x14bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x14bf64: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x14bf64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14bf68: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x14bf68u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x14bf6c: 0x922301ed  lbu         $v1, 0x1ED($s1)
    ctx->pc = 0x14bf6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 493)));
    // 0x14bf70: 0x246300f7  addiu       $v1, $v1, 0xF7
    ctx->pc = 0x14bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 247));
    // 0x14bf74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14bf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14bf78: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x14bf78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14bf7c: 0x5060003e  beql        $v1, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x14BF7Cu;
    {
        const bool branch_taken_0x14bf7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bf7c) {
            ctx->pc = 0x14BF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BF7Cu;
            // 0x14bf80: 0xc62001e0  lwc1        $f0, 0x1E0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C078u;
            goto label_14c078;
        }
    }
    ctx->pc = 0x14BF84u;
    // 0x14bf84: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x14bf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bf88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14bf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf8c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14bf8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x14bf90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14bf90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bf94: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x14bf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x14bf98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14bf98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14bf9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14bf9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14bfa0: 0x8e450328  lw          $a1, 0x328($s2)
    ctx->pc = 0x14bfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x14bfa4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14bfa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14bfa8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14bfa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14bfac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14bfacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14bfb0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14BFB0u;
    {
        const bool branch_taken_0x14bfb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BFB0u;
        // 0x14bfb4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bfb0) {
            ctx->pc = 0x14BFCCu;
            goto label_14bfcc;
        }
    }
    ctx->pc = 0x14BFB8u;
    // 0x14bfb8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x14bfb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x14bfbc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14bfc0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14bfc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14bfc4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14bfc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14bfc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14bfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14bfcc:
    // 0x14bfcc: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14bfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x14bfd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14bfd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14bfd4: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x14bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x14bfd8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x14bfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bfdc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x14bfdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x14bfe0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14bfe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14bfe4: 0x2446ffc0  addiu       $a2, $v0, -0x40
    ctx->pc = 0x14bfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x14bfe8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14bfe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14bfec: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14bfecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14bff0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14bff0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14bff4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14bff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14bff8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x14BFF8u;
    {
        const bool branch_taken_0x14bff8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BFF8u;
        // 0x14bffc: 0x31142  srl         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bff8) {
            ctx->pc = 0x14C018u;
            goto label_14c018;
        }
    }
    ctx->pc = 0x14C000u;
    // 0x14c000: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x14c000u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x14c004: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14c004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14c008: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14c008u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14c00c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14c00cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14c010: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14c010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14c014: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x14c014u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_14c018:
    // 0x14c018: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x14c018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x14c01c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x14c01cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14c020: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x14c020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x14c024: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14c024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14c028: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x14c028u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x14c02c: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x14c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x14c030: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14c030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14c034: 0x2c630080  sltiu       $v1, $v1, 0x80
    ctx->pc = 0x14c034u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x14c038: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C038u;
    {
        const bool branch_taken_0x14c038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c038) {
            ctx->pc = 0x14C03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C038u;
            // 0x14c03c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C050u;
            goto label_14c050;
        }
    }
    ctx->pc = 0x14C040u;
    // 0x14c040: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x14c040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x14c044: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x14c044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x14c048: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x14c048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14c04c: 0x90422040  lbu         $v0, 0x2040($v0)
    ctx->pc = 0x14c04cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8256)));
label_14c050:
    // 0x14c050: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x14c050u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x14c054: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C054u;
    {
        const bool branch_taken_0x14c054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C054u;
        // 0x14c058: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c054) {
            ctx->pc = 0x14C068u;
            goto label_14c068;
        }
    }
    ctx->pc = 0x14C05Cu;
    // 0x14c05c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14c060: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14C060u;
    {
        const bool branch_taken_0x14c060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C060u;
        // 0x14c064: 0xc4414000  lwc1        $f1, 0x4000($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c060) {
            ctx->pc = 0x14C06Cu;
            goto label_14c06c;
        }
    }
    ctx->pc = 0x14C068u;
label_14c068:
    // 0x14c068: 0xc4a14004  lwc1        $f1, 0x4004($a1)
    ctx->pc = 0x14c068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c06c:
    // 0x14c06c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x14c06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c070: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14c070u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14c074: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14c074u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_14c078:
    // 0x14c078: 0xe62001e4  swc1        $f0, 0x1E4($s1)
    ctx->pc = 0x14c078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 484), bits); }
    // 0x14c07c: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x14c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x14c080: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x14c080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x14c084: 0xae220184  sw          $v0, 0x184($s1)
    ctx->pc = 0x14c084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
label_14c088:
    // 0x14c088: 0x56800002  bnel        $s4, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x14C088u;
    {
        const bool branch_taken_0x14c088 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c088) {
            ctx->pc = 0x14C08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C088u;
            // 0x14c08c: 0xc62001e4  lwc1        $f0, 0x1E4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C094u;
            goto label_14c094;
        }
    }
    ctx->pc = 0x14C090u;
    // 0x14c090: 0xc62001e0  lwc1        $f0, 0x1E0($s1)
    ctx->pc = 0x14c090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c094:
    // 0x14c094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14c094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c098: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14c098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14c09c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14c09cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c0a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14c0a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c0a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14c0a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c0a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x14c0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x14C0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0ACu;
        // 0x14c0b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C0B4u;
}
