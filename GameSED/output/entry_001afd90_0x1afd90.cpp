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

// Function: entry_001afd90
// Address: 0x1afd90 - 0x1afdc0
void entry_001afd90_0x1afd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afd90_0x1afd90");
#endif

    switch (ctx->pc) {
        case 0x1afda4u: goto label_1afda4;
        default: break;
    }

    ctx->pc = 0x1afd90u;

    // 0x1afd90: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1afd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1afd94: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x1afd94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x1afd98: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x1afd98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x1afd9c: 0xc06bf2c  jal         func_1AFCB0
    ctx->pc = 0x1AFD9Cu;
    SET_GPR_U32(ctx, 31, 0x1AFDA4u);
    ctx->pc = 0x1AFDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD9Cu;
    // 0x1afda0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFCB0u, 0x1AFD9Cu, 0x1AFDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFDA4u;
label_1afda4:
    // 0x1afda4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFDA4u;
    {
        const bool branch_taken_0x1afda4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDA4u;
        // 0x1afda8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afda4) {
            ctx->pc = 0x1AFDC0u;
            return;
        }
    }
    ctx->pc = 0x1AFDACu;
    // 0x1afdac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1afdacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afdb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1afdb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afdb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afdb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afdb8: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x1AFDB8u;
    ctx->pc = 0x1AFDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFDB8u;
    // 0x1afdbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1AFDC0u;
}
