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

// Function: entry_00184938
// Address: 0x184938 - 0x184944
void entry_00184938_0x184938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184938_0x184938");
#endif

    ctx->pc = 0x184938u;

    // 0x184938: 0x95650030  lhu         $a1, 0x30($t3)
    ctx->pc = 0x184938u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x18493c: 0xdd640038  ld          $a0, 0x38($t3)
    ctx->pc = 0x18493cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 56)));
    // 0x184940: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x184940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x184944u;
}
