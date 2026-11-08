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

// Function: entry_0016dafc
// Address: 0x16dafc - 0x16db18
void entry_0016dafc_0x16dafc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dafc_0x16dafc");
#endif

    switch (ctx->pc) {
        case 0x16db08u: goto label_16db08;
        default: break;
    }

    ctx->pc = 0x16dafcu;

    // 0x16dafc: 0xae0202b4  sw          $v0, 0x2B4($s0)
    ctx->pc = 0x16dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
    // 0x16db00: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16DB00u;
    SET_GPR_U32(ctx, 31, 0x16DB08u);
    ctx->pc = 0x16DB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB00u;
    // 0x16db04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16DB00u, 0x16DB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB08u;
label_16db08:
    // 0x16db08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DB08u;
    {
        const bool branch_taken_0x16db08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16db08) {
            ctx->pc = 0x16DB18u;
            return;
        }
    }
    ctx->pc = 0x16DB10u;
    // 0x16db10: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16DB10u;
    {
        const bool branch_taken_0x16db10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB10u;
        // 0x16db14: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db10) {
            ctx->pc = 0x16DB54u;
            return;
        }
    }
    ctx->pc = 0x16DB18u;
}
