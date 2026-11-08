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

// Function: entry_001769e0
// Address: 0x1769e0 - 0x176a20
void entry_001769e0_0x1769e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001769e0_0x1769e0");
#endif

    switch (ctx->pc) {
        case 0x1769e8u: goto label_1769e8;
        default: break;
    }

    ctx->pc = 0x1769e0u;

label_1769e0:
    // 0x1769e0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1769E0u;
    SET_GPR_U32(ctx, 31, 0x1769E8u);
    ctx->pc = 0x1769E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1769E0u;
    // 0x1769e4: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1769E0u, 0x1769E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1769E8u;
label_1769e8:
    // 0x1769e8: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x1769e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x1769ec: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1769ECu;
    {
        const bool branch_taken_0x1769ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1769F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1769ECu;
        // 0x1769f0: 0x8f868c54  lw          $a2, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1769ec) {
            ctx->pc = 0x1769E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1769e0;
        }
    }
    ctx->pc = 0x1769F4u;
    // 0x1769f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1769f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1769f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1769f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1769fc: 0xaf828c70  sw          $v0, -0x7390($gp)
    ctx->pc = 0x1769fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
    // 0x176a00: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x176A00u;
    {
        const bool branch_taken_0x176a00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x176A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A00u;
        // 0x176a04: 0xacd10020  sw          $s1, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a00) {
            ctx->pc = 0x176A20u;
            return;
        }
    }
    ctx->pc = 0x176A08u;
    // 0x176a08: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176a0c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x176a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x176a10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176a14: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x176a18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176A18u;
    {
        const bool branch_taken_0x176a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A18u;
        // 0x176a1c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a18) {
            ctx->pc = 0x176A2Cu;
            return;
        }
    }
    ctx->pc = 0x176A20u;
}
