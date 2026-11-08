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

// Function: entry_001890d0
// Address: 0x1890d0 - 0x189100
void entry_001890d0_0x1890d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001890d0_0x1890d0");
#endif

    switch (ctx->pc) {
        case 0x1890e0u: goto label_1890e0;
        case 0x1890f4u: goto label_1890f4;
        default: break;
    }

    ctx->pc = 0x1890d0u;

    // 0x1890d0: 0x266600e0  addiu       $a2, $s3, 0xE0
    ctx->pc = 0x1890d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    // 0x1890d4: 0x266700f0  addiu       $a3, $s3, 0xF0
    ctx->pc = 0x1890d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
    // 0x1890d8: 0xc06f060  jal         func_1BC180
    ctx->pc = 0x1890D8u;
    SET_GPR_U32(ctx, 31, 0x1890E0u);
    ctx->pc = 0x1890DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1890D8u;
    // 0x1890dc: 0x26680090  addiu       $t0, $s3, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC180u, 0x1890D8u, 0x1890E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1890E0u;
label_1890e0:
    // 0x1890e0: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x1890e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x1890e4: 0x266500a0  addiu       $a1, $s3, 0xA0
    ctx->pc = 0x1890e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x1890e8: 0x266600b0  addiu       $a2, $s3, 0xB0
    ctx->pc = 0x1890e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x1890ec: 0xc06f030  jal         func_1BC0C0
    ctx->pc = 0x1890ECu;
    SET_GPR_U32(ctx, 31, 0x1890F4u);
    ctx->pc = 0x1890F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1890ECu;
    // 0x1890f0: 0x266700c0  addiu       $a3, $s3, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC0C0u, 0x1890ECu, 0x1890F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1890F4u;
label_1890f4:
    // 0x1890f4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1890F4u;
    {
        const bool branch_taken_0x1890f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890F4u;
        // 0x1890f8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890f4) {
            ctx->pc = 0x1891A0u;
            return;
        }
    }
    ctx->pc = 0x1890FCu;
    // 0x1890fc: 0x0  nop
    ctx->pc = 0x1890fcu;
    // NOP
    ctx->pc = 0x189100u;
}
