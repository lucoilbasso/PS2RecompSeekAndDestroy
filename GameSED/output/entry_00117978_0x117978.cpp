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

// Function: entry_00117978
// Address: 0x117978 - 0x1179a0
void entry_00117978_0x117978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117978_0x117978");
#endif

    ctx->pc = 0x117978u;

    // 0x117978: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x117978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11797c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x11797cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117980: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x117980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x117984: 0x2623000b  addiu       $v1, $s1, 0xB
    ctx->pc = 0x117984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 11));
    // 0x117988: 0xa2220006  sb          $v0, 0x6($s1)
    ctx->pc = 0x117988u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x11798c: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x11798cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x117990: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x117990u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x117994: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x117994u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x117998: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x117998u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x11799c: 0x0  nop
    ctx->pc = 0x11799cu;
    // NOP
    ctx->pc = 0x1179a0u;
}
