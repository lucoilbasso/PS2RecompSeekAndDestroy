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

// Function: entry_00153818
// Address: 0x153818 - 0x153838
void entry_00153818_0x153818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153818_0x153818");
#endif

    switch (ctx->pc) {
        case 0x153830u: goto label_153830;
        default: break;
    }

    ctx->pc = 0x153818u;

    // 0x153818: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x153818u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x15381c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15381cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x153820: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x153820u;
    {
        const bool branch_taken_0x153820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153820) {
            ctx->pc = 0x153824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153820u;
            // 0x153824: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153838u;
            return;
        }
    }
    ctx->pc = 0x153828u;
    // 0x153828: 0xc053fe6  jal         func_14FF98
    ctx->pc = 0x153828u;
    SET_GPR_U32(ctx, 31, 0x153830u);
    ctx->pc = 0x15382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153828u;
    // 0x15382c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x153828u, 0x153830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153830u;
label_153830:
    // 0x153830: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x153830u;
    {
        const bool branch_taken_0x153830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153830u;
        // 0x153834: 0x8e42037c  lw          $v0, 0x37C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153830) {
            ctx->pc = 0x153850u;
            return;
        }
    }
    ctx->pc = 0x153838u;
}
