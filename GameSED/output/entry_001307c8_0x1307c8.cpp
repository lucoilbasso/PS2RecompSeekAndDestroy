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

// Function: entry_001307c8
// Address: 0x1307c8 - 0x1307f0
void entry_001307c8_0x1307c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001307c8_0x1307c8");
#endif

    switch (ctx->pc) {
        case 0x1307d4u: goto label_1307d4;
        default: break;
    }

    ctx->pc = 0x1307c8u;

    // 0x1307c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1307c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307cc: 0xc04844a  jal         func_121128
    ctx->pc = 0x1307CCu;
    SET_GPR_U32(ctx, 31, 0x1307D4u);
    ctx->pc = 0x1307D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307CCu;
    // 0x1307d0: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1307CCu, 0x1307D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307D4u;
label_1307d4:
    // 0x1307d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1307D4u;
    {
        const bool branch_taken_0x1307d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1307D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1307D4u;
        // 0x1307d8: 0xae220114  sw          $v0, 0x114($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1307d4) {
            ctx->pc = 0x1307F0u;
            return;
        }
    }
    ctx->pc = 0x1307DCu;
    // 0x1307dc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1307dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1307e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1307E0u;
    {
        const bool branch_taken_0x1307e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1307E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1307E0u;
        // 0x1307e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1307e0) {
            ctx->pc = 0x1307F4u;
            return;
        }
    }
    ctx->pc = 0x1307E8u;
    // 0x1307e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1307e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1307ec: 0xa6220118  sh          $v0, 0x118($s1)
    ctx->pc = 0x1307ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 280), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1307f0u;
}
