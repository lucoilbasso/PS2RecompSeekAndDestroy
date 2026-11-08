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

// Function: entry_001c7b44
// Address: 0x1c7b44 - 0x1c7b70
void entry_001c7b44_0x1c7b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7b44_0x1c7b44");
#endif

    switch (ctx->pc) {
        case 0x1c7b58u: goto label_1c7b58;
        default: break;
    }

    ctx->pc = 0x1c7b44u;

    // 0x1c7b44: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1c7b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1c7b48: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7B48u;
    {
        const bool branch_taken_0x1c7b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B48u;
        // 0x1c7b4c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b48) {
            ctx->pc = 0x1C7B70u;
            return;
        }
    }
    ctx->pc = 0x1C7B50u;
    // 0x1c7b50: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C7B50u;
    SET_GPR_U32(ctx, 31, 0x1C7B58u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C7B50u, 0x1C7B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B58u;
label_1c7b58:
    // 0x1c7b58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7B58u;
    {
        const bool branch_taken_0x1c7b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7b58) {
            ctx->pc = 0x1C7B70u;
            return;
        }
    }
    ctx->pc = 0x1C7B60u;
    // 0x1c7b60: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1c7b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b64: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1C7B64u;
    {
        const bool branch_taken_0x1c7b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B64u;
        // 0x1c7b68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b64) {
            ctx->pc = 0x1C7D18u;
            return;
        }
    }
    ctx->pc = 0x1C7B6Cu;
    // 0x1c7b6c: 0x0  nop
    ctx->pc = 0x1c7b6cu;
    // NOP
    ctx->pc = 0x1c7b70u;
}
