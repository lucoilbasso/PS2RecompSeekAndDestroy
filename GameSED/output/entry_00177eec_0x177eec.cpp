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

// Function: entry_00177eec
// Address: 0x177eec - 0x177efc
void entry_00177eec_0x177eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177eec_0x177eec");
#endif

    ctx->pc = 0x177eecu;

    // 0x177eec: 0xa440001a  sh          $zero, 0x1A($v0)
    ctx->pc = 0x177eecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x177ef0: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x177ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x177ef4: 0xa440000c  sh          $zero, 0xC($v0)
    ctx->pc = 0x177ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x177ef8: 0xa440000a  sh          $zero, 0xA($v0)
    ctx->pc = 0x177ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x177efcu;
}
