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

// Function: entry_001b5960
// Address: 0x1b5960 - 0x1b59a0
void entry_001b5960_0x1b5960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5960_0x1b5960");
#endif

    switch (ctx->pc) {
        case 0x1b5990u: goto label_1b5990;
        default: break;
    }

    ctx->pc = 0x1b5960u;

    // 0x1b5960: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b5960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b5964: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b5964u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b5968: 0x2484b240  addiu       $a0, $a0, -0x4DC0
    ctx->pc = 0x1b5968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947392));
    // 0x1b596c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b596cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b5970: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b5970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b5974: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b5978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b597c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b597cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5980: 0x2609b280  addiu       $t1, $s0, -0x4D80
    ctx->pc = 0x1b5980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947456));
    // 0x1b5984: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b5984u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5988: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B5988u;
    SET_GPR_U32(ctx, 31, 0x1B5990u);
    ctx->pc = 0x1B598Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5988u;
    // 0x1b598c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B5988u, 0x1B5990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5990u;
label_1b5990:
    // 0x1b5990: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5990u;
    {
        const bool branch_taken_0x1b5990 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b5990) {
            ctx->pc = 0x1B5994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5990u;
            // 0x1b5994: 0x8e02b280  lw          $v0, -0x4D80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294947456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B59A0u;
            return;
        }
    }
    ctx->pc = 0x1B5998u;
    // 0x1b5998: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b5998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1b599c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b599cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1b59a0u;
}
