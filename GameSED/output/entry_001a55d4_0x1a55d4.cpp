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

// Function: entry_001a55d4
// Address: 0x1a55d4 - 0x1a5600
void entry_001a55d4_0x1a55d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a55d4_0x1a55d4");
#endif

    switch (ctx->pc) {
        case 0x1a55e0u: goto label_1a55e0;
        default: break;
    }

    ctx->pc = 0x1a55d4u;

    // 0x1a55d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a55d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a55d8: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A55D8u;
    SET_GPR_U32(ctx, 31, 0x1A55E0u);
    ctx->pc = 0x1A55DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A55D8u;
    // 0x1a55dc: 0x24463400  addiu       $a2, $v0, 0x3400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 13312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A55D8u, 0x1A55E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A55E0u;
label_1a55e0:
    // 0x1a55e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a55e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a55e4: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x1a55e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a55e8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A55E8u;
    {
        const bool branch_taken_0x1a55e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55E8u;
        // 0x1a55ec: 0xacb10004  sw          $s1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a55e8) {
            ctx->pc = 0x1A5600u;
            return;
        }
    }
    ctx->pc = 0x1A55F0u;
    // 0x1a55f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a55f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a55f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A55F4u;
    {
        const bool branch_taken_0x1a55f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A55F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55F4u;
        // 0x1a55f8: 0xa4a2000e  sh          $v0, 0xE($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a55f4) {
            ctx->pc = 0x1A5604u;
            return;
        }
    }
    ctx->pc = 0x1A55FCu;
    // 0x1a55fc: 0x0  nop
    ctx->pc = 0x1a55fcu;
    // NOP
    ctx->pc = 0x1a5600u;
}
