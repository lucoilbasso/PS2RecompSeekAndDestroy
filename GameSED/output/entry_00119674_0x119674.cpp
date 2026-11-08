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

// Function: entry_00119674
// Address: 0x119674 - 0x1196ac
void entry_00119674_0x119674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119674_0x119674");
#endif

    switch (ctx->pc) {
        case 0x119684u: goto label_119684;
        case 0x1196a8u: goto label_1196a8;
        default: break;
    }

    ctx->pc = 0x119674u;

    // 0x119674: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x119674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x119678: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x119678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11967c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11967Cu;
    SET_GPR_U32(ctx, 31, 0x119684u);
    ctx->pc = 0x119680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11967Cu;
    // 0x119680: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11967Cu, 0x119684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119684u;
label_119684:
    // 0x119684: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x119684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x119688: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x119688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11968c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11968cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x119690: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x119690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x119694: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119698: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x119698u;
    {
        const bool branch_taken_0x119698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x11969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119698u;
        // 0x11969c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119698) {
            ctx->pc = 0x1196ACu;
            return;
        }
    }
    ctx->pc = 0x1196A0u;
    // 0x1196a0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1196A0u;
    SET_GPR_U32(ctx, 31, 0x1196A8u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1196A0u, 0x1196A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1196A8u;
label_1196a8:
    // 0x1196a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1196a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1196acu;
}
