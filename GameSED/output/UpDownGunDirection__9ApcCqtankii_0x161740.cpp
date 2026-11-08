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

// Function: UpDownGunDirection__9ApcCqtankii
// Address: 0x161740 - 0x161804
void UpDownGunDirection__9ApcCqtankii_0x161740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpDownGunDirection__9ApcCqtankii_0x161740");
#endif

    switch (ctx->pc) {
        case 0x161760u: goto label_161760;
        case 0x1617a0u: goto label_1617a0;
        case 0x1617d0u: goto label_1617d0;
        case 0x1617f4u: goto label_1617f4;
        default: break;
    }

    ctx->pc = 0x161740u;

    // 0x161740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161744: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x161744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x161748: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x161748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16174c: 0x24901a60  addiu       $s0, $a0, 0x1A60
    ctx->pc = 0x16174cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 6752));
    // 0x161750: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x161750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x161754: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x161754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x161758: 0xc0677e0  jal         func_19DF80
    ctx->pc = 0x161758u;
    SET_GPR_U32(ctx, 31, 0x161760u);
    ctx->pc = 0x16175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161758u;
    // 0x16175c: 0x8c440030  lw          $a0, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF80u, 0x161758u, 0x161760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161760u;
label_161760:
    // 0x161760: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x161760u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161764: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x161764u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x161768: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x161768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x16176c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x16176cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x161770: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x161770u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x161774: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x161774u;
    {
        const bool branch_taken_0x161774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161774) {
            ctx->pc = 0x161778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161774u;
            // 0x161778: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1617F8u;
            goto label_1617f8;
        }
    }
    ctx->pc = 0x16177Cu;
    // 0x16177c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16177cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x161780: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x161780u;
    {
        const bool branch_taken_0x161780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161780) {
            ctx->pc = 0x161784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161780u;
            // 0x161784: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1617F8u;
            goto label_1617f8;
        }
    }
    ctx->pc = 0x161788u;
    // 0x161788: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x161788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x16178c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16178cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161790: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x161790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x161794: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x161794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161798: 0xc0618da  jal         func_186368
    ctx->pc = 0x161798u;
    SET_GPR_U32(ctx, 31, 0x1617A0u);
    ctx->pc = 0x16179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161798u;
    // 0x16179c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x161798u, 0x1617A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617A0u;
label_1617a0:
    // 0x1617a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1617a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617a4: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1617a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1617a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1617a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617ac: 0x8e080044  lw          $t0, 0x44($s0)
    ctx->pc = 0x1617acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1617b0: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1617b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1617b4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1617b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617b8: 0x8e090040  lw          $t1, 0x40($s0)
    ctx->pc = 0x1617b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1617bc: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x1617bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1617c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1617C0u;
    {
        const bool branch_taken_0x1617c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1617C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617C0u;
        // 0x1617c4: 0x123182a  slt         $v1, $t1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1617c0) {
            ctx->pc = 0x1617D8u;
            goto label_1617d8;
        }
    }
    ctx->pc = 0x1617C8u;
    // 0x1617c8: 0xc0618da  jal         func_186368
    ctx->pc = 0x1617C8u;
    SET_GPR_U32(ctx, 31, 0x1617D0u);
    ctx->pc = 0x1617CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1617C8u;
    // 0x1617cc: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x1617C8u, 0x1617D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617D0u;
label_1617d0:
    // 0x1617d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1617D0u;
    {
        const bool branch_taken_0x1617d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1617D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617D0u;
        // 0x1617d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1617d0) {
            ctx->pc = 0x1617F8u;
            goto label_1617f8;
        }
    }
    ctx->pc = 0x1617D8u;
label_1617d8:
    // 0x1617d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1617D8u;
    {
        const bool branch_taken_0x1617d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1617DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617D8u;
        // 0x1617dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1617d8) {
            ctx->pc = 0x1617F8u;
            goto label_1617f8;
        }
    }
    ctx->pc = 0x1617E0u;
    // 0x1617e0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1617e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1617e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1617e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617ec: 0xc0618da  jal         func_186368
    ctx->pc = 0x1617ECu;
    SET_GPR_U32(ctx, 31, 0x1617F4u);
    ctx->pc = 0x1617F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1617ECu;
    // 0x1617f0: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x1617ECu, 0x1617F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617F4u;
label_1617f4:
    // 0x1617f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1617f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1617f8:
    // 0x1617f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1617f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1617fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1617FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617FCu;
        // 0x161800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1617FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161804u;
}
