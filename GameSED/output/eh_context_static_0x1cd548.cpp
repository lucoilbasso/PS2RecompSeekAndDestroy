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

// Function: eh_context_static
// Address: 0x1cd548 - 0x1cd5ac
void eh_context_static_0x1cd548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eh_context_static_0x1cd548");
#endif

    switch (ctx->pc) {
        case 0x1cd588u: goto label_1cd588;
        default: break;
    }

    ctx->pc = 0x1cd548u;

    // 0x1cd548: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cd548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd54c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1cd54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1cd550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd554: 0x24470550  addiu       $a3, $v0, 0x550
    ctx->pc = 0x1cd554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cd558: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cd558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cd55c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cd55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cd560: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1cd560u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410550u));
    // 0x1cd564: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1CD564u;
    {
        const bool branch_taken_0x1cd564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD564u;
        // 0x1cd568: 0x3c110041  lui         $s1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd564) {
            ctx->pc = 0x1CD594u;
            goto label_1cd594;
        }
    }
    ctx->pc = 0x1CD56Cu;
    // 0x1cd56c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd570: 0x26300470  addiu       $s0, $s1, 0x470
    ctx->pc = 0x1cd570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1136));
    // 0x1cd574: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1cd574u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1cd578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd580: 0xc074035  jal         func_1D00D4
    ctx->pc = 0x1CD580u;
    SET_GPR_U32(ctx, 31, 0x1CD588u);
    ctx->pc = 0x1CD584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD580u;
    // 0x1cd584: 0x240600e0  addiu       $a2, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D00D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D00D4u, 0x1CD580u, 0x1CD588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD588u;
label_1cd588:
    // 0x1cd588: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1cd588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1cd58c: 0x24630558  addiu       $v1, $v1, 0x558
    ctx->pc = 0x1cd58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1368));
    // 0x1cd590: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1cd590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1cd594:
    // 0x1cd594: 0x26220470  addiu       $v0, $s1, 0x470
    ctx->pc = 0x1cd594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1136));
    // 0x1cd598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd59c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd59cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd5a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cd5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD5A4u;
        // 0x1cd5a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD5ACu;
}
