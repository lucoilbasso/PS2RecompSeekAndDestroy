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

// Function: entry_001415e4
// Address: 0x1415e4 - 0x141604
void entry_001415e4_0x1415e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001415e4_0x1415e4");
#endif

    ctx->pc = 0x1415e4u;

    // 0x1415e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1415e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1415e8: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1415e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1415ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1415ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1415f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1415f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1415f4: 0x25240020  addiu       $a0, $t1, 0x20
    ctx->pc = 0x1415f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1415f8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1415f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1415fc: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x1415fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x141600: 0xad260010  sw          $a2, 0x10($t1)
    ctx->pc = 0x141600u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 6));
    ctx->pc = 0x141604u;
}
