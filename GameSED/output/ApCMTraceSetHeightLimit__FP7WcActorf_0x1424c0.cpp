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

// Function: ApCMTraceSetHeightLimit__FP7WcActorf
// Address: 0x1424c0 - 0x14256c
void ApCMTraceSetHeightLimit__FP7WcActorf_0x1424c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCMTraceSetHeightLimit__FP7WcActorf_0x1424c0");
#endif

    switch (ctx->pc) {
        case 0x1424e4u: goto label_1424e4;
        default: break;
    }

    ctx->pc = 0x1424c0u;

    // 0x1424c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1424c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1424c4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1424c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1424c8: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1424c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1424cc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1424ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1424d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1424d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1424d4: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x1424d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x1424d8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1424d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1424dc: 0xc061a46  jal         func_186918
    ctx->pc = 0x1424DCu;
    SET_GPR_U32(ctx, 31, 0x1424E4u);
    ctx->pc = 0x1424E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1424DCu;
    // 0x1424e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x1424DCu, 0x1424E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424E4u;
label_1424e4:
    // 0x1424e4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1424e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1424e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1424e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1424ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1424ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1424f0: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x1424f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x1424f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1424f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1424f8: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1424f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1424fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1424FCu;
    {
        const bool branch_taken_0x1424fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x142500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1424FCu;
        // 0x142500: 0x2444ee48  addiu       $a0, $v0, -0x11B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1424fc) {
            ctx->pc = 0x142518u;
            goto label_142518;
        }
    }
    ctx->pc = 0x142504u;
    // 0x142504: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x142504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x142508: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x142508u;
    {
        const bool branch_taken_0x142508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x142508) {
            ctx->pc = 0x14250Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142508u;
            // 0x14250c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14251Cu;
            goto label_14251c;
        }
    }
    ctx->pc = 0x142510u;
    // 0x142510: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x142510u;
    {
        const bool branch_taken_0x142510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142510u;
        // 0x142514: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142510) {
            ctx->pc = 0x14251Cu;
            goto label_14251c;
        }
    }
    ctx->pc = 0x142518u;
label_142518:
    // 0x142518: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x142518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14251c:
    // 0x14251c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x14251cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x142520: 0x1445000f  bne         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x142520u;
    {
        const bool branch_taken_0x142520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x142524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142520u;
        // 0x142524: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142520) {
            ctx->pc = 0x142560u;
            goto label_142560;
        }
    }
    ctx->pc = 0x142528u;
    // 0x142528: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x142528u;
    {
        const bool branch_taken_0x142528 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142528u;
        // 0x14252c: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142528) {
            ctx->pc = 0x142548u;
            goto label_142548;
        }
    }
    ctx->pc = 0x142530u;
    // 0x142530: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x142530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x142534: 0xe4940164  swc1        $f20, 0x164($a0)
    ctx->pc = 0x142534u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 356), bits); }
    // 0x142538: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14253c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14253Cu;
    {
        const bool branch_taken_0x14253c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14253Cu;
        // 0x142540: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14253c) {
            ctx->pc = 0x142560u;
            goto label_142560;
        }
    }
    ctx->pc = 0x142544u;
    // 0x142544: 0x0  nop
    ctx->pc = 0x142544u;
    // NOP
label_142548:
    // 0x142548: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x142548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14254c: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x14254cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x142550: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x142550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x142554: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x142554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x142558: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x142558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x14255c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14255cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_142560:
    // 0x142560: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x142560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x142564: 0x3e00008  jr          $ra
    ctx->pc = 0x142564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142564u;
        // 0x142568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14256Cu;
}
