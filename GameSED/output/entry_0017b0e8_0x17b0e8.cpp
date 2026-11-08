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

// Function: entry_0017b0e8
// Address: 0x17b0e8 - 0x17b118
void entry_0017b0e8_0x17b0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b0e8_0x17b0e8");
#endif

    switch (ctx->pc) {
        case 0x17b0f4u: goto label_17b0f4;
        default: break;
    }

    ctx->pc = 0x17b0e8u;

label_17b0e8:
    // 0x17b0e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b0ec: 0xc05e9ca  jal         func_17A728
    ctx->pc = 0x17B0ECu;
    SET_GPR_U32(ctx, 31, 0x17B0F4u);
    ctx->pc = 0x17B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B0ECu;
    // 0x17b0f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A728u, 0x17B0ECu, 0x17B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0F4u;
label_17b0f4:
    // 0x17b0f4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17b0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x17b0f8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x17b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x17b0fc: 0xae13004c  sw          $s3, 0x4C($s0)
    ctx->pc = 0x17b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 19));
    // 0x17b100: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17B100u;
    {
        const bool branch_taken_0x17b100 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B100u;
        // 0x17b104: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b100) {
            ctx->pc = 0x17B0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b0e8;
        }
    }
    ctx->pc = 0x17B108u;
    // 0x17b108: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17b108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17b10c: 0x26440134  addiu       $a0, $s2, 0x134
    ctx->pc = 0x17b10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 308));
    // 0x17b110: 0x2445e9a0  addiu       $a1, $v0, -0x1660
    ctx->pc = 0x17b110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961568));
    // 0x17b114: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17b114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17b118u;
}
