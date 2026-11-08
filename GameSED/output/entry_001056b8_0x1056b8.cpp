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

// Function: entry_001056b8
// Address: 0x1056b8 - 0x1056d8
void entry_001056b8_0x1056b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001056b8_0x1056b8");
#endif

    switch (ctx->pc) {
        case 0x1056d0u: goto label_1056d0;
        default: break;
    }

    ctx->pc = 0x1056b8u;

    // 0x1056b8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1056b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1056bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1056bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1056c0: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1056C0u;
    {
        const bool branch_taken_0x1056c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1056c0) {
            ctx->pc = 0x1056D8u;
            return;
        }
    }
    ctx->pc = 0x1056C8u;
    // 0x1056c8: 0xc05bcee  jal         func_16F3B8
    ctx->pc = 0x1056C8u;
    SET_GPR_U32(ctx, 31, 0x1056D0u);
    ctx->pc = 0x1056CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056C8u;
    // 0x1056cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F3B8u, 0x1056C8u, 0x1056D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056D0u;
label_1056d0:
    // 0x1056d0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1056D0u;
    {
        const bool branch_taken_0x1056d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1056D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1056D0u;
        // 0x1056d4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056d0) {
            ctx->pc = 0x1057A0u;
            return;
        }
    }
    ctx->pc = 0x1056D8u;
}
