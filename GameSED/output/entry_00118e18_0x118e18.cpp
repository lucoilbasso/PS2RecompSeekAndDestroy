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

// Function: entry_00118e18
// Address: 0x118e18 - 0x118e48
void entry_00118e18_0x118e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118e18_0x118e18");
#endif

    switch (ctx->pc) {
        case 0x118e24u: goto label_118e24;
        default: break;
    }

    ctx->pc = 0x118e18u;

label_118e18:
    // 0x118e18: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x118e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x118e1c: 0xc0463a2  jal         func_118E88
    ctx->pc = 0x118E1Cu;
    SET_GPR_U32(ctx, 31, 0x118E24u);
    ctx->pc = 0x118E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E1Cu;
    // 0x118e20: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E88u, 0x118E1Cu, 0x118E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E24u;
label_118e24:
    // 0x118e24: 0x621fffc  bgez        $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x118E24u;
    {
        const bool branch_taken_0x118e24 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x118E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E24u;
        // 0x118e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e24) {
            ctx->pc = 0x118E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118e18;
        }
    }
    ctx->pc = 0x118E2Cu;
    // 0x118e2c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x118e2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x118e30: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x118e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x118e34: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x118E34u;
    {
        const bool branch_taken_0x118e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E34u;
        // 0x118e38: 0x265200c8  addiu       $s2, $s2, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e34) {
            ctx->pc = 0x118E08u;
            return;
        }
    }
    ctx->pc = 0x118E3Cu;
    // 0x118e3c: 0x26640267  addiu       $a0, $s3, 0x267
    ctx->pc = 0x118e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 615));
    // 0x118e40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x118e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118e44: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x118e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x118e48u;
}
