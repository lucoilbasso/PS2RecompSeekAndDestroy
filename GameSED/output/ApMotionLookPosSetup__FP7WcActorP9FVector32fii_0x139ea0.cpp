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

// Function: ApMotionLookPosSetup__FP7WcActorP9FVector32fii
// Address: 0x139ea0 - 0x139fa0
void ApMotionLookPosSetup__FP7WcActorP9FVector32fii_0x139ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionLookPosSetup__FP7WcActorP9FVector32fii_0x139ea0");
#endif

    switch (ctx->pc) {
        case 0x139ef8u: goto label_139ef8;
        case 0x139f0cu: goto label_139f0c;
        case 0x139f20u: goto label_139f20;
        default: break;
    }

    ctx->pc = 0x139ea0u;

    // 0x139ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x139ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x139ea4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x139ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x139ea8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x139ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139eac: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x139eacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
    // 0x139eb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x139eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x139eb4: 0x26109cd0  addiu       $s0, $s0, -0x6330
    ctx->pc = 0x139eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941904));
    // 0x139eb8: 0x3c120020  lui         $s2, 0x20
    ctx->pc = 0x139eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32 << 16));
    // 0x139ebc: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x139ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x139ec0: 0x8e52c460  lw          $s2, -0x3BA0($s2)
    ctx->pc = 0x139ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952032)));
    // 0x139ec4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x139ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x139ec8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x139ec8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ecc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x139eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x139ed0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x139ed0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ed4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x139ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x139ed8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x139ed8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139edc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x139edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ee0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x139ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ee4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x139ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139ee8: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x139ee8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x139eec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x139eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x139ef0: 0xc04e530  jal         func_1394C0
    ctx->pc = 0x139EF0u;
    SET_GPR_U32(ctx, 31, 0x139EF8u);
    ctx->pc = 0x139EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139EF0u;
    // 0x139ef4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1394C0u, 0x139EF0u, 0x139EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139EF8u;
label_139ef8:
    // 0x139ef8: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x139ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x139efc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x139efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f00: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x139f00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139f04: 0xc06164c  jal         func_185930
    ctx->pc = 0x139F04u;
    SET_GPR_U32(ctx, 31, 0x139F0Cu);
    ctx->pc = 0x139F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139F04u;
    // 0x139f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x139F04u, 0x139F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F0Cu;
label_139f0c:
    // 0x139f0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x139f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x139f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f18: 0xc068866  jal         func_1A2198
    ctx->pc = 0x139F18u;
    SET_GPR_U32(ctx, 31, 0x139F20u);
    ctx->pc = 0x139F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139F18u;
    // 0x139f1c: 0x24070024  addiu       $a3, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x139F18u, 0x139F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F20u;
label_139f20:
    // 0x139f20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x139f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x139f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f28: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x139f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x139f2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x139f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x139f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x139f34: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x139f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x139f38: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139F38u;
    {
        const bool branch_taken_0x139f38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x139F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F38u;
        // 0x139f3c: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f38) {
            ctx->pc = 0x139F48u;
            goto label_139f48;
        }
    }
    ctx->pc = 0x139F40u;
    // 0x139f40: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x139f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x139f44: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x139f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_139f48:
    // 0x139f48: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x139f48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x139f4c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x139f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x139f50: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x139f50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x139f54: 0xacb30010  sw          $s3, 0x10($a1)
    ctx->pc = 0x139f54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 19));
    // 0x139f58: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x139f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x139f5c: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x139f5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x139f60: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x139f60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x139f64: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x139f64u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139f68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x139f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x139f6c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x139f6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x139f70: 0xe4940018  swc1        $f20, 0x18($a0)
    ctx->pc = 0x139f70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x139f74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139f78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x139f78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139f7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x139f7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139f80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x139f80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139f84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x139f84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139f88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x139f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139f8c: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x139f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x139f90: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x139f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x139f94: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x139f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x139f98: 0x3e00008  jr          $ra
    ctx->pc = 0x139F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F98u;
        // 0x139f9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139FA0u;
}
