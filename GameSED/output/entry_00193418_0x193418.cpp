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

// Function: entry_00193418
// Address: 0x193418 - 0x19341c
void entry_00193418_0x193418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193418_0x193418");
#endif

    ctx->pc = 0x193418u;

    // 0x193418: 0xfd860008  sd          $a2, 0x8($t4)
    ctx->pc = 0x193418u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 6));
    ctx->pc = 0x19341cu;
}
