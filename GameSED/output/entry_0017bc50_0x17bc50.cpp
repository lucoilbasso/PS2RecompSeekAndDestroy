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

// Function: entry_0017bc50
// Address: 0x17bc50 - 0x17bc64
void entry_0017bc50_0x17bc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bc50_0x17bc50");
#endif

    ctx->pc = 0x17bc50u;

    // 0x17bc50: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x17bc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x17bc54: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x17bc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17bc58: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x17bc58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x17bc5c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17BC5Cu;
    {
        const bool branch_taken_0x17bc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bc5c) {
            ctx->pc = 0x17BC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BC5Cu;
            // 0x17bc60: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BC7Cu;
            return;
        }
    }
    ctx->pc = 0x17BC64u;
}
