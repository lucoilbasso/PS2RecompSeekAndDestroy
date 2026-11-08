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

// Function: entry_001c7560
// Address: 0x1c7560 - 0x1c75a0
void entry_001c7560_0x1c7560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7560_0x1c7560");
#endif

    switch (ctx->pc) {
        case 0x1c7570u: goto label_1c7570;
        default: break;
    }

    ctx->pc = 0x1c7560u;

    // 0x1c7560: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7568: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1C7568u;
    SET_GPR_U32(ctx, 31, 0x1C7570u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1C7568u, 0x1C7570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7570u;
label_1c7570:
    // 0x1c7570: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C7570u;
    {
        const bool branch_taken_0x1c7570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7570u;
        // 0x1c7574: 0x8fa20250  lw          $v0, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7570) {
            ctx->pc = 0x1C75C8u;
            return;
        }
    }
    ctx->pc = 0x1C7578u;
    // 0x1c7578: 0x8fa60250  lw          $a2, 0x250($sp)
    ctx->pc = 0x1c7578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1c757c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1c757cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1c7580: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x1c7580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1c7584: 0x24c6ffe8  addiu       $a2, $a2, -0x18
    ctx->pc = 0x1c7584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x1c7588: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1c7588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1c758c: 0xafa60250  sw          $a2, 0x250($sp)
    ctx->pc = 0x1c758cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 6));
    // 0x1c7590: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c7590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7594: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C7594u;
    {
        const bool branch_taken_0x1c7594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7594u;
        // 0x1c7598: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7594) {
            ctx->pc = 0x1C7688u;
            return;
        }
    }
    ctx->pc = 0x1C759Cu;
    // 0x1c759c: 0x0  nop
    ctx->pc = 0x1c759cu;
    // NOP
    ctx->pc = 0x1c75a0u;
}
