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

// Function: entry_00187ee8
// Address: 0x187ee8 - 0x187f20
void entry_00187ee8_0x187ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187ee8_0x187ee8");
#endif

    switch (ctx->pc) {
        case 0x187ef0u: goto label_187ef0;
        default: break;
    }

    ctx->pc = 0x187ee8u;

label_187ee8:
    // 0x187ee8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x187EE8u;
    SET_GPR_U32(ctx, 31, 0x187EF0u);
    ctx->pc = 0x187EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EE8u;
    // 0x187eec: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x187EE8u, 0x187EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187EF0u;
label_187ef0:
    // 0x187ef0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x187ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x187ef4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x187EF4u;
    {
        const bool branch_taken_0x187ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x187EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EF4u;
        // 0x187ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ef4) {
            ctx->pc = 0x187EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187ee8;
        }
    }
    ctx->pc = 0x187EFCu;
    // 0x187efc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x187efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x187f00: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x187F00u;
    {
        const bool branch_taken_0x187f00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F00u;
        // 0x187f04: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f00) {
            ctx->pc = 0x187F20u;
            return;
        }
    }
    ctx->pc = 0x187F08u;
    // 0x187f08: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x187f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x187f0c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x187f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x187f10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x187f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x187f14: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x187f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x187f18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x187F18u;
    {
        const bool branch_taken_0x187f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F18u;
        // 0x187f1c: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f18) {
            ctx->pc = 0x187F28u;
            return;
        }
    }
    ctx->pc = 0x187F20u;
}
