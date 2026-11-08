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

// Function: entry_001b8b58
// Address: 0x1b8b58 - 0x1b8bc4
void entry_001b8b58_0x1b8b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8b58_0x1b8b58");
#endif

    switch (ctx->pc) {
        case 0x1b8bb8u: goto label_1b8bb8;
        default: break;
    }

    ctx->pc = 0x1b8b58u;

label_1b8b58:
    // 0x1b8b58: 0xac40ff8c  sw          $zero, -0x74($v0)
    ctx->pc = 0x1b8b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967180), GPR_U32(ctx, 0));
    // 0x1b8b5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b8b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b8b60: 0xac40ff94  sw          $zero, -0x6C($v0)
    ctx->pc = 0x1b8b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967188), GPR_U32(ctx, 0));
    // 0x1b8b64: 0xac40ff90  sw          $zero, -0x70($v0)
    ctx->pc = 0x1b8b64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967184), GPR_U32(ctx, 0));
    // 0x1b8b68: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x1b8b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x1b8b6c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1b8b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b8b70: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b8b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b8b74: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B8B74u;
    {
        const bool branch_taken_0x1b8b74 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B74u;
        // 0x1b8b78: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b74) {
            ctx->pc = 0x1B8B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8b58;
        }
    }
    ctx->pc = 0x1B8B7Cu;
    // 0x1b8b7c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1b8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b8b80: 0x2490d600  addiu       $s0, $a0, -0x2A00
    ctx->pc = 0x1b8b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956544));
    // 0x1b8b84: 0xac82d600  sw          $v0, -0x2A00($a0)
    ctx->pc = 0x1b8b84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294956544), GPR_U32(ctx, 2));
    // 0x1b8b88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8b8c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b8b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b8b90: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1b8b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1b8b94: 0x2484d3c0  addiu       $a0, $a0, -0x2C40
    ctx->pc = 0x1b8b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955968));
    // 0x1b8b98: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b8b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b8b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ba0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b8ba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ba4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1b8ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b8ba8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b8ba8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8bac: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1b8bacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b8bb0: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B8BB0u;
    SET_GPR_U32(ctx, 31, 0x1B8BB8u);
    ctx->pc = 0x1B8BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8BB0u;
    // 0x1b8bb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B8BB0u, 0x1B8BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8BB8u;
label_1b8bb8:
    // 0x1b8bb8: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8BB8u;
    {
        const bool branch_taken_0x1b8bb8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b8bb8) {
            ctx->pc = 0x1B8BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8BB8u;
            // 0x1b8bbc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8BC4u;
            return;
        }
    }
    ctx->pc = 0x1B8BC0u;
    // 0x1b8bc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b8bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b8bc4u;
}
