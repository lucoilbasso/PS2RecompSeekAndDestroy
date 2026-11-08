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

// Function: Init__7WcLighti
// Address: 0x1892a0 - 0x18931c
void Init__7WcLighti_0x1892a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__7WcLighti_0x1892a0");
#endif

    switch (ctx->pc) {
        case 0x1892bcu: goto label_1892bc;
        case 0x1892e0u: goto label_1892e0;
        default: break;
    }

    ctx->pc = 0x1892a0u;

    // 0x1892a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1892a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1892a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1892a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1892a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1892a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1892acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1892b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1892b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1892b4: 0xc061258  jal         func_184960
    ctx->pc = 0x1892B4u;
    SET_GPR_U32(ctx, 31, 0x1892BCu);
    ctx->pc = 0x1892B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892B4u;
    // 0x1892b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1892B4u, 0x1892BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892BCu;
label_1892bc:
    // 0x1892bc: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x1892bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1892c0: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x1892c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1892c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1892c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1892c8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1892c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1892cc: 0xacf10000  sw          $s1, 0x0($a3)
    ctx->pc = 0x1892ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
    // 0x1892d0: 0x2448ed60  addiu       $t0, $v0, -0x12A0
    ctx->pc = 0x1892d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962528));
    // 0x1892d4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1892d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1892d8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1892d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1892dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1892e0:
    // 0x1892e0: 0x24a300a0  addiu       $v1, $a1, 0xA0
    ctx->pc = 0x1892e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x1892e4: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x1892e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1892e8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1892e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1892ec: 0x24a400d0  addiu       $a0, $a1, 0xD0
    ctx->pc = 0x1892ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x1892f0: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1892f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1892f4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1892f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1892f8: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1892F8u;
    {
        const bool branch_taken_0x1892f8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1892FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892F8u;
        // 0x1892fc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1892f8) {
            ctx->pc = 0x1892E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1892e0;
        }
    }
    ctx->pc = 0x189300u;
    // 0x189300: 0x24e20090  addiu       $v0, $a3, 0x90
    ctx->pc = 0x189300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
    // 0x189304: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x189304u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x189308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x189308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18930c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18930cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x189310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x189310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189314: 0x3e00008  jr          $ra
    ctx->pc = 0x189314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189314u;
        // 0x189318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18931Cu;
}
