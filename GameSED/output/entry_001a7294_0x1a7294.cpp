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

// Function: entry_001a7294
// Address: 0x1a7294 - 0x1a72cc
void entry_001a7294_0x1a7294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7294_0x1a7294");
#endif

    switch (ctx->pc) {
        case 0x1a72c4u: goto label_1a72c4;
        default: break;
    }

    ctx->pc = 0x1a7294u;

    // 0x1a7294: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a7294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a7298: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a7298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a729c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a729cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a72a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a72a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a72a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a72a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a72a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a72a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a72ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a72acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a72b0: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a72b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a72b4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A72B4u;
    {
        const bool branch_taken_0x1a72b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72B4u;
        // 0x1a72b8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72b4) {
            ctx->pc = 0x1A72CCu;
            return;
        }
    }
    ctx->pc = 0x1A72BCu;
    // 0x1a72bc: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A72BCu;
    SET_GPR_U32(ctx, 31, 0x1A72C4u);
    ctx->pc = 0x1A72C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A72BCu;
    // 0x1a72c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A72BCu, 0x1A72C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A72C4u;
label_1a72c4:
    // 0x1a72c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a72c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a72c8: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a72c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->pc = 0x1a72ccu;
}
