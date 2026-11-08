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

// Function: entry_00145154
// Address: 0x145154 - 0x145178
void entry_00145154_0x145154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145154_0x145154");
#endif

    switch (ctx->pc) {
        case 0x145170u: goto label_145170;
        default: break;
    }

    ctx->pc = 0x145154u;

    // 0x145154: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x145154u;
    {
        const bool branch_taken_0x145154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x145154) {
            ctx->pc = 0x145158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145154u;
            // 0x145158: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145178u;
            return;
        }
    }
    ctx->pc = 0x14515Cu;
    // 0x14515c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14515cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x145160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145164: 0x24a56a80  addiu       $a1, $a1, 0x6A80
    ctx->pc = 0x145164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27264));
    // 0x145168: 0xc068186  jal         func_1A0618
    ctx->pc = 0x145168u;
    SET_GPR_U32(ctx, 31, 0x145170u);
    ctx->pc = 0x14516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145168u;
    // 0x14516c: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x145168u, 0x145170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145170u;
label_145170:
    // 0x145170: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x145170u;
    {
        const bool branch_taken_0x145170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145170) {
            ctx->pc = 0x145194u;
            return;
        }
    }
    ctx->pc = 0x145178u;
}
