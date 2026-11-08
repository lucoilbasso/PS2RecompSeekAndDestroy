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

// Function: entry_001532e4
// Address: 0x1532e4 - 0x15331c
void entry_001532e4_0x1532e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001532e4_0x1532e4");
#endif

    switch (ctx->pc) {
        case 0x153304u: goto label_153304;
        default: break;
    }

    ctx->pc = 0x1532e4u;

    // 0x1532e4: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1532E4u;
    {
        const bool branch_taken_0x1532e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532E4u;
        // 0x1532e8: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532e4) {
            ctx->pc = 0x15333Cu;
            return;
        }
    }
    ctx->pc = 0x1532ECu;
    // 0x1532ec: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x1532ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x1532f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1532f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1532f4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1532F4u;
    {
        const bool branch_taken_0x1532f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1532f4) {
            ctx->pc = 0x1532F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1532F4u;
            // 0x1532f8: 0x8e250310  lw          $a1, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15331Cu;
            return;
        }
    }
    ctx->pc = 0x1532FCu;
    // 0x1532fc: 0xc066800  jal         func_19A000
    ctx->pc = 0x1532FCu;
    SET_GPR_U32(ctx, 31, 0x153304u);
    ctx->pc = 0x153300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1532FCu;
    // 0x153300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A000u, 0x1532FCu, 0x153304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153304u;
label_153304:
    // 0x153304: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x153304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x153308: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x153308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x15330c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15330cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x153310: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x153310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x153314: 0xae230184  sw          $v1, 0x184($s1)
    ctx->pc = 0x153314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
    // 0x153318: 0x8e250310  lw          $a1, 0x310($s1)
    ctx->pc = 0x153318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    ctx->pc = 0x15331cu;
}
