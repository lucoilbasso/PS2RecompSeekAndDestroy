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

// Function: Cmd_WVIEW_LOOK_Entry__FP15BsSCDEntControl
// Address: 0x10d258 - 0x10d2cc
void Cmd_WVIEW_LOOK_Entry__FP15BsSCDEntControl_0x10d258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_WVIEW_LOOK_Entry__FP15BsSCDEntControl_0x10d258");
#endif

    switch (ctx->pc) {
        case 0x10d280u: goto label_10d280;
        case 0x10d298u: goto label_10d298;
        default: break;
    }

    ctx->pc = 0x10d258u;

    // 0x10d258: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10d258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10d25c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d260: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10d260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10d264: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10d264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d268: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10d268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10d26c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10d26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d270: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10d270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10d274: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10d274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10d278: 0xc04110c  jal         func_104430
    ctx->pc = 0x10D278u;
    SET_GPR_U32(ctx, 31, 0x10D280u);
    ctx->pc = 0x10D27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D278u;
    // 0x10d27c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10D278u, 0x10D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D280u;
label_10d280:
    // 0x10d280: 0x8c510164  lw          $s1, 0x164($v0)
    ctx->pc = 0x10d280u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x10d284: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10d284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10d288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d28c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10d28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d290: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x10D290u;
    SET_GPR_U32(ctx, 31, 0x10D298u);
    ctx->pc = 0x10D294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D290u;
    // 0x10d294: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x10D290u, 0x10D298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D298u;
label_10d298:
    // 0x10d298: 0x26220160  addiu       $v0, $s1, 0x160
    ctx->pc = 0x10d298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x10d29c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x10d29cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d2a0: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x10d2a0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x10d2a4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x10d2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10d2a8: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x10d2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x10d2ac: 0x2402fdff  addiu       $v0, $zero, -0x201
    ctx->pc = 0x10d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x10d2b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10d2b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d2b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x10d2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10d2b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10d2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d2bc: 0xae230150  sw          $v1, 0x150($s1)
    ctx->pc = 0x10d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 3));
    // 0x10d2c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10d2c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10d2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x10D2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2C4u;
        // 0x10d2c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D2CCu;
}
