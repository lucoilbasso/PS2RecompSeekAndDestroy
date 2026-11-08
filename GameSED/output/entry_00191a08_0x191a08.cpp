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

// Function: entry_00191a08
// Address: 0x191a08 - 0x191a18
void entry_00191a08_0x191a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191a08_0x191a08");
#endif

    ctx->pc = 0x191a08u;

    // 0x191a08: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x191a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x191a0c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x191a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x191a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191a14: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x191a14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    ctx->pc = 0x191a18u;
}
