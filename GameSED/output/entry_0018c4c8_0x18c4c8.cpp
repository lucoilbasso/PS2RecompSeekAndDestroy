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

// Function: entry_0018c4c8
// Address: 0x18c4c8 - 0x18c524
void entry_0018c4c8_0x18c4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c4c8_0x18c4c8");
#endif

    switch (ctx->pc) {
        case 0x18c508u: goto label_18c508;
        default: break;
    }

    ctx->pc = 0x18c4c8u;

    // 0x18c4c8: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x18c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x18c4cc: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x18c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x18c4d0: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x18c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x18c4d4: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x18c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
    // 0x18c4d8: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x18c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
    // 0x18c4dc: 0xae000218  sw          $zero, 0x218($s0)
    ctx->pc = 0x18c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
    // 0x18c4e0: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x18c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
    // 0x18c4e4: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x18c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x18c4e8: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x18c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x18c4ec: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x18c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
    // 0x18c4f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18c4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c4f4: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x18c4f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18c4f8: 0xfe220208  sd          $v0, 0x208($s1)
    ctx->pc = 0x18c4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 520), GPR_U64(ctx, 2));
    // 0x18c4fc: 0x8e25020c  lw          $a1, 0x20C($s1)
    ctx->pc = 0x18c4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x18c500: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18C500u;
    SET_GPR_U32(ctx, 31, 0x18C508u);
    ctx->pc = 0x18C504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C500u;
    // 0x18c504: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18C500u, 0x18C508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C508u;
label_18c508:
    // 0x18c508: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C508u;
    {
        const bool branch_taken_0x18c508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C508u;
        // 0x18c50c: 0xae220254  sw          $v0, 0x254($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c508) {
            ctx->pc = 0x18C524u;
            return;
        }
    }
    ctx->pc = 0x18C510u;
    // 0x18c510: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18c510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18c514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18c514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c518: 0x24a58030  addiu       $a1, $a1, -0x7FD0
    ctx->pc = 0x18c518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934576));
    // 0x18c51c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18C51Cu;
    SET_GPR_U32(ctx, 31, 0x18C524u);
    ctx->pc = 0x18C520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C51Cu;
    // 0x18c520: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18C51Cu, 0x18C524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C524u;
}
