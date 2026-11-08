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

// Function: entry_00159890
// Address: 0x159890 - 0x15989c
void entry_00159890_0x159890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159890_0x159890");
#endif

    ctx->pc = 0x159890u;

    // 0x159890: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x159890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x159894: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x159894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x159898: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x159898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->pc = 0x15989cu;
}
