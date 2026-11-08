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

// Function: entry_0015f944
// Address: 0x15f944 - 0x15f95c
void entry_0015f944_0x15f944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f944_0x15f944");
#endif

    ctx->pc = 0x15f944u;

    // 0x15f944: 0x2404f7ff  addiu       $a0, $zero, -0x801
    ctx->pc = 0x15f944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x15f948: 0x96a30016  lhu         $v1, 0x16($s5)
    ctx->pc = 0x15f948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 22)));
    // 0x15f94c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x15f94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x15f950: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15f950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15f954: 0xa6a20014  sh          $v0, 0x14($s5)
    ctx->pc = 0x15f954u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x15f958: 0xa6a30016  sh          $v1, 0x16($s5)
    ctx->pc = 0x15f958u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 22), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x15f95cu;
}
