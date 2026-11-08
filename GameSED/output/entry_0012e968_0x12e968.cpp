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

// Function: entry_0012e968
// Address: 0x12e968 - 0x12e98c
void entry_0012e968_0x12e968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e968_0x12e968");
#endif

    switch (ctx->pc) {
        case 0x12e978u: goto label_12e978;
        default: break;
    }

    ctx->pc = 0x12e968u;

label_12e968:
    // 0x12e968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e96c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12e96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e970: 0xc04bbf0  jal         func_12EFC0
    ctx->pc = 0x12E970u;
    SET_GPR_U32(ctx, 31, 0x12E978u);
    ctx->pc = 0x12E974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E970u;
    // 0x12e974: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFC0u, 0x12E970u, 0x12E978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E978u;
label_12e978:
    // 0x12e978: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x12e978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x12e97c: 0x253182b  sltu        $v1, $s2, $s3
    ctx->pc = 0x12e97cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x12e980: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x12e980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x12e984: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12E984u;
    {
        const bool branch_taken_0x12e984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E984u;
        // 0x12e988: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e984) {
            ctx->pc = 0x12E968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e968;
        }
    }
    ctx->pc = 0x12E98Cu;
}
