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

// Function: AppendCoordHitPoint__7WcActorP9FVector32fb
// Address: 0x19a750 - 0x19a848
void AppendCoordHitPoint__7WcActorP9FVector32fb_0x19a750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AppendCoordHitPoint__7WcActorP9FVector32fb_0x19a750");
#endif

    switch (ctx->pc) {
        case 0x19a798u: goto label_19a798;
        case 0x19a7f0u: goto label_19a7f0;
        case 0x19a82cu: goto label_19a82c;
        default: break;
    }

    ctx->pc = 0x19a750u;

    // 0x19a750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19a750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19a754: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x19a754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19a758: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a75c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19a75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a760: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19a760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19a764: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a768: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x19a768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x19a76c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19a76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19a770: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x19a770u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19a774: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19a774u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x19a778: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19a778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19a77c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19a77cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a780: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x19a780u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x19a784: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19A784u;
    {
        const bool branch_taken_0x19a784 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A784u;
        // 0x19a788: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a784) {
            ctx->pc = 0x19A790u;
            goto label_19a790;
        }
    }
    ctx->pc = 0x19A78Cu;
    // 0x19a78c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x19a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19a790:
    // 0x19a790: 0xc068086  jal         func_1A0218
    ctx->pc = 0x19A790u;
    SET_GPR_U32(ctx, 31, 0x19A798u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x19A790u, 0x19A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A798u;
label_19a798:
    // 0x19a798: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19a798u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a79c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A79Cu;
    {
        const bool branch_taken_0x19a79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A79Cu;
        // 0x19a7a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a79c) {
            ctx->pc = 0x19A7C0u;
            goto label_19a7c0;
        }
    }
    ctx->pc = 0x19A7A4u;
    // 0x19a7a4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x19a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x19a7a8: 0xe4740014  swc1        $f20, 0x14($v1)
    ctx->pc = 0x19a7a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x19a7ac: 0x50800a  movz        $s0, $v0, $s0
    ctx->pc = 0x19a7acu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x19a7b0: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x19a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x19a7b4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x19a7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x19a7b8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x19a7b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19a7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_19a7c0:
    // 0x19a7c0: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x19A7C0u;
    {
        const bool branch_taken_0x19a7c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7C0u;
        // 0x19a7c4: 0x26250104  addiu       $a1, $s1, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a7c0) {
            ctx->pc = 0x19A818u;
            goto label_19a818;
        }
    }
    ctx->pc = 0x19A7C8u;
    // 0x19a7c8: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x19a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x19a7cc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x19a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a7d0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x19a7d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7d4: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x19a7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19a7d8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x19a7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x19a7dc: 0x72100a  movz        $v0, $v1, $s2
    ctx->pc = 0x19a7dcu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x19a7e0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x19A7E0u;
    {
        const bool branch_taken_0x19a7e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7E0u;
        // 0x19a7e4: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a7e0) {
            ctx->pc = 0x19A80Cu;
            goto label_19a80c;
        }
    }
    ctx->pc = 0x19A7E8u;
    // 0x19a7e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a7ec: 0x0  nop
    ctx->pc = 0x19a7ecu;
    // NOP
label_19a7f0:
    // 0x19a7f0: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x19a7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x19a7f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19a7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a7f8: 0x0  nop
    ctx->pc = 0x19a7f8u;
    // NOP
    // 0x19a7fc: 0x0  nop
    ctx->pc = 0x19a7fcu;
    // NOP
    // 0x19a800: 0x0  nop
    ctx->pc = 0x19a800u;
    // NOP
    // 0x19a804: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19A804u;
    {
        const bool branch_taken_0x19a804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a804) {
            ctx->pc = 0x19A808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A804u;
            // 0x19a808: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a7f0;
        }
    }
    ctx->pc = 0x19A80Cu;
label_19a80c:
    // 0x19a80c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19A80Cu;
    {
        const bool branch_taken_0x19a80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A80Cu;
        // 0x19a810: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a80c) {
            ctx->pc = 0x19A82Cu;
            goto label_19a82c;
        }
    }
    ctx->pc = 0x19A814u;
    // 0x19a814: 0x0  nop
    ctx->pc = 0x19a814u;
    // NOP
label_19a818:
    // 0x19a818: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x19a818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x19a81c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a820: 0x24a584f0  addiu       $a1, $a1, -0x7B10
    ctx->pc = 0x19a820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935792));
    // 0x19a824: 0xc068186  jal         func_1A0618
    ctx->pc = 0x19A824u;
    SET_GPR_U32(ctx, 31, 0x19A82Cu);
    ctx->pc = 0x19A828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A824u;
    // 0x19a828: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x19A824u, 0x19A82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A82Cu;
label_19a82c:
    // 0x19a82c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a82cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a830: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19a830u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a834: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19a834u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a838: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19a838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19a83c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x19a83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19a840: 0x3e00008  jr          $ra
    ctx->pc = 0x19A840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A840u;
        // 0x19a844: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A848u;
}
