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

// Function: entry_001af930
// Address: 0x1af930 - 0x1af978
void entry_001af930_0x1af930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af930_0x1af930");
#endif

    switch (ctx->pc) {
        case 0x1af954u: goto label_1af954;
        default: break;
    }

    ctx->pc = 0x1af930u;

label_1af930:
    // 0x1af930: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1af930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af934: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1af934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1af938: 0x0  nop
    ctx->pc = 0x1af938u;
    // NOP
    // 0x1af93c: 0x0  nop
    ctx->pc = 0x1af93cu;
    // NOP
    // 0x1af940: 0x0  nop
    ctx->pc = 0x1af940u;
    // NOP
    // 0x1af944: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AF944u;
    {
        const bool branch_taken_0x1af944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af944) {
            ctx->pc = 0x1AF930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af930;
        }
    }
    ctx->pc = 0x1AF94Cu;
    // 0x1af94c: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1AF94Cu;
    SET_GPR_U32(ctx, 31, 0x1AF954u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1AF94Cu, 0x1AF954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF954u;
label_1af954:
    // 0x1af954: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1af954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1af958: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1af958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af95c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x1af95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x1af960: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1af960u;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4));
    // 0x1af964: 0xf  sync
    ctx->pc = 0x1af964u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1af968: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF968u;
    {
        const bool branch_taken_0x1af968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF968u;
        // 0x1af96c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af968) {
            ctx->pc = 0x1AF978u;
            return;
        }
    }
    ctx->pc = 0x1AF970u;
    // 0x1af970: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x1AF970u;
    ctx->pc = 0x1AF974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF970u;
    // 0x1af974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1AF978u;
}
