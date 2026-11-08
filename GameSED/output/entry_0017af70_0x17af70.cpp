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

// Function: entry_0017af70
// Address: 0x17af70 - 0x17af90
void entry_0017af70_0x17af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017af70_0x17af70");
#endif

    switch (ctx->pc) {
        case 0x17af88u: goto label_17af88;
        default: break;
    }

    ctx->pc = 0x17af70u;

    // 0x17af70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17af70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17af74: 0x14460006  bne         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AF74u;
    {
        const bool branch_taken_0x17af74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x17AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF74u;
        // 0x17af78: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af74) {
            ctx->pc = 0x17AF90u;
            return;
        }
    }
    ctx->pc = 0x17AF7Cu;
    // 0x17af7c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x17af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x17af80: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17AF80u;
    SET_GPR_U32(ctx, 31, 0x17AF88u);
    ctx->pc = 0x17AF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AF80u;
    // 0x17af84: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17AF80u, 0x17AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AF88u;
label_17af88:
    // 0x17af88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17AF88u;
    {
        const bool branch_taken_0x17af88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF88u;
        // 0x17af8c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af88) {
            ctx->pc = 0x17AFA8u;
            return;
        }
    }
    ctx->pc = 0x17AF90u;
}
