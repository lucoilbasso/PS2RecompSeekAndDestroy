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

// Function: entry_001c6b80
// Address: 0x1c6b80 - 0x1c6bb0
void entry_001c6b80_0x1c6b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6b80_0x1c6b80");
#endif

    switch (ctx->pc) {
        case 0x1c6b98u: goto label_1c6b98;
        default: break;
    }

    ctx->pc = 0x1c6b80u;

    // 0x1c6b80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c6b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c6b84: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1c6b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c6b88: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6B88u;
    {
        const bool branch_taken_0x1c6b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6b88) {
            ctx->pc = 0x1C6B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6B88u;
            // 0x1c6b8c: 0x102503  sra         $a0, $s0, 20 (Delay Slot)
            SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6BB0u;
            return;
        }
    }
    ctx->pc = 0x1C6B90u;
    // 0x1c6b90: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6B90u;
    SET_GPR_U32(ctx, 31, 0x1C6B98u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6B90u, 0x1C6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B98u;
label_1c6b98:
    // 0x1c6b98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c6b98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b9c: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1c6b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1c6ba0: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x1c6ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x1c6ba4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1C6BA4u;
    {
        const bool branch_taken_0x1c6ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BA4u;
        // 0x1c6ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ba4) {
            ctx->pc = 0x1C6CA8u;
            return;
        }
    }
    ctx->pc = 0x1C6BACu;
    // 0x1c6bac: 0x0  nop
    ctx->pc = 0x1c6bacu;
    // NOP
    ctx->pc = 0x1c6bb0u;
}
