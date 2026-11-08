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

// Function: entry_00104ea8
// Address: 0x104ea8 - 0x104ec8
void entry_00104ea8_0x104ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104ea8_0x104ea8");
#endif

    switch (ctx->pc) {
        case 0x104ec0u: goto label_104ec0;
        default: break;
    }

    ctx->pc = 0x104ea8u;

    // 0x104ea8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x104ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x104eac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x104eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104eb0: 0x50730005  beql        $v1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x104EB0u;
    {
        const bool branch_taken_0x104eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x104eb0) {
            ctx->pc = 0x104EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104EB0u;
            // 0x104eb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104EC8u;
            return;
        }
    }
    ctx->pc = 0x104EB8u;
    // 0x104eb8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x104EB8u;
    SET_GPR_U32(ctx, 31, 0x104EC0u);
    ctx->pc = 0x104EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104EB8u;
    // 0x104ebc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x104EB8u, 0x104EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104EC0u;
label_104ec0:
    // 0x104ec0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104EC0u;
    {
        const bool branch_taken_0x104ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EC0u;
        // 0x104ec4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ec0) {
            ctx->pc = 0x104ECCu;
            return;
        }
    }
    ctx->pc = 0x104EC8u;
}
