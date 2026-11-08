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

// Function: ApDaemonScanTarget__FP7WcActorP9FVector3215ApScanActorTypef
// Address: 0x139160 - 0x1391f4
void ApDaemonScanTarget__FP7WcActorP9FVector3215ApScanActorTypef_0x139160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonScanTarget__FP7WcActorP9FVector3215ApScanActorTypef_0x139160");
#endif

    switch (ctx->pc) {
        case 0x139190u: goto label_139190;
        case 0x1391d0u: goto label_1391d0;
        default: break;
    }

    ctx->pc = 0x139160u;

    // 0x139160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x139160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x139164: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x139164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139168: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x139168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x13916c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13916cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139170: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x139170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x139174: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x139174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139178: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x139178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x13917c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13917cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139180: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x139180u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x139184: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x139184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x139188: 0xc04dbd2  jal         func_136F48
    ctx->pc = 0x139188u;
    SET_GPR_U32(ctx, 31, 0x139190u);
    ctx->pc = 0x13918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139188u;
    // 0x13918c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F48u, 0x139188u, 0x139190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139190u;
label_139190:
    // 0x139190: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x139190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x139194: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x139194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139198: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x139198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x13919c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13919cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1391a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1391A0u;
    {
        const bool branch_taken_0x1391a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1391A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391A0u;
        // 0x1391a4: 0x24a58f98  addiu       $a1, $a1, -0x7068 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391a0) {
            ctx->pc = 0x1391D4u;
            goto label_1391d4;
        }
    }
    ctx->pc = 0x1391A8u;
    // 0x1391a8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1391a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1391ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1391acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1391b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1391b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1391b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1391b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1391b8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1391b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1391bc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1391bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1391c0: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1391c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1391c4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1391c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1391c8: 0xc04dea6  jal         func_137A98
    ctx->pc = 0x1391C8u;
    SET_GPR_U32(ctx, 31, 0x1391D0u);
    ctx->pc = 0x1391CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1391C8u;
    // 0x1391cc: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x137A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137A98u, 0x1391C8u, 0x1391D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1391D0u;
label_1391d0:
    // 0x1391d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1391d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1391d4:
    // 0x1391d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1391d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1391d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1391d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1391dc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1391dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1391e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1391e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1391e4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1391e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1391e8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1391e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1391ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1391ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1391F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391ECu;
        // 0x1391f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1391ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1391F4u;
}
