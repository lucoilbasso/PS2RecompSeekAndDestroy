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

// Function: entry_0019193c
// Address: 0x19193c - 0x191970
void entry_0019193c_0x19193c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019193c_0x19193c");
#endif

    switch (ctx->pc) {
        case 0x191944u: goto label_191944;
        case 0x191964u: goto label_191964;
        default: break;
    }

    ctx->pc = 0x19193cu;

    // 0x19193c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x19193Cu;
    SET_GPR_U32(ctx, 31, 0x191944u);
    ctx->pc = 0x191940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19193Cu;
    // 0x191940: 0x240507f0  addiu       $a1, $zero, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x19193Cu, 0x191944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191944u;
label_191944:
    // 0x191944: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191948: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x191948u;
    {
        const bool branch_taken_0x191948 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x191948) {
            ctx->pc = 0x19194Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191948u;
            // 0x19194c: 0xaca007e0  sw          $zero, 0x7E0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191970u;
            return;
        }
    }
    ctx->pc = 0x191950u;
    // 0x191950: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x191950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x191954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191958: 0x24a581b0  addiu       $a1, $a1, -0x7E50
    ctx->pc = 0x191958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934960));
    // 0x19195c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x19195Cu;
    SET_GPR_U32(ctx, 31, 0x191964u);
    ctx->pc = 0x191960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19195Cu;
    // 0x191960: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x19195Cu, 0x191964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191964u;
label_191964:
    // 0x191964: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x191964u;
    {
        const bool branch_taken_0x191964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191964u;
        // 0x191968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191964) {
            ctx->pc = 0x1919BCu;
            return;
        }
    }
    ctx->pc = 0x19196Cu;
    // 0x19196c: 0x0  nop
    ctx->pc = 0x19196cu;
    // NOP
    ctx->pc = 0x191970u;
}
