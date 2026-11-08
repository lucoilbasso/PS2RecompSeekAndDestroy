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

// Function: entry_00116410
// Address: 0x116410 - 0x116414
void entry_00116410_0x116410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116410_0x116410");
#endif

    ctx->pc = 0x116410u;

    // 0x116410: 0x323200ff  andi        $s2, $s1, 0xFF
    ctx->pc = 0x116410u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x116414u;
}
