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

// Function: ApCRefSetCamera2Target__FP10ApCRefWorkT0P7WcActorT2
// Address: 0x1418a0 - 0x1418f4
void ApCRefSetCamera2Target__FP10ApCRefWorkT0P7WcActorT2_0x1418a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCRefSetCamera2Target__FP10ApCRefWorkT0P7WcActorT2_0x1418a0");
#endif

    switch (ctx->pc) {
        case 0x1418e8u: goto label_1418e8;
        default: break;
    }

    ctx->pc = 0x1418a0u;

    // 0x1418a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1418a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1418a4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1418a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1418a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1418a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1418ac: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1418acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1418b0: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x1418b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x1418b4: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1418b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1418b8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1418b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1418bc: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1418bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1418c0: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x1418c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x1418c4: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x1418c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x1418c8: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x1418c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1418cc: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x1418ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
    // 0x1418d0: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1418d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1418d4: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x1418d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1418d8: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x1418d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x1418dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1418dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1418e0: 0xc050a7c  jal         func_1429F0
    ctx->pc = 0x1418E0u;
    SET_GPR_U32(ctx, 31, 0x1418E8u);
    ctx->pc = 0x1418E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1418E0u;
    // 0x1418e4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1429F0u, 0x1418E0u, 0x1418E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1418E8u;
label_1418e8:
    // 0x1418e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1418e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1418ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1418ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1418F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1418ECu;
        // 0x1418f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1418ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1418F4u;
}
