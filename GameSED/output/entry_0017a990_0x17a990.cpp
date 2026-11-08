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

// Function: entry_0017a990
// Address: 0x17a990 - 0x17a9c0
void entry_0017a990_0x17a990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a990_0x17a990");
#endif

    switch (ctx->pc) {
        case 0x17a99cu: goto label_17a99c;
        default: break;
    }

    ctx->pc = 0x17a990u;

label_17a990:
    // 0x17a990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a994: 0xc05e9ca  jal         func_17A728
    ctx->pc = 0x17A994u;
    SET_GPR_U32(ctx, 31, 0x17A99Cu);
    ctx->pc = 0x17A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A994u;
    // 0x17a998: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A728u, 0x17A994u, 0x17A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A99Cu;
label_17a99c:
    // 0x17a99c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x17a9a0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x17a9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x17a9a4: 0xae13004c  sw          $s3, 0x4C($s0)
    ctx->pc = 0x17a9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 19));
    // 0x17a9a8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17A9A8u;
    {
        const bool branch_taken_0x17a9a8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9A8u;
        // 0x17a9ac: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9a8) {
            ctx->pc = 0x17A990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a990;
        }
    }
    ctx->pc = 0x17A9B0u;
    // 0x17a9b0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17a9b4: 0x26440254  addiu       $a0, $s2, 0x254
    ctx->pc = 0x17a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 596));
    // 0x17a9b8: 0x2445e960  addiu       $a1, $v0, -0x16A0
    ctx->pc = 0x17a9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961504));
    // 0x17a9bc: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x17a9bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x17a9c0u;
}
