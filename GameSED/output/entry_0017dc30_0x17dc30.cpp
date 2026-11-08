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

// Function: entry_0017dc30
// Address: 0x17dc30 - 0x17dc40
void entry_0017dc30_0x17dc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dc30_0x17dc30");
#endif

    ctx->pc = 0x17dc30u;

    // 0x17dc30: 0xa7a30016  sh          $v1, 0x16($sp)
    ctx->pc = 0x17dc30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x17dc34: 0xa7a00010  sh          $zero, 0x10($sp)
    ctx->pc = 0x17dc34u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x17dc38: 0xa7a00012  sh          $zero, 0x12($sp)
    ctx->pc = 0x17dc38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x17dc3c: 0xa7a30014  sh          $v1, 0x14($sp)
    ctx->pc = 0x17dc3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x17dc40u;
}
