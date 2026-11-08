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

// Function: entry_00170008
// Address: 0x170008 - 0x170018
void entry_00170008_0x170008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170008_0x170008");
#endif

    ctx->pc = 0x170008u;

    // 0x170008: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x170008u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17000c: 0x54540002  bnel        $v0, $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x17000Cu;
    {
        const bool branch_taken_0x17000c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x17000c) {
            ctx->pc = 0x170010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17000Cu;
            // 0x170010: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170018u;
            return;
        }
    }
    ctx->pc = 0x170014u;
    // 0x170014: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x170014u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x170018u;
}
