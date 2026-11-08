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

// Function: SAllocExtHitPoint__FP7WcActorP9FVector32f
// Address: 0x19a6a8 - 0x19a714
void SAllocExtHitPoint__FP7WcActorP9FVector32f_0x19a6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SAllocExtHitPoint__FP7WcActorP9FVector32f_0x19a6a8");
#endif

    switch (ctx->pc) {
        case 0x19a6e0u: goto label_19a6e0;
        default: break;
    }

    ctx->pc = 0x19a6a8u;

    // 0x19a6a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a6ac: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x19a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19a6b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a6b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19a6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a6b8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x19a6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x19a6bc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x19a6bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19a6c0: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x19a6c0u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x19a6c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19a6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a6c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19a6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19a6cc: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19A6CCu;
    {
        const bool branch_taken_0x19a6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6CCu;
        // 0x19a6d0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a6cc) {
            ctx->pc = 0x19A6D8u;
            goto label_19a6d8;
        }
    }
    ctx->pc = 0x19A6D4u;
    // 0x19a6d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19a6d8:
    // 0x19a6d8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x19A6D8u;
    SET_GPR_U32(ctx, 31, 0x19A6E0u);
    ctx->pc = 0x19A6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A6D8u;
    // 0x19a6dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x19A6D8u, 0x19A6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6E0u;
label_19a6e0:
    // 0x19a6e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19a6e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a6e4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A6E4u;
    {
        const bool branch_taken_0x19a6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6E4u;
        // 0x19a6e8: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a6e4) {
            ctx->pc = 0x19A700u;
            goto label_19a700;
        }
    }
    ctx->pc = 0x19A6ECu;
    // 0x19a6ec: 0x90800a  movz        $s0, $a0, $s0
    ctx->pc = 0x19a6ecu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x19a6f0: 0xe4740014  swc1        $f20, 0x14($v1)
    ctx->pc = 0x19a6f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x19a6f4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x19a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x19a6f8: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x19a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x19a6fc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x19a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_19a700:
    // 0x19a700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a704: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19a704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a708: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x19a708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19a70c: 0x3e00008  jr          $ra
    ctx->pc = 0x19A70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A70Cu;
        // 0x19a710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A714u;
}
