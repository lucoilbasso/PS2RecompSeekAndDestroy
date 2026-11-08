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

// Function: entry_0013c950
// Address: 0x13c950 - 0x13c984
void entry_0013c950_0x13c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c950_0x13c950");
#endif

    switch (ctx->pc) {
        case 0x13c96cu: goto label_13c96c;
        default: break;
    }

    ctx->pc = 0x13c950u;

    // 0x13c950: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13c950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13c954: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13c954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13c958: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13c958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13c95c: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x13c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x13c960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c964: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x13C964u;
    SET_GPR_U32(ctx, 31, 0x13C96Cu);
    ctx->pc = 0x13C968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C964u;
    // 0x13c968: 0x8c5401e4  lw          $s4, 0x1E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x13C964u, 0x13C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C96Cu;
label_13c96c:
    // 0x13c96c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C96Cu;
    {
        const bool branch_taken_0x13c96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C96Cu;
        // 0x13c970: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c96c) {
            ctx->pc = 0x13C984u;
            return;
        }
    }
    ctx->pc = 0x13C974u;
    // 0x13c974: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13c978: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x13c978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x13c97c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C97Cu;
    {
        const bool branch_taken_0x13c97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C97Cu;
        // 0x13c980: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c97c) {
            ctx->pc = 0x13C990u;
            return;
        }
    }
    ctx->pc = 0x13C984u;
}
