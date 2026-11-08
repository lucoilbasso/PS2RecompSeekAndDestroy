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

// Function: entry_001162b4
// Address: 0x1162b4 - 0x1162bc
void entry_001162b4_0x1162b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001162b4_0x1162b4");
#endif

    ctx->pc = 0x1162b4u;

    // 0x1162b4: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1162b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1162b8: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x1162b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x1162bcu;
}
