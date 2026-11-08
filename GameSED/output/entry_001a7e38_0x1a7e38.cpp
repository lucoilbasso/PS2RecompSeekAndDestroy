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

// Function: entry_001a7e38
// Address: 0x1a7e38 - 0x1a7e68
void entry_001a7e38_0x1a7e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7e38_0x1a7e38");
#endif

    switch (ctx->pc) {
        case 0x1a7e64u: goto label_1a7e64;
        default: break;
    }

    ctx->pc = 0x1a7e38u;

    // 0x1a7e38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a7e3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a7e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a7e40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a7e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7e44: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a7e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a7e48: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a7e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a7e4c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1a7e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a7e50: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a7e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a7e54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7E54u;
    {
        const bool branch_taken_0x1a7e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E54u;
        // 0x1a7e58: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e54) {
            ctx->pc = 0x1A7E68u;
            return;
        }
    }
    ctx->pc = 0x1A7E5Cu;
    // 0x1a7e5c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7E5Cu;
    SET_GPR_U32(ctx, 31, 0x1A7E64u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7E5Cu, 0x1A7E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7E64u;
label_1a7e64:
    // 0x1a7e64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a7e68u;
}
