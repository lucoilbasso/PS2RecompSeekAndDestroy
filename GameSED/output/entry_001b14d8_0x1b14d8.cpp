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

// Function: entry_001b14d8
// Address: 0x1b14d8 - 0x1b1518
void entry_001b14d8_0x1b14d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b14d8_0x1b14d8");
#endif

    switch (ctx->pc) {
        case 0x1b14f8u: goto label_1b14f8;
        case 0x1b1508u: goto label_1b1508;
        case 0x1b1510u: goto label_1b1510;
        default: break;
    }

    ctx->pc = 0x1b14d8u;

    // 0x1b14d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b14d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b14dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b14dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14e0: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x1b14e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    // 0x1b14e4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1b14e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b14e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b14e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b14ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14f0: 0xc06df7e  jal         func_1B7DF8
    ctx->pc = 0x1B14F0u;
    SET_GPR_U32(ctx, 31, 0x1B14F8u);
    ctx->pc = 0x1B14F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14F0u;
    // 0x1b14f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DF8u, 0x1B14F0u, 0x1B14F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B14F8u;
label_1b14f8:
    // 0x1b14f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B14F8u;
    {
        const bool branch_taken_0x1b14f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b14f8) {
            ctx->pc = 0x1B1518u;
            return;
        }
    }
    ctx->pc = 0x1B1500u;
    // 0x1b1500: 0xc06c4a4  jal         func_1B1290
    ctx->pc = 0x1B1500u;
    SET_GPR_U32(ctx, 31, 0x1B1508u);
    ctx->pc = 0x1B1504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1500u;
    // 0x1b1504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1290u, 0x1B1500u, 0x1B1508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1508u;
label_1b1508:
    // 0x1b1508: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B1508u;
    SET_GPR_U32(ctx, 31, 0x1B1510u);
    ctx->pc = 0x1B150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1508u;
    // 0x1b150c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B1508u, 0x1B1510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1510u;
label_1b1510:
    // 0x1b1510: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B1510u;
    {
        const bool branch_taken_0x1b1510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1510u;
        // 0x1b1514: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1510) {
            ctx->pc = 0x1B156Cu;
            return;
        }
    }
    ctx->pc = 0x1B1518u;
}
