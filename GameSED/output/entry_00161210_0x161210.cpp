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

// Function: entry_00161210
// Address: 0x161210 - 0x161218
void entry_00161210_0x161210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161210_0x161210");
#endif

    ctx->pc = 0x161210u;

    // 0x161210: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x161210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x161214: 0x26041a40  addiu       $a0, $s0, 0x1A40
    ctx->pc = 0x161214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6720));
    ctx->pc = 0x161218u;
}
