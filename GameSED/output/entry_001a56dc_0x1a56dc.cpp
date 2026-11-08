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

// Function: entry_001a56dc
// Address: 0x1a56dc - 0x1a5708
void entry_001a56dc_0x1a56dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a56dc_0x1a56dc");
#endif

    switch (ctx->pc) {
        case 0x1a56e8u: goto label_1a56e8;
        default: break;
    }

    ctx->pc = 0x1a56dcu;

    // 0x1a56dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a56dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a56e0: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A56E0u;
    SET_GPR_U32(ctx, 31, 0x1A56E8u);
    ctx->pc = 0x1A56E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A56E0u;
    // 0x1a56e4: 0x24070060  addiu       $a3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A56E0u, 0x1A56E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A56E8u;
label_1a56e8:
    // 0x1a56e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a56e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a56ec: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x1a56ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a56f0: 0xacb00010  sw          $s0, 0x10($a1)
    ctx->pc = 0x1a56f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 16));
    // 0x1a56f4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A56F4u;
    {
        const bool branch_taken_0x1a56f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56F4u;
        // 0x1a56f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56f4) {
            ctx->pc = 0x1A5708u;
            return;
        }
    }
    ctx->pc = 0x1A56FCu;
    // 0x1a56fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5700: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5700u;
    {
        const bool branch_taken_0x1a5700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5700u;
        // 0x1a5704: 0xa4a20018  sh          $v0, 0x18($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5700) {
            ctx->pc = 0x1A570Cu;
            return;
        }
    }
    ctx->pc = 0x1A5708u;
}
