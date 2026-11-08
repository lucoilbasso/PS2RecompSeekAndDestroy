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

// Function: Cmd_ACTOR_HEART_Entry__FP15BsSCDEntControl
// Address: 0x1361c8 - 0x13624c
void Cmd_ACTOR_HEART_Entry__FP15BsSCDEntControl_0x1361c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_HEART_Entry__FP15BsSCDEntControl_0x1361c8");
#endif

    switch (ctx->pc) {
        case 0x1361f0u: goto label_1361f0;
        default: break;
    }

    ctx->pc = 0x1361c8u;

    // 0x1361c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1361c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1361cc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1361ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1361d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1361d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1361d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1361d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1361d8: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1361d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1361dc: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x1361dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1361e0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1361e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1361e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1361e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1361e8: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x1361E8u;
    SET_GPR_U32(ctx, 31, 0x1361F0u);
    ctx->pc = 0x1361ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1361E8u;
    // 0x1361ec: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x1361E8u, 0x1361F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1361F0u;
label_1361f0:
    // 0x1361f0: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x1361f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1361f4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1361f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1361f8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1361f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1361fc: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1361fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x136200: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x136200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x136204: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x136204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x136208: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x136208u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13620c: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x13620cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x136210: 0x4a0002ff  vnop
    ctx->pc = 0x136210u;
    // NOP operation, no action needed for VU0
    // 0x136214: 0x4a0002ff  vnop
    ctx->pc = 0x136214u;
    // NOP operation, no action needed for VU0
    // 0x136218: 0x4a0002ff  vnop
    ctx->pc = 0x136218u;
    // NOP operation, no action needed for VU0
    // 0x13621c: 0x4a0002ff  vnop
    ctx->pc = 0x13621cu;
    // NOP operation, no action needed for VU0
    // 0x136220: 0x4a0002ff  vnop
    ctx->pc = 0x136220u;
    // NOP operation, no action needed for VU0
    // 0x136224: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x136224u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x136228: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x136228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x13622c: 0x34830004  ori         $v1, $a0, 0x4
    ctx->pc = 0x13622cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x136230: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x136230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x136234: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x136234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x136238: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x136238u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x13623c: 0xae040084  sw          $a0, 0x84($s0)
    ctx->pc = 0x13623cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 4));
    // 0x136240: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x136240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136244: 0x3e00008  jr          $ra
    ctx->pc = 0x136244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136244u;
        // 0x136248: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13624Cu;
}
