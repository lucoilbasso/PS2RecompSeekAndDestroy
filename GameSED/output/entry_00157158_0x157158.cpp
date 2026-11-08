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

// Function: entry_00157158
// Address: 0x157158 - 0x157160
void entry_00157158_0x157158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157158_0x157158");
#endif

    ctx->pc = 0x157158u;

    // 0x157158: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x157158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15715c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x15715cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x157160u;
}
