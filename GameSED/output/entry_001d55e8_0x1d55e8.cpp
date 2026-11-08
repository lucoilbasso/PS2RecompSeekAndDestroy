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

// Function: entry_001d55e8
// Address: 0x1d55e8 - 0x1d560c
void entry_001d55e8_0x1d55e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d55e8_0x1d55e8");
#endif

    switch (ctx->pc) {
        case 0x1d5604u: goto label_1d5604;
        default: break;
    }

    ctx->pc = 0x1d55e8u;

label_1d55e8:
    // 0x1d55e8: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d55e8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d55ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d55ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d55f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d55f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d55f4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d55f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d55f8: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x1d55f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x1d55fc: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D55FCu;
    SET_GPR_U32(ctx, 31, 0x1D5604u);
    ctx->pc = 0x1D5600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D55FCu;
    // 0x1d5600: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D55FCu, 0x1D5604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5604u;
label_1d5604:
    // 0x1d5604: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D5604u;
    {
        const bool branch_taken_0x1d5604 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5604u;
        // 0x1d5608: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5604) {
            ctx->pc = 0x1D55E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d55e8;
        }
    }
    ctx->pc = 0x1D560Cu;
}
