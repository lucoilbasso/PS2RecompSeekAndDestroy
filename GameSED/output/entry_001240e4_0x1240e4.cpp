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

// Function: entry_001240e4
// Address: 0x1240e4 - 0x124118
void entry_001240e4_0x1240e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001240e4_0x1240e4");
#endif

    switch (ctx->pc) {
        case 0x124100u: goto label_124100;
        default: break;
    }

    ctx->pc = 0x1240e4u;

label_1240e4:
    // 0x1240e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1240e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1240e8:
    // 0x1240e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1240e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1240ec:
    // 0x1240ec: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1240ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
label_1240f0:
    // 0x1240f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1240f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1240f4:
    // 0x1240f4: 0x8c637e08  lw          $v1, 0x7E08($v1)
    ctx->pc = 0x1240f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32264)));
label_1240f8:
    // 0x1240f8: 0x60f809  jalr        $v1
label_1240fc:
    if (ctx->pc == 0x1240FCu) {
        ctx->pc = 0x1240FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240F8u;
        // 0x1240fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124100u;
        goto label_124100;
    }
    ctx->pc = 0x1240F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x124100u);
        ctx->pc = 0x1240FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1240F8u;
        // 0x1240fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1240F8u, 0x124100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124100u;
label_124100:
    // 0x124100: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x124100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_124104:
    // 0x124104: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_124108:
    if (ctx->pc == 0x124108u) {
        ctx->pc = 0x124108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124104u;
        // 0x124108: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12410Cu;
        goto label_12410c;
    }
    ctx->pc = 0x124104u;
    {
        const bool branch_taken_0x124104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124104) {
            ctx->pc = 0x124108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124104u;
            // 0x124108: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124118u;
            return;
        }
    }
    ctx->pc = 0x12410Cu;
label_12410c:
    // 0x12410c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_124110:
    // 0x124110: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x124110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_124114:
    // 0x124114: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x124114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x124118u;
}
