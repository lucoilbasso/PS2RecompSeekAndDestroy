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

// Function: entry_0010b678
// Address: 0x10b678 - 0x10b6a8
void entry_0010b678_0x10b678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b678_0x10b678");
#endif

    switch (ctx->pc) {
        case 0x10b68cu: goto label_10b68c;
        default: break;
    }

    ctx->pc = 0x10b678u;

    // 0x10b678: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x10b678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x10b67c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b680: 0x24a5f5d0  addiu       $a1, $a1, -0xA30
    ctx->pc = 0x10b680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964688));
    // 0x10b684: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x10B684u;
    SET_GPR_U32(ctx, 31, 0x10B68Cu);
    ctx->pc = 0x10B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B684u;
    // 0x10b688: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x10B684u, 0x10B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B68Cu;
label_10b68c:
    // 0x10b68c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10b690: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10b690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10b694: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b698: 0x5044000b  beql        $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x10B698u;
    {
        const bool branch_taken_0x10b698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x10b698) {
            ctx->pc = 0x10B69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B698u;
            // 0x10b69c: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B6C8u;
            return;
        }
    }
    ctx->pc = 0x10B6A0u;
    // 0x10b6a0: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x10b6a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x10b6a4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x10b6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10b6a8u;
}
