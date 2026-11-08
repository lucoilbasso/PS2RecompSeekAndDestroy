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

// Function: entry_00175868
// Address: 0x175868 - 0x1758a8
void entry_00175868_0x175868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175868_0x175868");
#endif

    switch (ctx->pc) {
        case 0x175870u: goto label_175870;
        case 0x175880u: goto label_175880;
        default: break;
    }

    ctx->pc = 0x175868u;

    // 0x175868: 0xc05d3fc  jal         func_174FF0
    ctx->pc = 0x175868u;
    SET_GPR_U32(ctx, 31, 0x175870u);
    ctx->pc = 0x17586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175868u;
    // 0x17586c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174FF0u, 0x175868u, 0x175870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175870u;
label_175870:
    // 0x175870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175874: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x175874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175878: 0xc05d3fc  jal         func_174FF0
    ctx->pc = 0x175878u;
    SET_GPR_U32(ctx, 31, 0x175880u);
    ctx->pc = 0x17587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175878u;
    // 0x17587c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174FF0u, 0x175878u, 0x175880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175880u;
label_175880:
    // 0x175880: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x175880u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175884: 0x122e0030  beq         $s1, $t6, . + 4 + (0x30 << 2)
    ctx->pc = 0x175884u;
    {
        const bool branch_taken_0x175884 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 14));
        ctx->pc = 0x175888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175884u;
        // 0x175888: 0x3c090fff  lui         $t1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175884) {
            ctx->pc = 0x175948u;
            return;
        }
    }
    ctx->pc = 0x17588Cu;
    // 0x17588c: 0x8e0c0008  lw          $t4, 0x8($s0)
    ctx->pc = 0x17588cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x175890: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x175890u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175894: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x175894u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x175898: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x175898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17589c: 0xc1ac0  sll         $v1, $t4, 11
    ctx->pc = 0x17589cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
    // 0x1758a0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1758A0u;
    {
        const bool branch_taken_0x1758a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1758a0) {
            ctx->pc = 0x1758A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1758A0u;
            // 0x1758a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1758A8u;
            return;
        }
    }
    ctx->pc = 0x1758A8u;
}
