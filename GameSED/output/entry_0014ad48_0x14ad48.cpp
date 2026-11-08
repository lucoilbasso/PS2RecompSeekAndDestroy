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

// Function: entry_0014ad48
// Address: 0x14ad48 - 0x14ad6c
void entry_0014ad48_0x14ad48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ad48_0x14ad48");
#endif

    switch (ctx->pc) {
        case 0x14ad68u: goto label_14ad68;
        default: break;
    }

    ctx->pc = 0x14ad48u;

    // 0x14ad48: 0x920201ab  lbu         $v0, 0x1AB($s0)
    ctx->pc = 0x14ad48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 427)));
    // 0x14ad4c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14ad4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ad50: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14AD50u;
    {
        const bool branch_taken_0x14ad50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ad50) {
            ctx->pc = 0x14AD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AD50u;
            // 0x14ad54: 0x8ea201c0  lw          $v0, 0x1C0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AD6Cu;
            return;
        }
    }
    ctx->pc = 0x14AD58u;
    // 0x14ad58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ad58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad5c: 0x26856bd8  addiu       $a1, $s4, 0x6BD8
    ctx->pc = 0x14ad5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 27608));
    // 0x14ad60: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14AD60u;
    SET_GPR_U32(ctx, 31, 0x14AD68u);
    ctx->pc = 0x14AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD60u;
    // 0x14ad64: 0x2406003b  addiu       $a2, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14AD60u, 0x14AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD68u;
label_14ad68:
    // 0x14ad68: 0x8ea201c0  lw          $v0, 0x1C0($s5)
    ctx->pc = 0x14ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 448)));
    ctx->pc = 0x14ad6cu;
}
