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

// Function: entry_001c8030
// Address: 0x1c8030 - 0x1c8058
void entry_001c8030_0x1c8030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8030_0x1c8030");
#endif

    switch (ctx->pc) {
        case 0x1c804cu: goto label_1c804c;
        default: break;
    }

    ctx->pc = 0x1c8030u;

    // 0x1c8030: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x1c8030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1c8034: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8034u;
    {
        const bool branch_taken_0x1c8034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8034u;
        // 0x1c8038: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8034) {
            ctx->pc = 0x1C8058u;
            return;
        }
    }
    ctx->pc = 0x1C803Cu;
    // 0x1c803c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1c803cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8040: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c8040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8044: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C8044u;
    SET_GPR_U32(ctx, 31, 0x1C804Cu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C8044u, 0x1C804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C804Cu;
label_1c804c:
    // 0x1c804c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1C804Cu;
    {
        const bool branch_taken_0x1c804c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C804Cu;
        // 0x1c8050: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c804c) {
            ctx->pc = 0x1C815Cu;
            return;
        }
    }
    ctx->pc = 0x1C8054u;
    // 0x1c8054: 0x0  nop
    ctx->pc = 0x1c8054u;
    // NOP
    ctx->pc = 0x1c8058u;
}
