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

// Function: entry_00127988
// Address: 0x127988 - 0x127990
void entry_00127988_0x127988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127988_0x127988");
#endif

    ctx->pc = 0x127988u;

    // 0x127988: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x127988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12798c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x12798cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x127990u;
}
