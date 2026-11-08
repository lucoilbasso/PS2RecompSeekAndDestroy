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

// Function: entry_0014add8
// Address: 0x14add8 - 0x14ae0c
void entry_0014add8_0x14add8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014add8_0x14add8");
#endif

    ctx->pc = 0x14add8u;

    // 0x14add8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14add8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14addc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14addcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14ade0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x14ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x14ade4: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x14ade4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x14ade8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14adec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14adecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14adf0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14adf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14adf4: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14ADF4u;
    {
        const bool branch_taken_0x14adf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x14ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ADF4u;
        // 0x14adf8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14adf4) {
            ctx->pc = 0x14AE0Cu;
            return;
        }
    }
    ctx->pc = 0x14ADFCu;
    // 0x14adfc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14adfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14ae00: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x14ae00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x14ae04: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14AE04u;
    SET_GPR_U32(ctx, 31, 0x14AE0Cu);
    ctx->pc = 0x14AE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE04u;
    // 0x14ae08: 0x24a56bf0  addiu       $a1, $a1, 0x6BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14AE04u, 0x14AE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE0Cu;
}
