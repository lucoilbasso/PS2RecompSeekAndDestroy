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

// Function: entry_00178950
// Address: 0x178950 - 0x178970
void entry_00178950_0x178950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178950_0x178950");
#endif

    switch (ctx->pc) {
        case 0x178968u: goto label_178968;
        default: break;
    }

    ctx->pc = 0x178950u;

    // 0x178950: 0x1cc00007  bgtz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x178950u;
    {
        const bool branch_taken_0x178950 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x178954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178950u;
        // 0x178954: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178950) {
            ctx->pc = 0x178970u;
            return;
        }
    }
    ctx->pc = 0x178958u;
    // 0x178958: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x178958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17895c: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x17895cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x178960: 0xc05f358  jal         func_17CD60
    ctx->pc = 0x178960u;
    SET_GPR_U32(ctx, 31, 0x178968u);
    ctx->pc = 0x178964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178960u;
    // 0x178964: 0x52ac0  sll         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CD60u, 0x178960u, 0x178968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178968u;
label_178968:
    // 0x178968: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x178968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x17896c: 0x0  nop
    ctx->pc = 0x17896cu;
    // NOP
    ctx->pc = 0x178970u;
}
