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

// Function: entry_00120d08
// Address: 0x120d08 - 0x120d28
void entry_00120d08_0x120d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120d08_0x120d08");
#endif

    switch (ctx->pc) {
        case 0x120d18u: goto label_120d18;
        default: break;
    }

    ctx->pc = 0x120d08u;

label_120d08:
    // 0x120d08: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x120d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x120d0c: 0x26460090  addiu       $a2, $s2, 0x90
    ctx->pc = 0x120d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x120d10: 0xc04c904  jal         func_132410
    ctx->pc = 0x120D10u;
    SET_GPR_U32(ctx, 31, 0x120D18u);
    ctx->pc = 0x120D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120D10u;
    // 0x120d14: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132410u, 0x120D10u, 0x120D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D18u;
label_120d18:
    // 0x120d18: 0x8e310054  lw          $s1, 0x54($s1)
    ctx->pc = 0x120d18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x120d1c: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x120D1Cu;
    {
        const bool branch_taken_0x120d1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x120D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D1Cu;
        // 0x120d20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d1c) {
            ctx->pc = 0x120D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120d08;
        }
    }
    ctx->pc = 0x120D24u;
    // 0x120d24: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x120d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->pc = 0x120d28u;
}
