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

// Function: entry_001d3ff0
// Address: 0x1d3ff0 - 0x1d403c
void entry_001d3ff0_0x1d3ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3ff0_0x1d3ff0");
#endif

    switch (ctx->pc) {
        case 0x1d4008u: goto label_1d4008;
        case 0x1d4018u: goto label_1d4018;
        default: break;
    }

    ctx->pc = 0x1d3ff0u;

    // 0x1d3ff0: 0x5a200067  blezl       $s1, . + 4 + (0x67 << 2)
    ctx->pc = 0x1D3FF0u;
    {
        const bool branch_taken_0x1d3ff0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1d3ff0) {
            ctx->pc = 0x1D3FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3FF0u;
            // 0x1d3ff4: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4190u;
            return;
        }
    }
    ctx->pc = 0x1D3FF8u;
    // 0x1d3ff8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d3ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3ffc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d3ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4000: 0xc0756ae  jal         func_1D5AB8
    ctx->pc = 0x1D4000u;
    SET_GPR_U32(ctx, 31, 0x1D4008u);
    ctx->pc = 0x1D4004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4000u;
    // 0x1d4004: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5AB8u, 0x1D4000u, 0x1D4008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4008u;
label_1d4008:
    // 0x1d4008: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1d4008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d400c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d400cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4010: 0xc075704  jal         func_1D5C10
    ctx->pc = 0x1D4010u;
    SET_GPR_U32(ctx, 31, 0x1D4018u);
    ctx->pc = 0x1D4014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4010u;
    // 0x1d4014: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C10u, 0x1D4010u, 0x1D4018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4018u;
label_1d4018:
    // 0x1d4018: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d4018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d401c: 0x5e200007  bgtzl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D401Cu;
    {
        const bool branch_taken_0x1d401c = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x1d401c) {
            ctx->pc = 0x1D4020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D401Cu;
            // 0x1d4020: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D403Cu;
            return;
        }
    }
    ctx->pc = 0x1D4024u;
    // 0x1d4024: 0x5620005a  bnel        $s1, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x1D4024u;
    {
        const bool branch_taken_0x1d4024 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4024) {
            ctx->pc = 0x1D4028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4024u;
            // 0x1d4028: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4190u;
            return;
        }
    }
    ctx->pc = 0x1D402Cu;
    // 0x1d402c: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x1d402cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x1d4030: 0x50400057  beql        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x1D4030u;
    {
        const bool branch_taken_0x1d4030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4030) {
            ctx->pc = 0x1D4034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4030u;
            // 0x1d4034: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4190u;
            return;
        }
    }
    ctx->pc = 0x1D4038u;
    // 0x1d4038: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d4038u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x1d403cu;
}
