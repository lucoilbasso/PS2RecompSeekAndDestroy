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

// Function: entry_00187aac
// Address: 0x187aac - 0x187ab8
void entry_00187aac_0x187aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187aac_0x187aac");
#endif

    ctx->pc = 0x187aacu;

    // 0x187aac: 0x3c0c2000  lui         $t4, 0x2000
    ctx->pc = 0x187aacu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)8192 << 16));
    // 0x187ab0: 0x358c0080  ori         $t4, $t4, 0x80
    ctx->pc = 0x187ab0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)128);
    // 0x187ab4: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x187ab4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    ctx->pc = 0x187ab8u;
}
