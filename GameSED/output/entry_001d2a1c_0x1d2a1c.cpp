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

// Function: entry_001d2a1c
// Address: 0x1d2a1c - 0x1d2a54
void entry_001d2a1c_0x1d2a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2a1c_0x1d2a1c");
#endif

    switch (ctx->pc) {
        case 0x1d2a44u: goto label_1d2a44;
        default: break;
    }

    ctx->pc = 0x1d2a1cu;

    // 0x1d2a1c: 0x1622000f  bne         $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D2A1Cu;
    {
        const bool branch_taken_0x1d2a1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A1Cu;
        // 0x1d2a20: 0x2938021  addu        $s0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a1c) {
            ctx->pc = 0x1D2A5Cu;
            return;
        }
    }
    ctx->pc = 0x1D2A24u;
    // 0x1d2a24: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x1d2a24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d2a28: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1d2a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d2a2c: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D2A2Cu;
    {
        const bool branch_taken_0x1d2a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d2a2c) {
            ctx->pc = 0x1D2A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2A2Cu;
            // 0x1d2a30: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2A58u;
            return;
        }
    }
    ctx->pc = 0x1D2A34u;
    // 0x1d2a34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d2a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a3c: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D2A3Cu;
    SET_GPR_U32(ctx, 31, 0x1D2A44u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D2A3Cu, 0x1D2A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2A44u;
label_1d2a44:
    // 0x1d2a44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2A44u;
    {
        const bool branch_taken_0x1d2a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A44u;
        // 0x1d2a48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a44) {
            ctx->pc = 0x1D2A54u;
            return;
        }
    }
    ctx->pc = 0x1D2A4Cu;
    // 0x1d2a4c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1d2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d2a50: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1d2a50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1d2a54u;
}
