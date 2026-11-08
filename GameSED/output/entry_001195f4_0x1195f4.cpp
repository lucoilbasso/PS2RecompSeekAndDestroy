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

// Function: entry_001195f4
// Address: 0x1195f4 - 0x11962c
void entry_001195f4_0x1195f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001195f4_0x1195f4");
#endif

    switch (ctx->pc) {
        case 0x119604u: goto label_119604;
        case 0x119628u: goto label_119628;
        default: break;
    }

    ctx->pc = 0x1195f4u;

    // 0x1195f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1195f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1195f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1195f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1195fc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1195FCu;
    SET_GPR_U32(ctx, 31, 0x119604u);
    ctx->pc = 0x119600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1195FCu;
    // 0x119600: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1195FCu, 0x119604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119604u;
label_119604:
    // 0x119604: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x119604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x119608: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x119608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11960c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11960cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x119610: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x119610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x119614: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119618: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x119618u;
    {
        const bool branch_taken_0x119618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x11961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119618u;
        // 0x11961c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119618) {
            ctx->pc = 0x11962Cu;
            return;
        }
    }
    ctx->pc = 0x119620u;
    // 0x119620: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119620u;
    SET_GPR_U32(ctx, 31, 0x119628u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119620u, 0x119628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119628u;
label_119628:
    // 0x119628: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x119628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x11962cu;
}
