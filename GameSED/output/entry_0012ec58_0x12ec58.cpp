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

// Function: entry_0012ec58
// Address: 0x12ec58 - 0x12ec70
void entry_0012ec58_0x12ec58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ec58_0x12ec58");
#endif

    ctx->pc = 0x12ec58u;

    // 0x12ec58: 0x50a0001a  beql        $a1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x12EC58u;
    {
        const bool branch_taken_0x12ec58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec58) {
            ctx->pc = 0x12EC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC58u;
            // 0x12ec5c: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECC4u;
            return;
        }
    }
    ctx->pc = 0x12EC60u;
    // 0x12ec60: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x12ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x12ec64: 0x54510017  bnel        $v0, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x12EC64u;
    {
        const bool branch_taken_0x12ec64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x12ec64) {
            ctx->pc = 0x12EC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC64u;
            // 0x12ec68: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECC4u;
            return;
        }
    }
    ctx->pc = 0x12EC6Cu;
    // 0x12ec6c: 0x8cb000c4  lw          $s0, 0xC4($a1)
    ctx->pc = 0x12ec6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    ctx->pc = 0x12ec70u;
}
