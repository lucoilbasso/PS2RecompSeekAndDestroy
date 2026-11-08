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

// Function: entry_0017bf20
// Address: 0x17bf20 - 0x17bf50
void entry_0017bf20_0x17bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bf20_0x17bf20");
#endif

    switch (ctx->pc) {
        case 0x17bf2cu: goto label_17bf2c;
        default: break;
    }

    ctx->pc = 0x17bf20u;

label_17bf20:
    // 0x17bf20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17bf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf24: 0xc05e9ca  jal         func_17A728
    ctx->pc = 0x17BF24u;
    SET_GPR_U32(ctx, 31, 0x17BF2Cu);
    ctx->pc = 0x17BF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF24u;
    // 0x17bf28: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A728u, 0x17BF24u, 0x17BF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF2Cu;
label_17bf2c:
    // 0x17bf2c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x17bf30: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x17bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x17bf34: 0xae13004c  sw          $s3, 0x4C($s0)
    ctx->pc = 0x17bf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 19));
    // 0x17bf38: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17BF38u;
    {
        const bool branch_taken_0x17bf38 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF38u;
        // 0x17bf3c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf38) {
            ctx->pc = 0x17BF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bf20;
        }
    }
    ctx->pc = 0x17BF40u;
    // 0x17bf40: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17bf44: 0x26440254  addiu       $a0, $s2, 0x254
    ctx->pc = 0x17bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 596));
    // 0x17bf48: 0x2445e9b0  addiu       $a1, $v0, -0x1650
    ctx->pc = 0x17bf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961584));
    // 0x17bf4c: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x17bf4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x17bf50u;
}
