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

// Function: entry_00159768
// Address: 0x159768 - 0x159778
void entry_00159768_0x159768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159768_0x159768");
#endif

    ctx->pc = 0x159768u;

    // 0x159768: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x159768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15976c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x15976cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x159770: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x159770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x159774: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x159774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->pc = 0x159778u;
}
