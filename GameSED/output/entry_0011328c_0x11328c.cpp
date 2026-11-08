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

// Function: entry_0011328c
// Address: 0x11328c - 0x1132c0
void entry_0011328c_0x11328c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011328c_0x11328c");
#endif

    switch (ctx->pc) {
        case 0x113294u: goto label_113294;
        default: break;
    }

    ctx->pc = 0x11328cu;

label_11328c:
    // 0x11328c: 0xc044d30  jal         func_1134C0
    ctx->pc = 0x11328Cu;
    SET_GPR_U32(ctx, 31, 0x113294u);
    ctx->pc = 0x113290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11328Cu;
    // 0x113290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1134C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1134C0u, 0x11328Cu, 0x113294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113294u;
label_113294:
    // 0x113294: 0x8e223410  lw          $v0, 0x3410($s1)
    ctx->pc = 0x113294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13328)));
    // 0x113298: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x113298u;
    {
        const bool branch_taken_0x113298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113298u;
        // 0x11329c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113298) {
            ctx->pc = 0x113288u;
            return;
        }
    }
    ctx->pc = 0x1132A0u;
    // 0x1132a0: 0x8e220168  lw          $v0, 0x168($s1)
    ctx->pc = 0x1132a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
    // 0x1132a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1132a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1132a8: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1132A8u;
    {
        const bool branch_taken_0x1132a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1132a8) {
            ctx->pc = 0x1132ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1132A8u;
            // 0x1132ac: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11328Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11328c;
        }
    }
    ctx->pc = 0x1132B0u;
    // 0x1132b0: 0x26353410  addiu       $s5, $s1, 0x3410
    ctx->pc = 0x1132b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 13328));
    // 0x1132b4: 0x3c170025  lui         $s7, 0x25
    ctx->pc = 0x1132b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)37 << 16));
    // 0x1132b8: 0x8e24038c  lw          $a0, 0x38C($s1)
    ctx->pc = 0x1132b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
    // 0x1132bc: 0x0  nop
    ctx->pc = 0x1132bcu;
    // NOP
    ctx->pc = 0x1132c0u;
}
