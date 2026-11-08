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

// Function: AppendExtHitPoint__7WcActorP9FVector32f
// Address: 0x19a250 - 0x19a328
void AppendExtHitPoint__7WcActorP9FVector32f_0x19a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AppendExtHitPoint__7WcActorP9FVector32f_0x19a250");
#endif

    switch (ctx->pc) {
        case 0x19a284u: goto label_19a284;
        case 0x19a2d8u: goto label_19a2d8;
        case 0x19a310u: goto label_19a310;
        default: break;
    }

    ctx->pc = 0x19a250u;

    // 0x19a250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a25c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19a25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19a260: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19a260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a264: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x19a264u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19a268: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19a268u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x19a26c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a270: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19A270u;
    {
        const bool branch_taken_0x19a270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A270u;
        // 0x19a274: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a270) {
            ctx->pc = 0x19A27Cu;
            goto label_19a27c;
        }
    }
    ctx->pc = 0x19A278u;
    // 0x19a278: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19a278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19a27c:
    // 0x19a27c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x19A27Cu;
    SET_GPR_U32(ctx, 31, 0x19A284u);
    ctx->pc = 0x19A280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A27Cu;
    // 0x19a280: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x19A27Cu, 0x19A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A284u;
label_19a284:
    // 0x19a284: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19a284u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a288: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19A288u;
    {
        const bool branch_taken_0x19a288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A288u;
        // 0x19a28c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a288) {
            ctx->pc = 0x19A2A8u;
            goto label_19a2a8;
        }
    }
    ctx->pc = 0x19A290u;
    // 0x19a290: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x19a290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x19a294: 0xe4740014  swc1        $f20, 0x14($v1)
    ctx->pc = 0x19a294u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x19a298: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19a298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19a29c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19a29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a2a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19a2a4: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x19a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_19a2a8:
    // 0x19a2a8: 0x50a00015  beql        $a1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x19A2A8u;
    {
        const bool branch_taken_0x19a2a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a2a8) {
            ctx->pc = 0x19A2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A2A8u;
            // 0x19a2ac: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A300u;
            goto label_19a300;
        }
    }
    ctx->pc = 0x19A2B0u;
    // 0x19a2b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a2b4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x19a2b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19a2b8: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x19a2b8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x19a2bc: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x19a2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19a2c0: 0x26040104  addiu       $a0, $s0, 0x104
    ctx->pc = 0x19a2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x19a2c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a2c8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x19A2C8u;
    {
        const bool branch_taken_0x19a2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a2c8) {
            ctx->pc = 0x19A2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A2C8u;
            // 0x19a2cc: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A310u;
            goto label_19a310;
        }
    }
    ctx->pc = 0x19A2D0u;
    // 0x19a2d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a2d4: 0x0  nop
    ctx->pc = 0x19a2d4u;
    // NOP
label_19a2d8:
    // 0x19a2d8: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x19a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x19a2dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a2e0: 0x0  nop
    ctx->pc = 0x19a2e0u;
    // NOP
    // 0x19a2e4: 0x0  nop
    ctx->pc = 0x19a2e4u;
    // NOP
    // 0x19a2e8: 0x0  nop
    ctx->pc = 0x19a2e8u;
    // NOP
    // 0x19a2ec: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19A2ECu;
    {
        const bool branch_taken_0x19a2ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a2ec) {
            ctx->pc = 0x19A2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A2ECu;
            // 0x19a2f0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a2d8;
        }
    }
    ctx->pc = 0x19A2F4u;
    // 0x19a2f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19A2F4u;
    {
        const bool branch_taken_0x19a2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2F4u;
        // 0x19a2f8: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a2f4) {
            ctx->pc = 0x19A310u;
            goto label_19a310;
        }
    }
    ctx->pc = 0x19A2FCu;
    // 0x19a2fc: 0x0  nop
    ctx->pc = 0x19a2fcu;
    // NOP
label_19a300:
    // 0x19a300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a304: 0x24a584d8  addiu       $a1, $a1, -0x7B28
    ctx->pc = 0x19a304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935768));
    // 0x19a308: 0xc068186  jal         func_1A0618
    ctx->pc = 0x19A308u;
    SET_GPR_U32(ctx, 31, 0x19A310u);
    ctx->pc = 0x19A30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A308u;
    // 0x19a30c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x19A308u, 0x19A310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A310u;
label_19a310:
    // 0x19a310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a314: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19a314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a318: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a31c: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x19a31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19a320: 0x3e00008  jr          $ra
    ctx->pc = 0x19A320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A320u;
        // 0x19a324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A328u;
}
