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

// Function: entry_0017e004
// Address: 0x17e004 - 0x17e040
void entry_0017e004_0x17e004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e004_0x17e004");
#endif

    switch (ctx->pc) {
        case 0x17e00cu: goto label_17e00c;
        case 0x17e03cu: goto label_17e03c;
        default: break;
    }

    ctx->pc = 0x17e004u;

    // 0x17e004: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17E004u;
    SET_GPR_U32(ctx, 31, 0x17E00Cu);
    ctx->pc = 0x17E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E004u;
    // 0x17e008: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17E004u, 0x17E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E00Cu;
label_17e00c:
    // 0x17e00c: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x17e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17e010: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x17e010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17e014: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17e014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17e018: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17e018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17e01c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e020: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17e020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17e024: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17e024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17e028: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x17e028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17e02c: 0x50900004  beql        $a0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E02Cu;
    {
        const bool branch_taken_0x17e02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x17e02c) {
            ctx->pc = 0x17E030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E02Cu;
            // 0x17e030: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E040u;
            return;
        }
    }
    ctx->pc = 0x17E034u;
    // 0x17e034: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17E034u;
    SET_GPR_U32(ctx, 31, 0x17E03Cu);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17E034u, 0x17E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E03Cu;
label_17e03c:
    // 0x17e03c: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x17e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->pc = 0x17e040u;
}
