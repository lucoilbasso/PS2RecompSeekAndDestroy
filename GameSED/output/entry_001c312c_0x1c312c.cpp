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

// Function: entry_001c312c
// Address: 0x1c312c - 0x1c3138
void entry_001c312c_0x1c312c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c312c_0x1c312c");
#endif

    ctx->pc = 0x1c312cu;

    // 0x1c312c: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x1c312cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1c3130: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x1c3130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x1c3134: 0x0  nop
    ctx->pc = 0x1c3134u;
    // NOP
    ctx->pc = 0x1c3138u;
}
