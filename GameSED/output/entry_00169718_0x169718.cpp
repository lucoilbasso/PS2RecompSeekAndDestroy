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

// Function: entry_00169718
// Address: 0x169718 - 0x169724
void entry_00169718_0x169718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169718_0x169718");
#endif

    ctx->pc = 0x169718u;

    // 0x169718: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x169718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x16971c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16971Cu;
    {
        const bool branch_taken_0x16971c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16971Cu;
        // 0x169720: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16971c) {
            ctx->pc = 0x169730u;
            return;
        }
    }
    ctx->pc = 0x169724u;
}
