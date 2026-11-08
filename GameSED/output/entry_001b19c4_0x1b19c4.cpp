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

// Function: entry_001b19c4
// Address: 0x1b19c4 - 0x1b19f8
void entry_001b19c4_0x1b19c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b19c4_0x1b19c4");
#endif

    switch (ctx->pc) {
        case 0x1b19e8u: goto label_1b19e8;
        default: break;
    }

    ctx->pc = 0x1b19c4u;

    // 0x1b19c4: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x1b19c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
    // 0x1b19c8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b19c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b19cc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1b19ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b19d0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1b19d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b19d4: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x1b19d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b19d8: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x1b19d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x1b19dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b19dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b19e0: 0xc06df7e  jal         func_1B7DF8
    ctx->pc = 0x1B19E0u;
    SET_GPR_U32(ctx, 31, 0x1B19E8u);
    ctx->pc = 0x1B19E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19E0u;
    // 0x1b19e4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DF8u, 0x1B19E0u, 0x1B19E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B19E8u;
label_1b19e8:
    // 0x1b19e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B19E8u;
    {
        const bool branch_taken_0x1b19e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b19e8) {
            ctx->pc = 0x1B1A08u;
            return;
        }
    }
    ctx->pc = 0x1B19F0u;
    // 0x1b19f0: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B19F0u;
    SET_GPR_U32(ctx, 31, 0x1B19F8u);
    ctx->pc = 0x1B19F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19F0u;
    // 0x1b19f4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B19F0u, 0x1B19F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B19F8u;
}
