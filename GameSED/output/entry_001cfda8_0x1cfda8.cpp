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

// Function: entry_001cfda8
// Address: 0x1cfda8 - 0x1cfdac
void entry_001cfda8_0x1cfda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfda8_0x1cfda8");
#endif

    ctx->pc = 0x1cfda8u;

    // 0x1cfda8: 0x2684e1b8  addiu       $a0, $s4, -0x1E48
    ctx->pc = 0x1cfda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959544));
    ctx->pc = 0x1cfdacu;
}
