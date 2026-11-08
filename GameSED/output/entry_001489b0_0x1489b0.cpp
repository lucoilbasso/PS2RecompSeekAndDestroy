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

// Function: entry_001489b0
// Address: 0x1489b0 - 0x1489f0
void entry_001489b0_0x1489b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001489b0_0x1489b0");
#endif

    switch (ctx->pc) {
        case 0x1489b8u: goto label_1489b8;
        default: break;
    }

    ctx->pc = 0x1489b0u;

label_1489b0:
    // 0x1489b0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1489B0u;
    SET_GPR_U32(ctx, 31, 0x1489B8u);
    ctx->pc = 0x1489B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1489B0u;
    // 0x1489b4: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1489B0u, 0x1489B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1489B8u;
label_1489b8:
    // 0x1489b8: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x1489b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x1489bc: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1489BCu;
    {
        const bool branch_taken_0x1489bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1489C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489BCu;
        // 0x1489c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489bc) {
            ctx->pc = 0x1489B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1489b0;
        }
    }
    ctx->pc = 0x1489C4u;
    // 0x1489c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1489c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1489c8: 0xaf828c70  sw          $v0, -0x7390($gp)
    ctx->pc = 0x1489c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
    // 0x1489cc: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1489ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x1489d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1489d0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x1489d4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1489d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1489d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1489D8u;
    {
        const bool branch_taken_0x1489d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1489DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489D8u;
        // 0x1489dc: 0x3c021200  lui         $v0, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489d8) {
            ctx->pc = 0x148A18u;
            return;
        }
    }
    ctx->pc = 0x1489E0u;
    // 0x1489e0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1489e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1489e4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1489e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1489e8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1489e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1489ec: 0x0  nop
    ctx->pc = 0x1489ecu;
    // NOP
    ctx->pc = 0x1489f0u;
}
