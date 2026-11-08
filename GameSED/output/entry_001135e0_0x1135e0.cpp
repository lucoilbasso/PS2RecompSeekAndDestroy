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

// Function: entry_001135e0
// Address: 0x1135e0 - 0x113650
void entry_001135e0_0x1135e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001135e0_0x1135e0");
#endif

    switch (ctx->pc) {
        case 0x113604u: goto label_113604;
        case 0x113628u: goto label_113628;
        default: break;
    }

    ctx->pc = 0x1135e0u;

label_1135e0:
    // 0x1135e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1135e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1135e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1135e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1135e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1135e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1135ec: 0x0  nop
    ctx->pc = 0x1135ecu;
    // NOP
    // 0x1135f0: 0x0  nop
    ctx->pc = 0x1135f0u;
    // NOP
    // 0x1135f4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1135F4u;
    {
        const bool branch_taken_0x1135f4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1135F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135F4u;
        // 0x1135f8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1135f4) {
            ctx->pc = 0x1135E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1135e0;
        }
    }
    ctx->pc = 0x1135FCu;
    // 0x1135fc: 0xc066a70  jal         func_19A9C0
    ctx->pc = 0x1135FCu;
    SET_GPR_U32(ctx, 31, 0x113604u);
    ctx->pc = 0x113600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135FCu;
    // 0x113600: 0x26500020  addiu       $s0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A9C0u, 0x1135FCu, 0x113604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113604u;
label_113604:
    // 0x113604: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x113604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113608: 0x24110100  addiu       $s1, $zero, 0x100
    ctx->pc = 0x113608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11360c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x11360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113610: 0x24130104  addiu       $s3, $zero, 0x104
    ctx->pc = 0x113610u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x113614: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x113614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x113618: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x113618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x11361c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x11361cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x113620: 0xc05343a  jal         func_14D0E8
    ctx->pc = 0x113620u;
    SET_GPR_U32(ctx, 31, 0x113628u);
    ctx->pc = 0x113624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113620u;
    // 0x113624: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D0E8u, 0x113620u, 0x113628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113628u;
label_113628:
    // 0x113628: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x113628u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11362c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x11362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113630: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113630u;
    {
        const bool branch_taken_0x113630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113630u;
        // 0x113634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113630) {
            ctx->pc = 0x113650u;
            return;
        }
    }
    ctx->pc = 0x113638u;
    // 0x113638: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x113638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11363c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x11363cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x113640: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x113640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x113644: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x113644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x113648: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x113648u;
    {
        const bool branch_taken_0x113648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113648u;
        // 0x11364c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113648) {
            ctx->pc = 0x113674u;
            return;
        }
    }
    ctx->pc = 0x113650u;
}
