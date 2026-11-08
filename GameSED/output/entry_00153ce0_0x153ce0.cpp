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

// Function: entry_00153ce0
// Address: 0x153ce0 - 0x153d18
void entry_00153ce0_0x153ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153ce0_0x153ce0");
#endif

    switch (ctx->pc) {
        case 0x153cecu: goto label_153cec;
        case 0x153d0cu: goto label_153d0c;
        default: break;
    }

    ctx->pc = 0x153ce0u;

    // 0x153ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153ce4: 0xc0532f2  jal         func_14CBC8
    ctx->pc = 0x153CE4u;
    SET_GPR_U32(ctx, 31, 0x153CECu);
    ctx->pc = 0x153CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153CE4u;
    // 0x153ce8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x153CE4u, 0x153CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153CECu;
label_153cec:
    // 0x153cec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153cf0: 0x8e220850  lw          $v0, 0x850($s1)
    ctx->pc = 0x153cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2128)));
    // 0x153cf4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x153CF4u;
    {
        const bool branch_taken_0x153cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CF4u;
        // 0x153cf8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153cf4) {
            ctx->pc = 0x153D60u;
            return;
        }
    }
    ctx->pc = 0x153CFCu;
    // 0x153cfc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x153CFCu;
    {
        const bool branch_taken_0x153cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CFCu;
        // 0x153d00: 0xae220850  sw          $v0, 0x850($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153cfc) {
            ctx->pc = 0x153D18u;
            return;
        }
    }
    ctx->pc = 0x153D04u;
    // 0x153d04: 0xc056832  jal         func_15A0C8
    ctx->pc = 0x153D04u;
    SET_GPR_U32(ctx, 31, 0x153D0Cu);
    ctx->pc = 0x153D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153D04u;
    // 0x153d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A0C8u, 0x153D04u, 0x153D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D0Cu;
label_153d0c:
    // 0x153d0c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x153D0Cu;
    {
        const bool branch_taken_0x153d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D0Cu;
        // 0x153d10: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d0c) {
            ctx->pc = 0x153D60u;
            return;
        }
    }
    ctx->pc = 0x153D14u;
    // 0x153d14: 0x0  nop
    ctx->pc = 0x153d14u;
    // NOP
    ctx->pc = 0x153d18u;
}
