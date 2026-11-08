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

// Function: entry_0014a630
// Address: 0x14a630 - 0x14a664
void entry_0014a630_0x14a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a630_0x14a630");
#endif

    switch (ctx->pc) {
        case 0x14a660u: goto label_14a660;
        default: break;
    }

    ctx->pc = 0x14a630u;

    // 0x14a630: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14a630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14a634: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14a634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a638: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14a638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14a63c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14a63cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a640: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14a640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14a644: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x14a644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14a648: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a64c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A64Cu;
    {
        const bool branch_taken_0x14a64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A64Cu;
        // 0x14a650: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a64c) {
            ctx->pc = 0x14A664u;
            return;
        }
    }
    ctx->pc = 0x14A654u;
    // 0x14a654: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14a654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14a658: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14A658u;
    SET_GPR_U32(ctx, 31, 0x14A660u);
    ctx->pc = 0x14A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A658u;
    // 0x14a65c: 0x24a56b68  addiu       $a1, $a1, 0x6B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14A658u, 0x14A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A660u;
label_14a660:
    // 0x14a660: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x14a664u;
}
