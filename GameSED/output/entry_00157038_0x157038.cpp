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

// Function: entry_00157038
// Address: 0x157038 - 0x157060
void entry_00157038_0x157038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157038_0x157038");
#endif

    switch (ctx->pc) {
        case 0x157040u: goto label_157040;
        case 0x157048u: goto label_157048;
        default: break;
    }

    ctx->pc = 0x157038u;

    // 0x157038: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x157038u;
    SET_GPR_U32(ctx, 31, 0x157040u);
    ctx->pc = 0x15703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157038u;
    // 0x15703c: 0x24042118  addiu       $a0, $zero, 0x2118 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x157038u, 0x157040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157040u;
label_157040:
    // 0x157040: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x157040u;
    SET_GPR_U32(ctx, 31, 0x157048u);
    ctx->pc = 0x157044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157040u;
    // 0x157044: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x157040u, 0x157048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157048u;
label_157048:
    // 0x157048: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x157048u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15704c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x15704cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x157050: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x157050u;
    {
        const bool branch_taken_0x157050 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x157054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157050u;
        // 0x157054: 0xac72000c  sw          $s2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157050) {
            ctx->pc = 0x157060u;
            return;
        }
    }
    ctx->pc = 0x157058u;
    // 0x157058: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x157058u;
    {
        const bool branch_taken_0x157058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157058u;
        // 0x15705c: 0xaf838b2c  sw          $v1, -0x74D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157058) {
            ctx->pc = 0x157068u;
            return;
        }
    }
    ctx->pc = 0x157060u;
}
