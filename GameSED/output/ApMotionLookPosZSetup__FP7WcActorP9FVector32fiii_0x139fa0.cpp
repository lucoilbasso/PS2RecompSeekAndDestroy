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

// Function: ApMotionLookPosZSetup__FP7WcActorP9FVector32fiii
// Address: 0x139fa0 - 0x13a0ac
void ApMotionLookPosZSetup__FP7WcActorP9FVector32fiii_0x139fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionLookPosZSetup__FP7WcActorP9FVector32fiii_0x139fa0");
#endif

    switch (ctx->pc) {
        case 0x13a000u: goto label_13a000;
        case 0x13a014u: goto label_13a014;
        case 0x13a028u: goto label_13a028;
        default: break;
    }

    ctx->pc = 0x139fa0u;

    // 0x139fa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x139fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x139fa4: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x139fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x139fa8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x139fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139fac: 0x3c110014  lui         $s1, 0x14
    ctx->pc = 0x139facu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)20 << 16));
    // 0x139fb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x139fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x139fb4: 0x26319cd0  addiu       $s1, $s1, -0x6330
    ctx->pc = 0x139fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941904));
    // 0x139fb8: 0x3c120020  lui         $s2, 0x20
    ctx->pc = 0x139fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32 << 16));
    // 0x139fbc: 0x2489021  addu        $s2, $s2, $t0
    ctx->pc = 0x139fbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x139fc0: 0x8e52c460  lw          $s2, -0x3BA0($s2)
    ctx->pc = 0x139fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952032)));
    // 0x139fc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x139fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x139fc8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x139fc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139fcc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x139fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x139fd0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x139fd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139fd4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x139fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x139fd8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x139fd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139fdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139fe0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x139fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x139fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139fe8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x139fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x139fec: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x139fecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ff0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x139ff0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x139ff4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x139ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x139ff8: 0xc04e530  jal         func_1394C0
    ctx->pc = 0x139FF8u;
    SET_GPR_U32(ctx, 31, 0x13A000u);
    ctx->pc = 0x139FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139FF8u;
    // 0x139ffc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1394C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1394C0u, 0x139FF8u, 0x13A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A000u;
label_13a000:
    // 0x13a000: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x13a000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x13a004: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13a004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a008: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x13a008u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a00c: 0xc06164c  jal         func_185930
    ctx->pc = 0x13A00Cu;
    SET_GPR_U32(ctx, 31, 0x13A014u);
    ctx->pc = 0x13A010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A00Cu;
    // 0x13a010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x13A00Cu, 0x13A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A014u;
label_13a014:
    // 0x13a014: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13a014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a01c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13a01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a020: 0xc068866  jal         func_1A2198
    ctx->pc = 0x13A020u;
    SET_GPR_U32(ctx, 31, 0x13A028u);
    ctx->pc = 0x13A024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A020u;
    // 0x13a024: 0x24070024  addiu       $a3, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x13A020u, 0x13A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A028u;
label_13a028:
    // 0x13a028: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13a028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a02c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a030: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x13a030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x13a034: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13a034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a038: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13a038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13a03c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13a040: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A040u;
    {
        const bool branch_taken_0x13a040 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A040u;
        // 0x13a044: 0x24430030  addiu       $v1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a040) {
            ctx->pc = 0x13A050u;
            goto label_13a050;
        }
    }
    ctx->pc = 0x13A048u;
    // 0x13a048: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x13a048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x13a04c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13a04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13a050:
    // 0x13a050: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x13a050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x13a054: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x13a054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x13a058: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x13a058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x13a05c: 0xacb30010  sw          $s3, 0x10($a1)
    ctx->pc = 0x13a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 19));
    // 0x13a060: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x13a060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x13a064: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x13a064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13a068: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x13a068u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x13a06c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x13a06cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a070: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13a070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13a074: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x13a074u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a078: 0xac950020  sw          $s5, 0x20($a0)
    ctx->pc = 0x13a078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 21));
    // 0x13a07c: 0xe4940018  swc1        $f20, 0x18($a0)
    ctx->pc = 0x13a07cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x13a080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13a080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a084: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13a084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13a088: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13a088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a08c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13a08cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13a090: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13a090u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a094: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13a094u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a098: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x13a098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13a09c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x13a09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13a0a0: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x13a0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x13a0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x13A0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A0A4u;
        // 0x13a0a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A0ACu;
}
