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

// Function: entry_001113c0
// Address: 0x1113c0 - 0x111404
void entry_001113c0_0x1113c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001113c0_0x1113c0");
#endif

    switch (ctx->pc) {
        case 0x1113d4u: goto label_1113d4;
        case 0x1113ecu: goto label_1113ec;
        default: break;
    }

    ctx->pc = 0x1113c0u;

    // 0x1113c0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1113c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1113c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1113c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113c8: 0x24a53ee0  addiu       $a1, $a1, 0x3EE0
    ctx->pc = 0x1113c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16096));
    // 0x1113cc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1113CCu;
    SET_GPR_U32(ctx, 31, 0x1113D4u);
    ctx->pc = 0x1113D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113CCu;
    // 0x1113d0: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1113CCu, 0x1113D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113D4u;
label_1113d4:
    // 0x1113d4: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1113D4u;
    {
        const bool branch_taken_0x1113d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113D4u;
        // 0x1113d8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113d4) {
            ctx->pc = 0x11150Cu;
            return;
        }
    }
    ctx->pc = 0x1113DCu;
    // 0x1113dc: 0x0  nop
    ctx->pc = 0x1113dcu;
    // NOP
    // 0x1113e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1113e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113e4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1113E4u;
    SET_GPR_U32(ctx, 31, 0x1113ECu);
    ctx->pc = 0x1113E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113E4u;
    // 0x1113e8: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1113E4u, 0x1113ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113ECu;
label_1113ec:
    // 0x1113ec: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1113ECu;
    {
        const bool branch_taken_0x1113ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113ECu;
        // 0x1113f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113ec) {
            ctx->pc = 0x111404u;
            return;
        }
    }
    ctx->pc = 0x1113F4u;
    // 0x1113f4: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x1113f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1113f8: 0x24021846  addiu       $v0, $zero, 0x1846
    ctx->pc = 0x1113f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    // 0x1113fc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1113FCu;
    {
        const bool branch_taken_0x1113fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x111400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113FCu;
        // 0x111400: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113fc) {
            ctx->pc = 0x111424u;
            return;
        }
    }
    ctx->pc = 0x111404u;
}
