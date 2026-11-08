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

// Function: entry_00100ec0
// Address: 0x100ec0 - 0x100ef0
void entry_00100ec0_0x100ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100ec0_0x100ec0");
#endif

    switch (ctx->pc) {
        case 0x100eecu: goto label_100eec;
        default: break;
    }

    ctx->pc = 0x100ec0u;

    // 0x100ec0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x100ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x100ec4: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x100EC4u;
    {
        const bool branch_taken_0x100ec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x100ec4) {
            ctx->pc = 0x100EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100EC4u;
            // 0x100ec8: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100EF0u;
            return;
        }
    }
    ctx->pc = 0x100ECCu;
    // 0x100ecc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x100eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x100ed0: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x100ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x100ed4: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x100ED4u;
    {
        const bool branch_taken_0x100ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100ed4) {
            ctx->pc = 0x100ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100ED4u;
            // 0x100ed8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100F60u;
            return;
        }
    }
    ctx->pc = 0x100EDCu;
    // 0x100edc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x100EDCu;
    {
        const bool branch_taken_0x100edc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x100edc) {
            ctx->pc = 0x100EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100EDCu;
            // 0x100ee0: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100EF0u;
            return;
        }
    }
    ctx->pc = 0x100EE4u;
    // 0x100ee4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x100EE4u;
    SET_GPR_U32(ctx, 31, 0x100EECu);
    ctx->pc = 0x100EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100EE4u;
    // 0x100ee8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x100EE4u, 0x100EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100EECu;
label_100eec:
    // 0x100eec: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x100eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x100ef0u;
}
