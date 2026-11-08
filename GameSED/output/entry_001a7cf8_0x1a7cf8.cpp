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

// Function: entry_001a7cf8
// Address: 0x1a7cf8 - 0x1a7d28
void entry_001a7cf8_0x1a7cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7cf8_0x1a7cf8");
#endif

    switch (ctx->pc) {
        case 0x1a7d24u: goto label_1a7d24;
        default: break;
    }

    ctx->pc = 0x1a7cf8u;

    // 0x1a7cf8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1a7cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1a7cfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a7cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a7d00: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a7d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7d04: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a7d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a7d08: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a7d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a7d0c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1a7d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a7d10: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a7d10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a7d14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7D14u;
    {
        const bool branch_taken_0x1a7d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D14u;
        // 0x1a7d18: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d14) {
            ctx->pc = 0x1A7D28u;
            return;
        }
    }
    ctx->pc = 0x1A7D1Cu;
    // 0x1a7d1c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7D1Cu;
    SET_GPR_U32(ctx, 31, 0x1A7D24u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7D1Cu, 0x1A7D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7D24u;
label_1a7d24:
    // 0x1a7d24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a7d28u;
}
