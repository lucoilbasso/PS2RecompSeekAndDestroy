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

// Function: entry_001bd384
// Address: 0x1bd384 - 0x1bd3ac
void entry_001bd384_0x1bd384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd384_0x1bd384");
#endif

    switch (ctx->pc) {
        case 0x1bd3a8u: goto label_1bd3a8;
        default: break;
    }

    ctx->pc = 0x1bd384u;

    // 0x1bd384: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1bd384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bd388: 0x52102f  dsubu       $v0, $v0, $s2
    ctx->pc = 0x1bd388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x1bd38c: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x1bd38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x1bd390: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1bd390u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1bd394: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x1bd394u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd398: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD398u;
    {
        const bool branch_taken_0x1bd398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd398) {
            ctx->pc = 0x1BD39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD398u;
            // 0x1bd39c: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD3ACu;
            return;
        }
    }
    ctx->pc = 0x1BD3A0u;
    // 0x1bd3a0: 0xc07105e  jal         func_1C4178
    ctx->pc = 0x1BD3A0u;
    SET_GPR_U32(ctx, 31, 0x1BD3A8u);
    ctx->pc = 0x1BD3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD3A0u;
    // 0x1bd3a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4178u, 0x1BD3A0u, 0x1BD3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD3A8u;
label_1bd3a8:
    // 0x1bd3a8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1bd3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x1bd3acu;
}
