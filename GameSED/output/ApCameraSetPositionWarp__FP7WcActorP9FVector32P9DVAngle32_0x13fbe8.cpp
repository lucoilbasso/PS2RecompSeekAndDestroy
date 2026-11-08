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

// Function: ApCameraSetPositionWarp__FP7WcActorP9FVector32P9DVAngle32
// Address: 0x13fbe8 - 0x13fce0
void ApCameraSetPositionWarp__FP7WcActorP9FVector32P9DVAngle32_0x13fbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraSetPositionWarp__FP7WcActorP9FVector32P9DVAngle32_0x13fbe8");
#endif

    switch (ctx->pc) {
        case 0x13fc28u: goto label_13fc28;
        case 0x13fc54u: goto label_13fc54;
        case 0x13fc74u: goto label_13fc74;
        case 0x13fc88u: goto label_13fc88;
        default: break;
    }

    ctx->pc = 0x13fbe8u;

    // 0x13fbe8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13fbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13fbec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13fbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13fbf0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13fbf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fbf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13fbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13fbf8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13fbf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fbfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13fbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13fc00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13fc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fc04: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13fc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13fc08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13fc08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fc0c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x13fc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13fc10: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13fc10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13fc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13fc18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13fc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13fc1c: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x13fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x13fc20: 0xc04fce4  jal         func_13F390
    ctx->pc = 0x13FC20u;
    SET_GPR_U32(ctx, 31, 0x13FC28u);
    ctx->pc = 0x13FC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC20u;
    // 0x13fc24: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F390u, 0x13FC20u, 0x13FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC28u;
label_13fc28:
    // 0x13fc28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13fc28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc2c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13FC2Cu;
    {
        const bool branch_taken_0x13fc2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC2Cu;
        // 0x13fc30: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc2c) {
            ctx->pc = 0x13FC54u;
            goto label_13fc54;
        }
    }
    ctx->pc = 0x13FC34u;
    // 0x13fc34: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x13fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x13fc38: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x13fc38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13fc3c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x13fc3cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x13fc40: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13fc40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13fc44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13fc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13fc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc4c: 0xc0618c2  jal         func_186308
    ctx->pc = 0x13FC4Cu;
    SET_GPR_U32(ctx, 31, 0x13FC54u);
    ctx->pc = 0x13FC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC4Cu;
    // 0x13fc50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13FC4Cu, 0x13FC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC54u;
label_13fc54:
    // 0x13fc54: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13FC54u;
    {
        const bool branch_taken_0x13fc54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC54u;
        // 0x13fc58: 0x26630040  addiu       $v1, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc54) {
            ctx->pc = 0x13FC74u;
            goto label_13fc74;
        }
    }
    ctx->pc = 0x13FC5Cu;
    // 0x13fc5c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x13fc5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13fc60: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13fc60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13fc64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13fc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13fc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc6c: 0xc0618da  jal         func_186368
    ctx->pc = 0x13FC6Cu;
    SET_GPR_U32(ctx, 31, 0x13FC74u);
    ctx->pc = 0x13FC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC6Cu;
    // 0x13fc70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13FC6Cu, 0x13FC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC74u;
label_13fc74:
    // 0x13fc74: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x13fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x13fc78: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13fc78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x13fc7c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x13fc7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x13fc80: 0xc061a46  jal         func_186918
    ctx->pc = 0x13FC80u;
    SET_GPR_U32(ctx, 31, 0x13FC88u);
    ctx->pc = 0x13FC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC80u;
    // 0x13fc84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13FC80u, 0x13FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC88u;
label_13fc88:
    // 0x13fc88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13fc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc8c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FC8Cu;
    {
        const bool branch_taken_0x13fc8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC8Cu;
        // 0x13fc90: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc8c) {
            ctx->pc = 0x13FCB0u;
            goto label_13fcb0;
        }
    }
    ctx->pc = 0x13FC94u;
    // 0x13fc94: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13fc98: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x13fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x13fc9c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13FC9Cu;
    {
        const bool branch_taken_0x13fc9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13fc9c) {
            ctx->pc = 0x13FCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FC9Cu;
            // 0x13fca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FCB4u;
            goto label_13fcb4;
        }
    }
    ctx->pc = 0x13FCA4u;
    // 0x13fca4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13FCA4u;
    {
        const bool branch_taken_0x13fca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FCA4u;
        // 0x13fca8: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fca4) {
            ctx->pc = 0x13FCB4u;
            goto label_13fcb4;
        }
    }
    ctx->pc = 0x13FCACu;
    // 0x13fcac: 0x0  nop
    ctx->pc = 0x13fcacu;
    // NOP
label_13fcb0:
    // 0x13fcb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13fcb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13fcb4:
    // 0x13fcb4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13FCB4u;
    {
        const bool branch_taken_0x13fcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fcb4) {
            ctx->pc = 0x13FCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FCB4u;
            // 0x13fcb8: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FCBCu;
            goto label_13fcbc;
        }
    }
    ctx->pc = 0x13FCBCu;
label_13fcbc:
    // 0x13fcbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13fcbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fcc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13fcc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13fcc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13fcc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fcc8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13fcc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13fccc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13fcccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fcd0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13fcd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13fcd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13fcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x13FCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FCD8u;
        // 0x13fcdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FCE0u;
}
