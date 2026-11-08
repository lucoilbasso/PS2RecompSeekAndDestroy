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

// Function: entry_001cf804
// Address: 0x1cf804 - 0x1cf820
void entry_001cf804_0x1cf804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf804_0x1cf804");
#endif

    ctx->pc = 0x1cf804u;

    // 0x1cf804: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1cf804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1cf808: 0x8fc5e5e8  lw          $a1, -0x1A18($fp)
    ctx->pc = 0x1cf808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294960616)));
    // 0x1cf80c: 0x2463e5d8  addiu       $v1, $v1, -0x1A28
    ctx->pc = 0x1cf80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960600));
    // 0x1cf810: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1cf810u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x24E5D8u));
    // 0x1cf814: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1cf814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1cf818: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CF818u;
    {
        const bool branch_taken_0x1cf818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf818) {
            ctx->pc = 0x1CF81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF818u;
            // 0x1cf81c: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF820u;
            return;
        }
    }
    ctx->pc = 0x1CF820u;
}
