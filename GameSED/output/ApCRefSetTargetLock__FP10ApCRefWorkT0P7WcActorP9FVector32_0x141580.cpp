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

// Function: ApCRefSetTargetLock__FP10ApCRefWorkT0P7WcActorP9FVector32
// Address: 0x141580 - 0x141628
void ApCRefSetTargetLock__FP10ApCRefWorkT0P7WcActorP9FVector32_0x141580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCRefSetTargetLock__FP10ApCRefWorkT0P7WcActorP9FVector32_0x141580");
#endif

    switch (ctx->pc) {
        case 0x14161cu: goto label_14161c;
        default: break;
    }

    ctx->pc = 0x141580u;

    // 0x141580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141584: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14158c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x14158cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141590: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x141590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x141594: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x141594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x141598: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x141598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x14159c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x14159cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1415a0: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x1415a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1415a4: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x1415a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x1415a8: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1415A8u;
    {
        const bool branch_taken_0x1415a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1415ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415A8u;
        // 0x1415ac: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415a8) {
            ctx->pc = 0x1415D0u;
            goto label_1415d0;
        }
    }
    ctx->pc = 0x1415B0u;
    // 0x1415b0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1415b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1415b4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1415b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1415b8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1415b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1415bc: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1415bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1415c0: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1415c0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1415c4: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1415c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1415c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1415C8u;
    {
        const bool branch_taken_0x1415c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1415CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415C8u;
        // 0x1415cc: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1415c8) {
            ctx->pc = 0x1415E4u;
            goto label_1415e4;
        }
    }
    ctx->pc = 0x1415D0u;
label_1415d0:
    // 0x1415d0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1415d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1415d4: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x1415d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x1415d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1415d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1415dc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1415dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1415e0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1415e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1415e4:
    // 0x1415e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1415e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1415e8: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1415e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1415ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1415ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1415f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1415f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1415f4: 0x25240020  addiu       $a0, $t1, 0x20
    ctx->pc = 0x1415f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1415f8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1415f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1415fc: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x1415fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x141600: 0xad260010  sw          $a2, 0x10($t1)
    ctx->pc = 0x141600u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 6));
    // 0x141604: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x141604u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x141608: 0x25220030  addiu       $v0, $t1, 0x30
    ctx->pc = 0x141608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x14160c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x14160cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x141610: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x141610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141614: 0xc050a7c  jal         func_1429F0
    ctx->pc = 0x141614u;
    SET_GPR_U32(ctx, 31, 0x14161Cu);
    ctx->pc = 0x141618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141614u;
    // 0x141618: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1429F0u, 0x141614u, 0x14161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14161Cu;
label_14161c:
    // 0x14161c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14161cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141620: 0x3e00008  jr          $ra
    ctx->pc = 0x141620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141620u;
        // 0x141624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141628u;
}
