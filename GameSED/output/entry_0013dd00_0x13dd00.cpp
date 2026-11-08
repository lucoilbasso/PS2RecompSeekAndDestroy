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

// Function: entry_0013dd00
// Address: 0x13dd00 - 0x13dd30
void entry_0013dd00_0x13dd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dd00_0x13dd00");
#endif

    switch (ctx->pc) {
        case 0x13dd08u: goto label_13dd08;
        default: break;
    }

    ctx->pc = 0x13dd00u;

label_13dd00:
    // 0x13dd00: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x13DD00u;
    SET_GPR_U32(ctx, 31, 0x13DD08u);
    ctx->pc = 0x13DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DD00u;
    // 0x13dd04: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x13DD00u, 0x13DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DD08u;
label_13dd08:
    // 0x13dd08: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x13dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x13dd0c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x13DD0Cu;
    {
        const bool branch_taken_0x13dd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD0Cu;
        // 0x13dd10: 0x14102b  sltu        $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd0c) {
            ctx->pc = 0x13DD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13dd00;
        }
    }
    ctx->pc = 0x13DD14u;
    // 0x13dd14: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x13dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13dd18: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DD18u;
    {
        const bool branch_taken_0x13dd18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD18u;
        // 0x13dd1c: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd18) {
            ctx->pc = 0x13DD30u;
            return;
        }
    }
    ctx->pc = 0x13DD20u;
    // 0x13dd20: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x13dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x13dd24: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x13dd24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x13dd28: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13DD28u;
    SET_GPR_U32(ctx, 31, 0x13DD30u);
    ctx->pc = 0x13DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DD28u;
    // 0x13dd2c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13DD28u, 0x13DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DD30u;
}
