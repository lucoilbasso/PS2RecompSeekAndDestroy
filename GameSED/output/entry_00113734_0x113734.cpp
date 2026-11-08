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

// Function: entry_00113734
// Address: 0x113734 - 0x113770
void entry_00113734_0x113734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113734_0x113734");
#endif

    switch (ctx->pc) {
        case 0x11373cu: goto label_11373c;
        default: break;
    }

    ctx->pc = 0x113734u;

    // 0x113734: 0xc062236  jal         func_1888D8
    ctx->pc = 0x113734u;
    SET_GPR_U32(ctx, 31, 0x11373Cu);
    ctx->pc = 0x1888D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888D8u, 0x113734u, 0x11373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11373Cu;
label_11373c:
    // 0x11373c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x11373cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x113740: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x113740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x113744: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x113744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113748: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x113748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x11374c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x11374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x113750: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113750u;
    {
        const bool branch_taken_0x113750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113750u;
        // 0x113754: 0x32630300  andi        $v1, $s3, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113750) {
            ctx->pc = 0x113770u;
            return;
        }
    }
    ctx->pc = 0x113758u;
    // 0x113758: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x113758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11375c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x11375cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x113760: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x113760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x113764: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x113764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x113768: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x113768u;
    {
        const bool branch_taken_0x113768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113768u;
        // 0x11376c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113768) {
            ctx->pc = 0x113798u;
            return;
        }
    }
    ctx->pc = 0x113770u;
}
