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

// Function: entry_001b2920
// Address: 0x1b2920 - 0x1b2944
void entry_001b2920_0x1b2920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2920_0x1b2920");
#endif

    switch (ctx->pc) {
        case 0x1b2928u: goto label_1b2928;
        case 0x1b293cu: goto label_1b293c;
        default: break;
    }

    ctx->pc = 0x1b2920u;

    // 0x1b2920: 0xc06c7f8  jal         func_1B1FE0
    ctx->pc = 0x1B2920u;
    SET_GPR_U32(ctx, 31, 0x1B2928u);
    ctx->pc = 0x1B1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1FE0u, 0x1B2920u, 0x1B2928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2928u;
label_1b2928:
    // 0x1b2928: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1b2928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b292c: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B292Cu;
    {
        const bool branch_taken_0x1b292c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b292c) {
            ctx->pc = 0x1B2930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B292Cu;
            // 0x1b2930: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2944u;
            return;
        }
    }
    ctx->pc = 0x1B2934u;
    // 0x1b2934: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B2934u;
    SET_GPR_U32(ctx, 31, 0x1B293Cu);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B2934u, 0x1B293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B293Cu;
label_1b293c:
    // 0x1b293c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1B293Cu;
    {
        const bool branch_taken_0x1b293c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B293Cu;
        // 0x1b2940: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b293c) {
            ctx->pc = 0x1B2ADCu;
            return;
        }
    }
    ctx->pc = 0x1B2944u;
}
