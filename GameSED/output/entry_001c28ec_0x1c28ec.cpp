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

// Function: entry_001c28ec
// Address: 0x1c28ec - 0x1c2918
void entry_001c28ec_0x1c28ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c28ec_0x1c28ec");
#endif

    switch (ctx->pc) {
        case 0x1c28f8u: goto label_1c28f8;
        default: break;
    }

    ctx->pc = 0x1c28ecu;

    // 0x1c28ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c28ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28f0: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C28F0u;
    SET_GPR_U32(ctx, 31, 0x1C28F8u);
    ctx->pc = 0x1C28F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28F0u;
    // 0x1c28f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C28F0u, 0x1C28F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C28F8u;
label_1c28f8:
    // 0x1c28f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C28F8u;
    {
        const bool branch_taken_0x1c28f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C28FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28F8u;
        // 0x1c28fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28f8) {
            ctx->pc = 0x1C2918u;
            return;
        }
    }
    ctx->pc = 0x1C2900u;
    // 0x1c2900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2904: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1c2904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1c2908: 0x24a5b678  addiu       $a1, $a1, -0x4988
    ctx->pc = 0x1c2908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948472));
    // 0x1c290c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c290cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2910: 0x806f8a0  j           func_1BE280
    ctx->pc = 0x1C2910u;
    ctx->pc = 0x1C2914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2910u;
    // 0x1c2914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    ps2__Error_0x1be280(rdram, ctx, runtime); return;
    ctx->pc = 0x1C2918u;
}
