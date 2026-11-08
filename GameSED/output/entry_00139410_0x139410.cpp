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

// Function: entry_00139410
// Address: 0x139410 - 0x139490
void entry_00139410_0x139410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139410_0x139410");
#endif

    ctx->pc = 0x139410u;

label_139410:
    // 0x139410: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x139410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_139414:
    // 0x139414: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x139414u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_139418:
    // 0x139418: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x139418u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_13941c:
    // 0x13941c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x13941cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_139420:
    // 0x139420: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x139420u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_139424:
    // 0x139424: 0x4a0002ff  vnop
    ctx->pc = 0x139424u;
    // NOP operation, no action needed for VU0
label_139428:
    // 0x139428: 0x4a0002ff  vnop
    ctx->pc = 0x139428u;
    // NOP operation, no action needed for VU0
label_13942c:
    // 0x13942c: 0x4a0002ff  vnop
    ctx->pc = 0x13942cu;
    // NOP operation, no action needed for VU0
label_139430:
    // 0x139430: 0x4a0002ff  vnop
    ctx->pc = 0x139430u;
    // NOP operation, no action needed for VU0
label_139434:
    // 0x139434: 0x4a0002ff  vnop
    ctx->pc = 0x139434u;
    // NOP operation, no action needed for VU0
label_139438:
    // 0x139438: 0x48448800  cfc2.ni     $a0, $vi17
    ctx->pc = 0x139438u;
    SET_GPR_U32(ctx, 4, ctx->vu0_mac_flags);
label_13943c:
    // 0x13943c: 0x3084000e  andi        $a0, $a0, 0xE
    ctx->pc = 0x13943cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)14);
label_139440:
    // 0x139440: 0x3884000e  xori        $a0, $a0, 0xE
    ctx->pc = 0x139440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)14);
label_139444:
    // 0x139444: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_139448:
    if (ctx->pc == 0x139448u) {
        ctx->pc = 0x139448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139444u;
        // 0x139448: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13944Cu;
        goto label_13944c;
    }
    ctx->pc = 0x139444u;
    {
        const bool branch_taken_0x139444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x139448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139444u;
        // 0x139448: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139444) {
            ctx->pc = 0x139490u;
            return;
        }
    }
    ctx->pc = 0x13944Cu;
label_13944c:
    // 0x13944c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x13944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_139450:
    // 0x139450: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x139450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_139454:
    // 0x139454: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_139458:
    if (ctx->pc == 0x139458u) {
        ctx->pc = 0x139458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139454u;
        // 0x139458: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13945Cu;
        goto label_13945c;
    }
    ctx->pc = 0x139454u;
    {
        const bool branch_taken_0x139454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139454) {
            ctx->pc = 0x139458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139454u;
            // 0x139458: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139494u;
            return;
        }
    }
    ctx->pc = 0x13945Cu;
label_13945c:
    // 0x13945c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13945cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_139460:
    // 0x139460: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x139460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_139464:
    // 0x139464: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_139468:
    if (ctx->pc == 0x139468u) {
        ctx->pc = 0x139468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139464u;
        // 0x139468: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13946Cu;
        goto label_13946c;
    }
    ctx->pc = 0x139464u;
    {
        const bool branch_taken_0x139464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139464) {
            ctx->pc = 0x139468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139464u;
            // 0x139468: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139494u;
            return;
        }
    }
    ctx->pc = 0x13946Cu;
label_13946c:
    // 0x13946c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_139470:
    // 0x139470: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x139470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_139474:
    // 0x139474: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x139474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139478:
    // 0x139478: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x139478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13947c:
    // 0x13947c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x13947cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_139480:
    // 0x139480: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x139480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_139484:
    // 0x139484: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x139484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_139488:
    // 0x139488: 0x40f809  jalr        $v0
label_13948c:
    if (ctx->pc == 0x13948Cu) {
        ctx->pc = 0x13948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139488u;
        // 0x13948c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139490u;
        goto label_fallthrough_0x139488;
    }
    ctx->pc = 0x139488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x139490u);
        ctx->pc = 0x13948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139488u;
        // 0x13948c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139488u, 0x139490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x139488:
    ctx->pc = 0x139490u;
}
