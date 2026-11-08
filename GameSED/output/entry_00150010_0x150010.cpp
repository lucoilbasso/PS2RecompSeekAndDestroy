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

// Function: entry_00150010
// Address: 0x150010 - 0x150030
void entry_00150010_0x150010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150010_0x150010");
#endif

    switch (ctx->pc) {
        case 0x150018u: goto label_150018;
        default: break;
    }

    ctx->pc = 0x150010u;

    // 0x150010: 0xc05967c  jal         func_1659F0
    ctx->pc = 0x150010u;
    SET_GPR_U32(ctx, 31, 0x150018u);
    ctx->pc = 0x1659F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659F0u, 0x150010u, 0x150018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150018u;
label_150018:
    // 0x150018: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x150018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x15001c: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x15001cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x150020: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x150020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x150024: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x150024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x150028: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x150028u;
    {
        const bool branch_taken_0x150028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150028) {
            ctx->pc = 0x15002Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150028u;
            // 0x15002c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150048u;
            return;
        }
    }
    ctx->pc = 0x150030u;
}
