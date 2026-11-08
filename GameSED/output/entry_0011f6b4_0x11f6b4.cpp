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

// Function: entry_0011f6b4
// Address: 0x11f6b4 - 0x11f6d4
void entry_0011f6b4_0x11f6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f6b4_0x11f6b4");
#endif

    ctx->pc = 0x11f6b4u;

    // 0x11f6b4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x11f6b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11f6b8: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x11f6b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x11f6bc: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x11f6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x11f6c0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x11f6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x11f6c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F6C4u;
    {
        const bool branch_taken_0x11f6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6C4u;
        // 0x11f6c8: 0x2d230005  sltiu       $v1, $t1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6c4) {
            ctx->pc = 0x11F6D8u;
            return;
        }
    }
    ctx->pc = 0x11F6CCu;
    // 0x11f6cc: 0x5460ffb2  bnel        $v1, $zero, . + 4 + (-0x4E << 2)
    ctx->pc = 0x11F6CCu;
    {
        const bool branch_taken_0x11f6cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f6cc) {
            ctx->pc = 0x11F6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F6CCu;
            // 0x11f6d0: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F598u;
            return;
        }
    }
    ctx->pc = 0x11F6D4u;
}
