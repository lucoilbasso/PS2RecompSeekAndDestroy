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

// Function: entry_001a3fe8
// Address: 0x1a3fe8 - 0x1a4048
void entry_001a3fe8_0x1a3fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3fe8_0x1a3fe8");
#endif

    switch (ctx->pc) {
        case 0x1a4030u: goto label_1a4030;
        default: break;
    }

    ctx->pc = 0x1a3fe8u;

label_1a3fe8:
    // 0x1a3fe8: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x1a3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1a3fec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a3fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a3ff0: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x1a3ff0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1a3ff4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a3ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a3ff8: 0x28832ee0  slti        $v1, $a0, 0x2EE0
    ctx->pc = 0x1a3ff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12000) ? 1 : 0);
    // 0x1a3ffc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a3ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a4000: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A4000u;
    {
        const bool branch_taken_0x1a4000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4000u;
        // 0x1a4004: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4000) {
            ctx->pc = 0x1A3FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3fe8;
        }
    }
    ctx->pc = 0x1A4008u;
    // 0x1a4008: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1a4008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1a400c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a400cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4010: 0x244280c0  addiu       $v0, $v0, -0x7F40
    ctx->pc = 0x1a4010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934720));
    // 0x1a4014: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a4014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4018: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1a4018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1a401c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1a401cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1a4020: 0xaf82917c  sw          $v0, -0x6E84($gp)
    ctx->pc = 0x1a4020u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939004), GPR_U32(ctx, 2));
    // 0x1a4024: 0xaf809184  sw          $zero, -0x6E7C($gp)
    ctx->pc = 0x1a4024u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939012), GPR_U32(ctx, 0));
    // 0x1a4028: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1A4028u;
    SET_GPR_U32(ctx, 31, 0x1A4030u);
    ctx->pc = 0x1A402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4028u;
    // 0x1a402c: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1A4028u, 0x1A4030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4030u;
label_1a4030:
    // 0x1a4030: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1a4030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1a4034: 0xaf82918c  sw          $v0, -0x6E74($gp)
    ctx->pc = 0x1a4034u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939020), GPR_U32(ctx, 2));
    // 0x1a4038: 0x24668140  addiu       $a2, $v1, -0x7EC0
    ctx->pc = 0x1a4038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934848));
    // 0x1a403c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a403cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4040: 0x24c7fff0  addiu       $a3, $a2, -0x10
    ctx->pc = 0x1a4040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x1a4044: 0x0  nop
    ctx->pc = 0x1a4044u;
    // NOP
    ctx->pc = 0x1a4048u;
}
