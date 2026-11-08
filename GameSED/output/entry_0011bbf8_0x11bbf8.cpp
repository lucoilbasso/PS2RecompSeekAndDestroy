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

// Function: entry_0011bbf8
// Address: 0x11bbf8 - 0x11bc08
void entry_0011bbf8_0x11bbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bbf8_0x11bbf8");
#endif

    ctx->pc = 0x11bbf8u;

    // 0x11bbf8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11bbfc: 0x34039800  ori         $v1, $zero, 0x9800
    ctx->pc = 0x11bbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    // 0x11bc00: 0x244247c0  addiu       $v0, $v0, 0x47C0
    ctx->pc = 0x11bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18368));
    // 0x11bc04: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x11bc04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    ctx->pc = 0x11bc08u;
}
