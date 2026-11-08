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

// Function: entry_0011658c
// Address: 0x11658c - 0x1165d0
void entry_0011658c_0x11658c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011658c_0x11658c");
#endif

    switch (ctx->pc) {
        case 0x1165a4u: goto label_1165a4;
        case 0x1165c8u: goto label_1165c8;
        default: break;
    }

    ctx->pc = 0x11658cu;

    // 0x11658c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x11658cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x116590: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x116590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x116594: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x116594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x116598: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x116598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11659c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11659Cu;
    SET_GPR_U32(ctx, 31, 0x1165A4u);
    ctx->pc = 0x1165A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11659Cu;
    // 0x1165a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11659Cu, 0x1165A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1165A4u;
label_1165a4:
    // 0x1165a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1165a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1165a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1165a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1165ac: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1165acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1165b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1165b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1165b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1165b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1165b8: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1165B8u;
    {
        const bool branch_taken_0x1165b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1165b8) {
            ctx->pc = 0x1165BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1165B8u;
            // 0x1165bc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1165D0u;
            return;
        }
    }
    ctx->pc = 0x1165C0u;
    // 0x1165c0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1165C0u;
    SET_GPR_U32(ctx, 31, 0x1165C8u);
    ctx->pc = 0x1165C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1165C0u;
    // 0x1165c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1165C0u, 0x1165C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1165C8u;
label_1165c8:
    // 0x1165c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1165c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1165cc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1165ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x1165d0u;
}
