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

// Function: entry_0014cbb0
// Address: 0x14cbb0 - 0x14cbbc
void entry_0014cbb0_0x14cbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cbb0_0x14cbb0");
#endif

    ctx->pc = 0x14cbb0u;

    // 0x14cbb0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14cbb4: 0x5445fffc  bnel        $v0, $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x14CBB4u;
    {
        const bool branch_taken_0x14cbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x14cbb4) {
            ctx->pc = 0x14CBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CBB4u;
            // 0x14cbb8: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CBA8u;
            return;
        }
    }
    ctx->pc = 0x14CBBCu;
}
