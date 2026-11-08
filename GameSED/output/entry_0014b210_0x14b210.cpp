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

// Function: entry_0014b210
// Address: 0x14b210 - 0x14b238
void entry_0014b210_0x14b210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b210_0x14b210");
#endif

    switch (ctx->pc) {
        case 0x14b234u: goto label_14b234;
        default: break;
    }

    ctx->pc = 0x14b210u;

    // 0x14b210: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14b210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14b214: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14b214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14b218: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B218u;
    {
        const bool branch_taken_0x14b218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b218) {
            ctx->pc = 0x14B21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B218u;
            // 0x14b21c: 0x8e1001c0  lw          $s0, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B238u;
            return;
        }
    }
    ctx->pc = 0x14B220u;
    // 0x14b220: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14b224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b228: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x14b228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x14b22c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14B22Cu;
    SET_GPR_U32(ctx, 31, 0x14B234u);
    ctx->pc = 0x14B230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B22Cu;
    // 0x14b230: 0x24a56bd8  addiu       $a1, $a1, 0x6BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B22Cu, 0x14B234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B234u;
label_14b234:
    // 0x14b234: 0x8e1001c0  lw          $s0, 0x1C0($s0)
    ctx->pc = 0x14b234u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    ctx->pc = 0x14b238u;
}
