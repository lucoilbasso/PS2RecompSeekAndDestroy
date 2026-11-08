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

// Function: entry_00191728
// Address: 0x191728 - 0x191738
void entry_00191728_0x191728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191728_0x191728");
#endif

    ctx->pc = 0x191728u;

    // 0x191728: 0x8e230158  lw          $v1, 0x158($s1)
    ctx->pc = 0x191728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x19172c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19172cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x191730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191734: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x191734u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    ctx->pc = 0x191738u;
}
