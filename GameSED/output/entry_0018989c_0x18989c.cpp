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

// Function: entry_0018989c
// Address: 0x18989c - 0x1898e0
void entry_0018989c_0x18989c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018989c_0x18989c");
#endif

    switch (ctx->pc) {
        case 0x1898a8u: goto label_1898a8;
        default: break;
    }

    ctx->pc = 0x18989cu;

    // 0x18989c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18989cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898a0: 0xc061422  jal         func_185088
    ctx->pc = 0x1898A0u;
    SET_GPR_U32(ctx, 31, 0x1898A8u);
    ctx->pc = 0x1898A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898A0u;
    // 0x1898a4: 0x263400e0  addiu       $s4, $s1, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1898A0u, 0x1898A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898A8u;
label_1898a8:
    // 0x1898a8: 0x8ed50014  lw          $s5, 0x14($s6)
    ctx->pc = 0x1898a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x1898ac: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1898acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1898b0: 0x8ede0018  lw          $fp, 0x18($s6)
    ctx->pc = 0x1898b0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x1898b4: 0x2453d650  addiu       $s3, $v0, -0x29B0
    ctx->pc = 0x1898b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x1898b8: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x1898b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x1898bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1898BCu;
    {
        const bool branch_taken_0x1898bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1898C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1898BCu;
        // 0x1898c0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1898bc) {
            ctx->pc = 0x1898E0u;
            return;
        }
    }
    ctx->pc = 0x1898C4u;
    // 0x1898c4: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x1898c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x1898c8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1898c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1898cc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1898ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1898d0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1898d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1898d4: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1898d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1898d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1898D8u;
    {
        const bool branch_taken_0x1898d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1898DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1898D8u;
        // 0x1898dc: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1898d8) {
            ctx->pc = 0x189914u;
            return;
        }
    }
    ctx->pc = 0x1898E0u;
}
