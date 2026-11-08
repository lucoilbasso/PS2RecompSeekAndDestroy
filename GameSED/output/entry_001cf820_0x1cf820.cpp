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

// Function: entry_001cf820
// Address: 0x1cf820 - 0x1cf838
void entry_001cf820_0x1cf820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf820_0x1cf820");
#endif

    ctx->pc = 0x1cf820u;

    // 0x1cf820: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1cf820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1cf824: 0x2463e5e0  addiu       $v1, $v1, -0x1A20
    ctx->pc = 0x1cf824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960608));
    // 0x1cf828: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1cf828u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x24E5E0u));
    // 0x1cf82c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1cf82cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1cf830: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CF830u;
    {
        const bool branch_taken_0x1cf830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf830) {
            ctx->pc = 0x1CF834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF830u;
            // 0x1cf834: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF838u;
            return;
        }
    }
    ctx->pc = 0x1CF838u;
}
