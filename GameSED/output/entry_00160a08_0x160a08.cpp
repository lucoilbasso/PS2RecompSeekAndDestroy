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

// Function: entry_00160a08
// Address: 0x160a08 - 0x160a38
void entry_00160a08_0x160a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160a08_0x160a08");
#endif

    switch (ctx->pc) {
        case 0x160a34u: goto label_160a34;
        default: break;
    }

    ctx->pc = 0x160a08u;

    // 0x160a08: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x160a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x160a0c: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x160a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x160a10: 0x2463a290  addiu       $v1, $v1, -0x5D70
    ctx->pc = 0x160a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943376));
    // 0x160a14: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x160a14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x160a18: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x160a18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x20A294u));
    // 0x160a1c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x160a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x160a20: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x160a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x160a24: 0x10860004  beq         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x160A24u;
    {
        const bool branch_taken_0x160a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x160A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A24u;
        // 0x160a28: 0xa4620004  sh          $v0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a24) {
            ctx->pc = 0x160A38u;
            return;
        }
    }
    ctx->pc = 0x160A2Cu;
    // 0x160a2c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x160A2Cu;
    SET_GPR_U32(ctx, 31, 0x160A34u);
    ctx->pc = 0x160A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160A2Cu;
    // 0x160a30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x160A2Cu, 0x160A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160A34u;
label_160a34:
    // 0x160a34: 0xaf828b3c  sw          $v0, -0x74C4($gp)
    ctx->pc = 0x160a34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937404), GPR_U32(ctx, 2));
    ctx->pc = 0x160a38u;
}
