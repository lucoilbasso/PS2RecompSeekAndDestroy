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

// Function: entry_0018a790
// Address: 0x18a790 - 0x18a798
void entry_0018a790_0x18a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a790_0x18a790");
#endif

    ctx->pc = 0x18a790u;

    // 0x18a790: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x18a790u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a794: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x18a794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    ctx->pc = 0x18a798u;
}
