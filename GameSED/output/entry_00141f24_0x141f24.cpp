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

// Function: entry_00141f24
// Address: 0x141f24 - 0x141f2c
void entry_00141f24_0x141f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141f24_0x141f24");
#endif

    ctx->pc = 0x141f24u;

    // 0x141f24: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x141f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x141f28: 0xaca200c0  sw          $v0, 0xC0($a1)
    ctx->pc = 0x141f28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 2));
    ctx->pc = 0x141f2cu;
}
