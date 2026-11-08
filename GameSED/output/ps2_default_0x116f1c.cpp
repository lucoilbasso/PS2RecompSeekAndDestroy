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

// Function: default
// Address: 0x116f1c - 0x116f60
void ps2_default_0x116f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x116f1c");
#endif

    switch (ctx->pc) {
        case 0x116f44u: goto label_116f44;
        default: break;
    }

    ctx->pc = 0x116f1cu;

    // 0x116f1c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x116f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x116f20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x116f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116f24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x116f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x116f28: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x116f28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116f2c: 0x1603000c  bne         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x116F2Cu;
    {
        const bool branch_taken_0x116f2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x116F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F2Cu;
        // 0x116f30: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f2c) {
            ctx->pc = 0x116F60u;
            return;
        }
    }
    ctx->pc = 0x116F34u;
    // 0x116f34: 0x122a00  sll         $a1, $s2, 8
    ctx->pc = 0x116f34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x116f38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x116f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f3c: 0xc0458fc  jal         func_1163F0
    ctx->pc = 0x116F3Cu;
    SET_GPR_U32(ctx, 31, 0x116F44u);
    ctx->pc = 0x116F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F3Cu;
    // 0x116f40: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1163F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1163F0u, 0x116F3Cu, 0x116F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116F44u;
label_116f44:
    // 0x116f44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x116f44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f48: 0x54700005  bnel        $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116F48u;
    {
        const bool branch_taken_0x116f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x116f48) {
            ctx->pc = 0x116F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116F48u;
            // 0x116f4c: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116F60u;
            return;
        }
    }
    ctx->pc = 0x116F50u;
    // 0x116f50: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x116f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x116f54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x116F54u;
    {
        const bool branch_taken_0x116f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F54u;
        // 0x116f58: 0xac4300b0  sw          $v1, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f54) {
            ctx->pc = 0x116F7Cu;
            return;
        }
    }
    ctx->pc = 0x116F5Cu;
    // 0x116f5c: 0x0  nop
    ctx->pc = 0x116f5cu;
    // NOP
    ctx->pc = 0x116f60u;
}
