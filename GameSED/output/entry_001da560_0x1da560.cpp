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

// Function: entry_001da560
// Address: 0x1da560 - 0x1da590
void entry_001da560_0x1da560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da560_0x1da560");
#endif

    ctx->pc = 0x1da560u;

label_1da560:
    // 0x1da560: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1da560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1da564: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1da564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1da568: 0x0  nop
    ctx->pc = 0x1da568u;
    // NOP
    // 0x1da56c: 0x0  nop
    ctx->pc = 0x1da56cu;
    // NOP
    // 0x1da570: 0x0  nop
    ctx->pc = 0x1da570u;
    // NOP
    // 0x1da574: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DA574u;
    {
        const bool branch_taken_0x1da574 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DA578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA574u;
        // 0x1da578: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da574) {
            ctx->pc = 0x1DA560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da560;
        }
    }
    ctx->pc = 0x1DA57Cu;
    // 0x1da57c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1da57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1da580: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1da580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da584: 0xac800fc8  sw          $zero, 0xFC8($a0)
    ctx->pc = 0x1da584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4040), GPR_U32(ctx, 0));
    // 0x1da588: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA588u;
        // 0x1da58c: 0xe4800fc4  swc1        $f0, 0xFC4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4036), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA590u;
}
