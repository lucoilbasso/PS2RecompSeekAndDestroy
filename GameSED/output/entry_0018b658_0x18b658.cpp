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

// Function: entry_0018b658
// Address: 0x18b658 - 0x18b664
void entry_0018b658_0x18b658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b658_0x18b658");
#endif

    ctx->pc = 0x18b658u;

    // 0x18b658: 0x96020202  lhu         $v0, 0x202($s0)
    ctx->pc = 0x18b658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 514)));
    // 0x18b65c: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x18b65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x18b660: 0xa6020202  sh          $v0, 0x202($s0)
    ctx->pc = 0x18b660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 514), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18b664u;
}
