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

// Function: eh_context_initialize
// Address: 0x1cd4e0 - 0x1cd544
void eh_context_initialize_0x1cd4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eh_context_initialize_0x1cd4e0");
#endif

    switch (ctx->pc) {
        case 0x1cd4e0u: goto label_1cd4e0;
        case 0x1cd4e4u: goto label_1cd4e4;
        case 0x1cd4e8u: goto label_1cd4e8;
        case 0x1cd4ecu: goto label_1cd4ec;
        case 0x1cd4f0u: goto label_1cd4f0;
        case 0x1cd4f4u: goto label_1cd4f4;
        case 0x1cd4f8u: goto label_1cd4f8;
        case 0x1cd4fcu: goto label_1cd4fc;
        case 0x1cd500u: goto label_1cd500;
        case 0x1cd504u: goto label_1cd504;
        case 0x1cd508u: goto label_1cd508;
        case 0x1cd50cu: goto label_1cd50c;
        case 0x1cd510u: goto label_1cd510;
        case 0x1cd514u: goto label_1cd514;
        case 0x1cd518u: goto label_1cd518;
        case 0x1cd51cu: goto label_1cd51c;
        case 0x1cd520u: goto label_1cd520;
        case 0x1cd524u: goto label_1cd524;
        case 0x1cd528u: goto label_1cd528;
        case 0x1cd52cu: goto label_1cd52c;
        case 0x1cd530u: goto label_1cd530;
        case 0x1cd534u: goto label_1cd534;
        case 0x1cd538u: goto label_1cd538;
        case 0x1cd53cu: goto label_1cd53c;
        case 0x1cd540u: goto label_1cd540;
        default: break;
    }

    ctx->pc = 0x1cd4e0u;

label_1cd4e0:
    // 0x1cd4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cd4e4:
    // 0x1cd4e4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cd4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1cd4e8:
    // 0x1cd4e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cd4ec:
    // 0x1cd4ec: 0x2450de14  addiu       $s0, $v0, -0x21EC
    ctx->pc = 0x1cd4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958612));
label_1cd4f0:
    // 0x1cd4f0: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1cd4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
label_1cd4f4:
    // 0x1cd4f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cd4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cd4f8:
    // 0x1cd4f8: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1cd4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1cd4fc:
    // 0x1cd4fc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_1cd500:
    if (ctx->pc == 0x1CD500u) {
        ctx->pc = 0x1CD500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4FCu;
        // 0x1cd500: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD504u;
        goto label_1cd504;
    }
    ctx->pc = 0x1CD4FCu;
    {
        const bool branch_taken_0x1cd4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CD500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4FCu;
        // 0x1cd500: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4fc) {
            ctx->pc = 0x1CD510u;
            goto label_1cd510;
        }
    }
    ctx->pc = 0x1CD504u;
label_1cd504:
    // 0x1cd504: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1cd504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
label_1cd508:
    // 0x1cd508: 0x2442d548  addiu       $v0, $v0, -0x2AB8
    ctx->pc = 0x1cd508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956360));
label_1cd50c:
    // 0x1cd50c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cd50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cd510:
    // 0x1cd510: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cd510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1cd514:
    // 0x1cd514: 0x8c43de18  lw          $v1, -0x21E8($v0)
    ctx->pc = 0x1cd514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958616)));
label_1cd518:
    // 0x1cd518: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_1cd51c:
    if (ctx->pc == 0x1CD51Cu) {
        ctx->pc = 0x1CD51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD518u;
        // 0x1cd51c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD520u;
        goto label_1cd520;
    }
    ctx->pc = 0x1CD518u;
    {
        const bool branch_taken_0x1cd518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd518) {
            ctx->pc = 0x1CD51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD518u;
            // 0x1cd51c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD52Cu;
            goto label_1cd52c;
        }
    }
    ctx->pc = 0x1CD520u;
label_1cd520:
    // 0x1cd520: 0xc0734b0  jal         func_1CD2C0
label_1cd524:
    if (ctx->pc == 0x1CD524u) {
        ctx->pc = 0x1CD528u;
        goto label_1cd528;
    }
    ctx->pc = 0x1CD520u;
    SET_GPR_U32(ctx, 31, 0x1CD528u);
    ctx->pc = 0x1CD2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD2C0u, 0x1CD520u, 0x1CD528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD528u;
label_1cd528:
    // 0x1cd528: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cd528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cd52c:
    // 0x1cd52c: 0x40f809  jalr        $v0
label_1cd530:
    if (ctx->pc == 0x1CD530u) {
        ctx->pc = 0x1CD534u;
        goto label_1cd534;
    }
    ctx->pc = 0x1CD52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD534u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD52Cu, 0x1CD534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD534u;
label_1cd534:
    // 0x1cd534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd538:
    // 0x1cd538: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cd53c:
    // 0x1cd53c: 0x3e00008  jr          $ra
label_1cd540:
    if (ctx->pc == 0x1CD540u) {
        ctx->pc = 0x1CD540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD53Cu;
        // 0x1cd540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD544u;
        goto label_fallthrough_0x1cd53c;
    }
    ctx->pc = 0x1CD53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD53Cu;
        // 0x1cd540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cd53c:
    ctx->pc = 0x1CD544u;
}
