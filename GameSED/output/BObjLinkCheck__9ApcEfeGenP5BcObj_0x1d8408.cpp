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

// Function: BObjLinkCheck__9ApcEfeGenP5BcObj
// Address: 0x1d8408 - 0x1d8448
void BObjLinkCheck__9ApcEfeGenP5BcObj_0x1d8408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BObjLinkCheck__9ApcEfeGenP5BcObj_0x1d8408");
#endif

    switch (ctx->pc) {
        case 0x1d8418u: goto label_1d8418;
        default: break;
    }

    ctx->pc = 0x1d8408u;

    // 0x1d8408: 0x8c840150  lw          $a0, 0x150($a0)
    ctx->pc = 0x1d8408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1d840c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D840Cu;
    {
        const bool branch_taken_0x1d840c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D840Cu;
        // 0x1d8410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d840c) {
            ctx->pc = 0x1D8440u;
            goto label_1d8440;
        }
    }
    ctx->pc = 0x1D8414u;
    // 0x1d8414: 0x8c830110  lw          $v1, 0x110($a0)
    ctx->pc = 0x1d8414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
label_1d8418:
    // 0x1d8418: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D8418u;
    {
        const bool branch_taken_0x1d8418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8418u;
        // 0x1d841c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8418) {
            ctx->pc = 0x1D8440u;
            goto label_1d8440;
        }
    }
    ctx->pc = 0x1D8420u;
    // 0x1d8420: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x1d8420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1d8424: 0x0  nop
    ctx->pc = 0x1d8424u;
    // NOP
    // 0x1d8428: 0x0  nop
    ctx->pc = 0x1d8428u;
    // NOP
    // 0x1d842c: 0x0  nop
    ctx->pc = 0x1d842cu;
    // NOP
    // 0x1d8430: 0x0  nop
    ctx->pc = 0x1d8430u;
    // NOP
    // 0x1d8434: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D8434u;
    {
        const bool branch_taken_0x1d8434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8434) {
            ctx->pc = 0x1D8438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8434u;
            // 0x1d8438: 0x8c830110  lw          $v1, 0x110($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8418;
        }
    }
    ctx->pc = 0x1D843Cu;
    // 0x1d843c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8440:
    // 0x1d8440: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8448u;
}
