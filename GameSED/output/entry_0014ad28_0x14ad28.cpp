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

// Function: entry_0014ad28
// Address: 0x14ad28 - 0x14ad48
void entry_0014ad28_0x14ad28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ad28_0x14ad28");
#endif

    switch (ctx->pc) {
        case 0x14ad40u: goto label_14ad40;
        default: break;
    }

    ctx->pc = 0x14ad28u;

    // 0x14ad28: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14AD28u;
    {
        const bool branch_taken_0x14ad28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD28u;
        // 0x14ad2c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad28) {
            ctx->pc = 0x14AD48u;
            return;
        }
    }
    ctx->pc = 0x14AD30u;
    // 0x14ad30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ad30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad34: 0x26856bd8  addiu       $a1, $s4, 0x6BD8
    ctx->pc = 0x14ad34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 27608));
    // 0x14ad38: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14AD38u;
    SET_GPR_U32(ctx, 31, 0x14AD40u);
    ctx->pc = 0x14AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD38u;
    // 0x14ad3c: 0x24060041  addiu       $a2, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14AD38u, 0x14AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD40u;
label_14ad40:
    // 0x14ad40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14AD40u;
    {
        const bool branch_taken_0x14ad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AD40u;
        // 0x14ad44: 0x8ea201c0  lw          $v0, 0x1C0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad40) {
            ctx->pc = 0x14AD6Cu;
            return;
        }
    }
    ctx->pc = 0x14AD48u;
}
