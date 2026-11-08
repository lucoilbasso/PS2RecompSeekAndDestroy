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

// Function: entry_00128960
// Address: 0x128960 - 0x128990
void entry_00128960_0x128960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128960_0x128960");
#endif

    switch (ctx->pc) {
        case 0x128968u: goto label_128968;
        default: break;
    }

    ctx->pc = 0x128960u;

label_128960:
    // 0x128960: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x128960u;
    SET_GPR_U32(ctx, 31, 0x128968u);
    ctx->pc = 0x128964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128960u;
    // 0x128964: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x128960u, 0x128968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128968u;
label_128968:
    // 0x128968: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x128968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x12896c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12896Cu;
    {
        const bool branch_taken_0x12896c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x128970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12896Cu;
        // 0x128970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12896c) {
            ctx->pc = 0x128960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128960;
        }
    }
    ctx->pc = 0x128974u;
    // 0x128974: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x128974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x128978: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x128978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12897c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12897Cu;
    {
        const bool branch_taken_0x12897c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12897Cu;
        // 0x128980: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12897c) {
            ctx->pc = 0x128990u;
            return;
        }
    }
    ctx->pc = 0x128984u;
    // 0x128984: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x128984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x128988: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x128988u;
    SET_GPR_U32(ctx, 31, 0x128990u);
    ctx->pc = 0x12898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128988u;
    // 0x12898c: 0xae510090  sw          $s1, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x128988u, 0x128990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128990u;
}
