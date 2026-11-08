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

// Function: entry_001048d8
// Address: 0x1048d8 - 0x104910
void entry_001048d8_0x1048d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001048d8_0x1048d8");
#endif

    switch (ctx->pc) {
        case 0x104904u: goto label_104904;
        default: break;
    }

    ctx->pc = 0x1048d8u;

    // 0x1048d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1048d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1048dc: 0x24651400  addiu       $a1, $v1, 0x1400
    ctx->pc = 0x1048dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5120));
    // 0x1048e0: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1048e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1048e4: 0x8c621400  lw          $v0, 0x1400($v1)
    ctx->pc = 0x1048e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5120)));
    // 0x1048e8: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1048e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1048ec: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1048ECu;
    {
        const bool branch_taken_0x1048ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1048F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1048ECu;
        // 0x1048f0: 0xac621400  sw          $v0, 0x1400($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1048ec) {
            ctx->pc = 0x104910u;
            return;
        }
    }
    ctx->pc = 0x1048F4u;
    // 0x1048f4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1048f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1048f8: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x1048f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1048fc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1048FCu;
    SET_GPR_U32(ctx, 31, 0x104904u);
    ctx->pc = 0x104900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1048FCu;
    // 0x104900: 0x24a53828  addiu       $a1, $a1, 0x3828 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1048FCu, 0x104904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104904u;
label_104904:
    // 0x104904: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x104904u;
    {
        const bool branch_taken_0x104904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104904u;
        // 0x104908: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104904) {
            ctx->pc = 0x104920u;
            return;
        }
    }
    ctx->pc = 0x10490Cu;
    // 0x10490c: 0x0  nop
    ctx->pc = 0x10490cu;
    // NOP
    ctx->pc = 0x104910u;
}
