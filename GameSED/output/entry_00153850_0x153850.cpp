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

// Function: entry_00153850
// Address: 0x153850 - 0x153858
void entry_00153850_0x153850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153850_0x153850");
#endif

    ctx->pc = 0x153850u;

    // 0x153850: 0xae021244  sw          $v0, 0x1244($s0)
    ctx->pc = 0x153850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4676), GPR_U32(ctx, 2));
    // 0x153854: 0x32e20020  andi        $v0, $s7, 0x20
    ctx->pc = 0x153854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)32);
    ctx->pc = 0x153858u;
}
