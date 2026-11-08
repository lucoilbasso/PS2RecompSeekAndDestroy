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

// Function: entry_001b1178
// Address: 0x1b1178 - 0x1b11a8
void entry_001b1178_0x1b1178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1178_0x1b1178");
#endif

    switch (ctx->pc) {
        case 0x1b1180u: goto label_1b1180;
        default: break;
    }

    ctx->pc = 0x1b1178u;

label_1b1178:
    // 0x1b1178: 0xc06de4e  jal         func_1B7938
    ctx->pc = 0x1B1178u;
    SET_GPR_U32(ctx, 31, 0x1B1180u);
    ctx->pc = 0x1B117Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1178u;
    // 0x1b117c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7938u, 0x1B1178u, 0x1B1180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1180u;
label_1b1180:
    // 0x1b1180: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1B1180u;
    {
        const bool branch_taken_0x1b1180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1180u;
        // 0x1b1184: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1180) {
            ctx->pc = 0x1B1178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1178;
        }
    }
    ctx->pc = 0x1B1188u;
    // 0x1b1188: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b1188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b118c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b118cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1190: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1194: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b1194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1198: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x1b1198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1b119c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b119cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b11a0: 0x806be18  j           func_1AF860
    ctx->pc = 0x1B11A0u;
    ctx->pc = 0x1B11A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B11A0u;
    // 0x1b11a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF860u;
    sceSifSetReg_0x1af860(rdram, ctx, runtime); return;
    ctx->pc = 0x1B11A8u;
}
